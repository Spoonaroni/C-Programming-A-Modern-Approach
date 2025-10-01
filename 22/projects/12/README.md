# Project 22.12

Modify Programming Project 2 from Chapter 3 so that the program reads a series
of items from a file and displays the data in columns. Each line of the file
will have the following form:

```txt
item,price,mm/dd/yyyy
```

For example, suppose that the file contains the following lines:

```txt
583,13.5,10/24/2005
3912,599.99,7/27/2008
```

The output of the program should have the following appearance:

```txt
Item            Unit            Purchase
                Price           Date
583             $  13.50        10/24/2005
3912            $ 599.99        7/27/2008
```

Have the program obtain the file name from the command line.

## Solution

See `12.c`
