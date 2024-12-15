## Exercise 9.11

Write the following function:

`float compute_GPA(char grades[], int n);`  

The `grades` array will contain letter grades (`A`, `B`, `C`, `D`, or `F`, either upper-case or lower-case); `n` is the length of the array. THe function should return the average of the grades (assume that `A=4`, `B=3`, `C=2`, `D=1`, and `F=0`).

## Solution

```c
float compute_GPA(char grades[], int n)
{
    float GPA = 0.0f;

    for (int i = 0; i < n; i++)
    {
        switch(grades[i]) {
            case 'A': case 'a':
                GPA += 4;
                break;
            case 'B': case 'b':
                GPA += 3;
                break;
            case 'C': case 'c':
                GPA += 2;
                break;
            case 'D': case 'd':
                GPA += 1;
                break;
            default:
                break;
        }
    }

    return GPA / n;
}
```
