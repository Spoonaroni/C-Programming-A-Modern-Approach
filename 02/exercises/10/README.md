## Exercise 2.10

In the `dweight.c` program (Section 2.4). which spaces are essential?  

## Solution

```c
/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    height = 8; 
    length = 12;
    width = 10;
    volume = height * length * width; 
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height); 
    printf("Volume (cubic inches): %d\n", volume); 
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
```

The spaces that are necessary are:  
1. The space between `int` and `main`  
2. The space between `int` and `height`  
3. The space between `return` and `0`  