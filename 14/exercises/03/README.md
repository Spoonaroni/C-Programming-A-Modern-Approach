# Exercise 14.03

let `DOUBLE` be the following macro:

```c
#define DOUBLE(x) 2*x
```

(a) What is the value of `DOUBLE(1+2)`?  
(b) What is the value of `4/DOUBLE(2)`?  
(c) Fix the definition of `DOUBLE`.  

## Solution

(a) `2*1+2` is equal to 4  
(b) `4/2*2` is equal to 4  
(c) `DOUBLE(x) (2*(x))`
