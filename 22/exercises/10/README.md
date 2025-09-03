# Exercise 22.10

The `fcopy.c` program has one minor flaw: it doesn't check for errors as it's
writing to the destination file. Errors during writing are rare, but do
occasionally occur (the disk might become full, for example). Show how to add
the missing error check to the program, assuming we want it to display a message
and terminate immediately if an error occurs.

## Solution

```c
while ((ch = getc(source_fp)) != EOF) {
    if (putc(ch, dest_fp) == EOF){
        fprintf(stderr, "Error occured while writing to %s\n", argv[2]);
        fclose(source_fp);
        fclose(dest_fp);
        exit(EXIT_FAILURE);
    }
}
```
