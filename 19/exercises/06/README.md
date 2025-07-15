# Exercise 19.06

(a) Add a `peek` function to `stackADT.c` This function will have a parameter of
type `Stack`. When called, it returns the top item on the stack but doesn't modify
the stack.

(b) Repeat part (a), modifying `stackADT2.c` this time.

(c) Repeat part (a), modifying `stackADT3.c` this time.

## Solution

(a)

```c
int peek(Stack s)
{
    if (is_emmpty(s))
        terminate("Error: Stack is empty.");
    return s->contents[s->top - 1];
}
```

(b)

```c
Item peek(Stack s)
{
    if (is_empty(s))
        terminate("Error: Stack is empty.");
    return s->contents[s->top - 1];
}
```

(c)

```c
Item peek(Stack s)
{
    if (is_empty(s))
        terminate("Error: Stack is empty.");
    return s->top->value;
}
```
