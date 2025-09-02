# Exercise 22.07

Suppose that we call `scanf` as follows:

```c
n = scanf("%d%f%d", &i, &x, &j);
```

(`i`, `j`, and `n` are `int` variables and `x` is a `float` variable.) Assuming
that the input stream contains the characters shown, give the values of `i`,
`j`, `n` and `x` after the call. In addition, indicate which characters were
consumed by the call.

(a) `10•20•30`  
(b) `1.0•2.0•3.0`  
(c) `0.1•0.2•0.3`  
(d) `.1•.2•.3`  

## Solution

(a)  

~~10•20•30~~¤  
`n`: 3  
`i`: 10  
`x`: 20.000000  
`j`: 30  

(b)  

~~1.0•2~~.0•3.0¤  
`n`: 3  
`i`: 1  
`x`: 0.000000  
`j`: 2  

(c)  

~~0.1•0~~.2•0.3¤  
`n`: 3  
`i`: 0  
`x`: 0.100000  
`j`: 0  

(d)  

.1•.2•.3¤  
`n`: 0  
`i`: unchanged  
`x`: unchanged  
`j`: unchanged  
