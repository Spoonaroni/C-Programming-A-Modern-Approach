# Exercise 18.08

Write a comnplex description of the type of `x` as specified by each of the
following declarations.

(a) `char (*x[10]) (int);`  
(b) `int (*x(int)) [5];`  
(c) `float *(*x(void)) (int);`  
(d) `void (*x(int, void (*y) (int))) (int);`  

## Solution

(a) Type of `x`:  
    1. array of 10  
    2. pointers to  
    3. functions with an `int` argument  
    4. returning `char`  

(b) Type of `x`:
    1. function with an `int` argument that  
    2. returns a pointer to  
    3. an array of 5  
    4. integers  

(c) Type of `x`:
    1. function with no arguments that  
    2. returns a pointer to  
    3. a function with an `int` argument  
    4. returning a pointer to `float`  

(d) Type of `x`:
    1. function with two arguments; an `int` and a function with an `int`
    argument and returns nothing, that  
    2. returns a pointer to  
    3. a function with `int` argument that  
    4. returns nothing  
