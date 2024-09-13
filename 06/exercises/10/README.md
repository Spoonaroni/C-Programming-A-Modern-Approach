## Exercise 6.10

Show how to replace a `contine` statement by an equivalent `goto` statement.

## Solution

```c
n = 0; 
sum = 0;
while (n < 10) 
{ 
    scanf("%d", &i); 
    if (i == 0) 
        continue; 
    sum += i; 
    n++;
}
```

is equivalent to

```c
n = 0;
sum = 0;
while (n < 10)
{
    scanf("%d", &i);
    if (i == 0)
        goto con;
    sum += i;
    n++;
    con:
}
```