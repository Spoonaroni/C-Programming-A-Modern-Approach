# Exercise 13.01

The following function calls supposedly write a single new-line character, but some
are incorrect. Identify which calls don't work and explain why.

```text
(a) printf("%c", '\n');     (g) putchar('\n');
(b) printf("%c", "\n");     (h) putchar("\n");
(c) printf("%s", '\n');     (i) puts('\n');
(d) printf("%s", "\n");     (j) puts("\n");
(e) printf('\n');           (k) puts("");
(f) printf("\n");
```

## Solution

(a) Correct, prints the character `\n` therefore creating a new-line.  
(b) Incorrect, `%c` expects a `char` but recieves a `string`.  
(c) Incorrect, `%s` expects a `string` but recieves a `char`.  
(d) Correct, prints the character `\n` therefore creating a new-line.  
(e) Incorrect, not a string literal.
(f) Correct, prints the character `\n` therefore creating a new-line.  
(g) Correct, prints the character `\n` therefore creating a new-line.  
(h) Incorrect, `putchar` expects a `char`  
(i) Incorrect, wrong argument type for `puts`  
(j) Incorrect, this would print 2 new-lines.  
(k) Correct, `puts` always writes an additional new-line character.  
