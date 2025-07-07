# Exercise 18.09

Use a series of type definitions to simplify each of the declarations in
Exercise 8.

## Solution

(a)

```c
typedef char Fcn(int);
typedef Fcn *Fcn_ptr;
typedef Fcn_ptr Fcn_ptr_array[10];
Fcn_ptr_array x;
```

(b)

```c
typedef int a[5];
typedef a *array_ptr;
typedef array_ptr array_fcn(int);
array_fcn x;
```

(c)

```c
typedef float *Fcn(int);
typedef Fcn *Fcn_ptr;
typedef Fcn_ptr Fcn_fcn(void);
Fcn_fcn x;
```

(d)

```c
typedef void Fcn(int);
typedef Fcn *Fcn_ptr;
typedef void Fcn_arg(int);
typedef Fcn_ptr Fcn_fcn(int, Fcn_arg);
Fcn_fcn x;
```
