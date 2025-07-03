# Exercise 18.01

For each of the following declarations, identify the storage class, type qualifiers,
type specifiers, declarators, and initializers.

(a) `static char **lookup(int level);`  
(b) `volatile unsigned long io_flags;`  
(c) `extern char *file_name[MAX_FILES], path[];`  
(d) `static const char token_buf[] = "";`

## Solution

(a) Storage class is `static`, no type qualifiers, type specifier is `char **`,
declarator is `lookup(int level)`, and no initializers.  

(b) No storage class, type qualifier is `volatile`, type specifiers are `unsigned`
and `long`, declarator is `io_flags`, and no initializers.  

(c) Storage class is `extern`, no type qualifiers, type specifier is `char *`,
declarators are`file_name[MAX_FILES]` and `path[]`, and no initializers.  

(d) Storage class is `static`, type qualifier is `const`, type specifier
is `char`, delcarator is `token_buf[]`, and the initializer is `""`
