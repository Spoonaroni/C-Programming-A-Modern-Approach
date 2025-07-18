# Exercise 17.14

Modify the `delete_from_list` function (Section 17.5) so that its first parameter
has type `struct node **` (a pointer to a pointer to the first node in a list) and
its return type is void, `delete_from_list` must modify its first argument to point
to the list after the desired node has been deleted.

## Solution

```c
void delete_from_list(struct node **list, int n) {
    struct node *cur = *list;

    while (cur != NULL) {
        if (cur->value == n) {
            *list = cur->next;
            free(cur);
            cur = *list;
        }
        else {
            list = &cur->next;
            cur = cur->next;
        }
    }
}
```
