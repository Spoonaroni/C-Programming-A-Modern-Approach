# Exercise 22.12

Find the error in the following function and show how to fix it.

```c
int count_periods(const char *filename)
{
    FILE *fp;
    int n = 0;

    if ((fp = fopen(filename, "r")) != NULL) {
        while (fgetc(fp) != EOF)
            if (fgetc(fp) == '.')
                n++;
        fclose(fp);
    }

    return n;
}
```

## Solution

The error in the given function is caused by calling `fgetc(fp)` twice. This not
only skips a character, but also makes the `EOF` check useless. To fix this,
assign the return value of `fgetc(fp)` to a variable. Then that variable can be
used to check for `EOF` and `.`.

```c
int count_periods(const char *filename)
{
    FILE *fp;
    int n = 0, ch;

    if ((fp = fopen(filename, "r")) != NULL) {
        while ((ch = fgetc(fp)) != EOF) {
            if (ch == '.')
                n++;
        }
        fclose(fp);
    }

    return n;
}
```
