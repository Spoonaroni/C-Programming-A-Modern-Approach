# Exercise 22.03

Find the error in the following program fragment and show how to fix it.

```c
FILE *fp;

if (fp = fopen(filename, "r")) {
    // read characters until end-of-file
}
fclose(fp);
```

## Solution

The error in this program fragment is that the `if` statement does not check if
`fp` is `NULL`.

```c
FILE *fp;

if ((fp = fopen(filename, "r")) != NULL) {
    // read characters until end-of-file
} else {
    fprintf(stderr, "Error: file %s cannot be opened\n", filename);
    exit(EXIT_FAILURE);
}
fclose(fp);
```
