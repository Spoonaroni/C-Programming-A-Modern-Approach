# Exercise 17.13

The following function is supposed to insert a new node into its proper place in
an ordered list, returning a pointer to the first node in the modified list.
Unfortunately, the function doesn't work correctly in all cases. Explain what's
wrong with it and show how to fix it. Assume that the `node` structure is the one
defined in Section 17.5.

```c
struct node *insert_into_ordered_list(struct node *list,
                                      struct node *new_node)
{
    struct node *cur = list, *prev = NULL;
    while (cur->value <= new_node->value) {
        prev = cur;
        cur = cur->next;
    }
    prev->next = new_node;
    new_node->next = cur;
    return list;
}
```

## Solution

The problem with this function is that is does not account for if `new_node` needs
to be put at the beginning or end of the list. It also does not account for if the
list is empty.

```c
struct node *insert_into_ordered_list(struct node *list,
                                      struct node *new_node)
{
    // If the list is empty
    if (list == NULL) {
        new_node->next = NULL;
        return new_node;
    }

    // Search for n or reach the end
    struct node *cur = list, *prev = NULL;
    while (cur != NULL && cur->value <= new_node->value) {
        prev = cur;
        cur = cur->next;
    }

    // If new_node belongs at the front of the list
    if (prev == NULL) {
        new_node->next = list;
        return new_node;
    }

    // If new_node belongs at the end of the list
    if (cur == NULL) {
        prev->next = new_node;
        new_node->next = NULL;
        return list;
    }

    // Otherwise insert new_node after prev and before cur
    prev->next = new_node;
    new_node->next = cur;

    return list;
}
```
