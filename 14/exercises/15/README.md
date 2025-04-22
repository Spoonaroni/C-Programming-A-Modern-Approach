# Exercise 14.15

Suppose that a program needs to display messages in either English, French, or Spanish.
Using conditional compilation, write a program fragement that displays one of the
following three messages, depending on whether or not the specified macro is defined:

```text
Insert Disk 1       (if ENGLISH is defined)
Inserez Le Disque 1 (if FRENCH is defined)
Insete El Disco 1   (if SPANISH is defined)
```

## Solution

```c
#if defined(ENGLISH)
    printf("Insert Disk 1\n");
#elif defined(FRENCH)
    printf("Inzerez Le Disque 1\n");
#elif defined(SPANISH)
    printf("Insete El Disco 1\n");
#endif
```
