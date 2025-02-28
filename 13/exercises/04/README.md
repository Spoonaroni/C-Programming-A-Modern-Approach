# Exercise 13.04

Modify the `read_line` function in each of the following ways:

(a) Have it skip white space before beginning to store input  
characters.  
(b) Have it stop reading at the first white-space character. *Hint*: To  
determine whether or not a character is white space, call the `isspace`  
function.  
(c) Have it stop reading st the first new-line character, then store the  
new-line character in the string.  
(d) Have it leave behind characters that it doesn't have room to store.  

## Solution

```c
int read_line(char str[], int n)
{
    int ch, i = 0;

    while (isspace(getchar()) // skips white-space
        ;

    while (i < n && (ch = getchar()) != '\n' && !isspace(ch)) // stops white-space and leaves characters
        str[i++] = ch;
    if (ch == '\n' && i < n - 1)
        str[i++] = '\n' // stores new-line
    str[i] = '\0';      /* terminates string */
    return i;           /* number of characters stored */
}
```
