# Exercise 14.12

Suppose that the macro `M` has been defined as follows:

```c
#define M 10
```

Which of the following tests will fail?

(a) `#if M`  
(b) `#ifdef M`  
(c) `#ifndef M`  
(d) `#if defined(M)`  
(e) `#if !defined(M)`

## Solution

(a) Pass, tests if `M` is not zero  
(b) Pass, tests if `M` is defined  
(c) Fail, tests if `M` is not defined  
(d) Pass, tests if `M` is defined  
(e) Fail, tests if `M` is not defined
