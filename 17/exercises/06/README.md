# Exercise 17.06

Modify the `delete_from_list` function so that it uses only one pointer variable
instead of two (`cur` and `prev`).

## Solution

```c
struct node *delete_from_list(struct node *list, int n)
{
    struct node *point;

    if (list != NULL && list->value == n) { // if n is at the start of the list
        point = list;
        list = list->next;
        free(point);
        return list;
    }

    for (point = list;
         point != NULL && point->next != NULL && point->next->value != n;
         point = point->next)
        ;

    if (point == NULL || point->next == NULL) // if n is not in the list
        return list;
    else {
        struct node *to_be_deleted = point->next;
        point->next = to_be_deleted->next;
        free(to_be_deleted);
    }

    return list;
}
```
