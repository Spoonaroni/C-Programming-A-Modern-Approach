# Exercise 18.03

List the storage duration (static or automatic), scope (block or file), and
linkage (internal, external, or none) of each variable and parameter in the
following file:

```c
extern float a;

void f(register double b)
{
    static int c;
    auto char d;
}
```

## Solution

`a`: static storage duration, file scope, and external linkage  
`b`: automatic storage duration, block scope, and no linkage  
`c`: static storage duration, block scope, and no linkage  
`d`: automatic storage duration, block scope, and no linkage
