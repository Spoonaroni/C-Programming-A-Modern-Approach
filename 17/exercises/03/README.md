# Exercise 17.03

Write the following function:

```c
int *create_array(int n, int initial_value);
```

The function should return a pointer to a dynamically allocated `int` array with
`n` members, each of which is initialized to `initial_value`. The return value
should be `NULL` if the array can't be allocated.

## Solution

```c
int *create_array(int n, int initial_value)
{
    int *array = malloc(n * sizeof(int));

    if (array == NULL)
        return NULL;

    for (int i = 0; i < n; i++) {
        array[i] = initial_value;
    }

    return array;
}
```
