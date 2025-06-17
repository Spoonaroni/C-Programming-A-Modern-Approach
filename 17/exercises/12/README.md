# Exercise 17.12

Write the following function:

```c
struct node *find_last(struct node *list, int n);
```

The `list` parameter points to a linked list. The function should return a pointer
to the *last* node that contains `n`; it should return `NULL` if `n` doesn't appear
in the list. Assume that the `node` structure is the one defined in Section 17.5.

## Solution

```c
struct node *find_last(struct node *list, int n)
{
    struct node *last = NULL;

    while (list != NULL) {
        if (list->value == n) {
            last = list;
        }
        list = list->next;
    }

    return last;
}
```
