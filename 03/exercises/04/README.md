## Exercise 4

Suppose that we call `scanf` as follows: 

```c
scanf("%d%f%d", &i, &x, &j);  
```

If the user enters  

```
10.3 5 6  
```

What will be the values of `i`, `x`, and `j` after the call? (Assume that `i` and `j` are `int` variables and `x` is a `float` variable.)  

## Solution

```
i = 10  
x = 0.300000  
j = 5  
```

`i` will become 10 because an `int` can't have a decimal point in it. `x` will pick up where `i` left off. 
Then `j` will take the next input. Leaving 6 for the next call of `scanf`.