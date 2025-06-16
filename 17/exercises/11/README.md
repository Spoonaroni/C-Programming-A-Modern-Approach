# Exercise 17.11

Write the following function:

```c
int count_occurrences(struct node *list, int n);
```

The `list` parameter points to a linked list; the function should return the number
of times that `n` appears in this list. Assume that the `node` structure is the one
define in Section 17.5.

## Solution

```c
int count_occurences(struct node *list, int n)
{
    struct node *cur = list;
    int i = 0;

    while (cur != NULL) {
        if (cur->value == n) {
            i += 1;
        }
        cur = cur->next;
    }

    return i;
}
```
