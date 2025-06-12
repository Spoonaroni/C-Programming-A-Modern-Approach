# Exercise 17.07

The following loop is supposed to delete all nodes from a linked list and release
the memory that they occupy. Unfortunately, the loop is incorrect. Explain what's
wrong with it and show how to fix the bug.

```c
for (p = first; p != NULL; p = p->next)
    free(p);
```

## Solution

The bug in this loop is that it calls `free(p)` then tries `p = p->next` even
though `p` has been deallocated. This will create a dangling pointer and cause
undefined behavior. To fix this the loop needs a temporary pointer to point to
the node about to be deleted.

```c
struct node *temp;

p = first;
while (p != NULL) {
    temp = p;
    p = p->next;
    free(temp);
}
```
