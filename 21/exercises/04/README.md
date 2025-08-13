# Exercise 21.04

Make a list of all reserved identifiers in the `future library directions`
section of the C99 standard. Distinguish between identifiers that are reserved
for use only when a specific header is included versus identifiers that are
reserved for use as external names.

## Solution

### <complex.h>

These functions:

```text
cerf        cexpm1      clog2
cerfc       clog10      clgamma
cexp2       clog1p      ctgamma
```

plus the same names with `f` or `l` as a suffix

### <ctype.h>

Function names that start with `is` or `to` followed by a lowercase letter

### <errno.h>

Macro names that start with `E` followed by a digit or an uppercase letter

### <inttypes.h>

Macro names that start with `PRI` or `SCN` followed by a lowercase letter or the
letter `X`

### <locale.h>

Macro names that start with `LC_` followed by an uppercase letter

### <signal.h>

Macro names that start with `SIG` followed by an uppercase letter or start with
`SIG_` followed by an uppercase letter

### <stdbool.h>

`bool`, `true`, and `false`

### <stdint.h>

Typedef names starting with `int` or `uint` and ending with `_t`. Macro names
starting with `INT` or `UINT` and ending with `_MAX`, `_MIN`, or `_C`

### <stdio.h>

Lowercase letters may be added to the conversion specifiers and length modifiers
in fprintf and fscanf. Other characters may be used in extensions.

### <stdlib.h>

Function names that start with `str` followed by a lowercase letter

### <string.h>

Function names that start with `str`, `mem`, or `wcs` followed by a lowercase
letter

### <wchar.h>

Function names that start with `wcs` followed by a lowercase letter. Lowercase
letters may be added to the conversion specifiers and length modifiers in
fwprintf and fwscanf. Other characters may be used in extensions.

### <wctype.h>

Function names that start with `is` or `to` followed by a lowercase letter
