## Exercise 10.02

The following program outline shows only function definitions and variable definitions.

```c
int b, c;

void f(void)
{
    int b, d;
}

void g(int a)
{
    int c;
    {
        int a, d;
    }
}

int main(void)
{
    int c, d;
}
```

For each of the following scopes, list all variable and parameter names visible in that scope.
If there's more than one variable or parameter with the same name, idicate which one is
visble.  

(a) The `f` function  
(b) The `g` function  
(c) The block in which `a` and `d` are declared  
(d) The `main` function  

## Solution

(a) `c`, `b` local, and `d`  
(b) `b`, `a`, and `c` local  
(c) `b`, `c` local, `a` block, and `d`  
(d) `b`, `c` local, and `d`  
