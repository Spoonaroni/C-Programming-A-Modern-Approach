# Exercise 14.04

For each of the following macros, give an example that illustrates a problem with
the macro and show how to fix it.

`(a) #define AVG(x,y) (x+y)/2`  
`(b) #define AREA(x,y) (x)*(y)`

## Solution

(a) `#define AVG(x,y) (((x)+(y))/2)`  
(b) `#define AREA(x,y) ((x)*(y))`
