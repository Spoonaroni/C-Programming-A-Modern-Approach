# Exercise 18.05

State whether each of the following statements is true or false. Justify
each answer.

(a) Every variable with static storage duration has file scope.  
(b) Every variable declared inside a function has no linkage.  
(c) Every variable with internal linkage has static storage duration.  
(d) Every parameter has block scope.  

## Solution

(a) False, a `static` variable declared in a function has block scope.  
(b) False, a variable declared `extern` can have either internal or external
    linkage.  
(c) True, a variable declared `static` produces a variable with internal linkage
    and therefore static storage duraton
(d) True, parameters have the same properties as `auto` variables and can only
    be assigned the `register` storage class (which does not affect scope).
