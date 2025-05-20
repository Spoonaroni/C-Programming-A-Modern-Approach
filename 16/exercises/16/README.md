# Exercise 16.16

Which of the following statements about enumeration constants are true?

(a) An enumeration constant may represent any integer specified by the
programmer.  
(b) Enumeration constants have exactly the same properties as constants createed
using `#define`.  
(c) Enumeration constants have the values 0, 1, 2, ... by default.  
(d) All constants in an enumeration must have different values.  
(e) Enumeration constants may be used as integers in expressions.

## Solution

(a) True  
(b) False, enumerations are not global constants and are not affected by the
preprocessor.  
(c) True  
(d) False, enumeration constants can have the same values.  
(e) True
