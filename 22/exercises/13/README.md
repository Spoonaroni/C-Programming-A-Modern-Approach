# Exercise 22.13

Write the following function:

```c
int line_length(const char *filename, int n);
```

The function should return the length of line `n` in the text file whose name is
`filename` (assuming that the first line in the file is line 1). If the line
doesn't exist, the function should return 0.

## Solution

```c
int line_length(const char *filename, int n)
{
    int line_len = 0, ch;
    FILE *fp;

    if ((fp = fopen(filename, "r")) == NULL)
        return 0;

    while (n > 1) {
        if ((ch = getc(fp)) == EOF) {
            fclose(fp);
            return 0;
        }

        if (ch == '\n')
            n--;
    }

    while ((ch = getc(fp)) != '\n' && ch != EOF)
        line_len++;

    fclose(fp);
    return line_len;
}
```
