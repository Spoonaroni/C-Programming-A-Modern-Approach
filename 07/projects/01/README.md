## Project 7.01

The `square2.c` program of Section 6.3 will fail (usually by printing strange answers) if `i * i` exceeds the maximum `int` value. Run the program and determine the smallest value of `n` that causes failure. Try changing the type of `i` to `short` and running the program again. (Don't forget to update the conversion specifications in the call of `printf`!) Then try `long`. From these experiments, what can your conclude about the number of bits used to store integer types on your machine?

## Solution

See `1.c`

On my 64-bit machine the largest number for each type is:
`int`: 46341, 32-bit  
`short`: 182, 16-bit  
`long`: 3037000500, 64-bits  
