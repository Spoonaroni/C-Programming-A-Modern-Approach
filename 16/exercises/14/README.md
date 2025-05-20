# Exercise 16.14

Let `shape` be the structure tag declared in Exercise 13. Write functions that
perform the following operations on a `shape` structure `s` passed as an argument:

(a) Compute the area of `s`.  
(b) Move `s` by `x` units int the `x` direction and `y` units in the `y`
direction, returning the modified version of `s`. (`x` and `y` are additional
arguments to the function.)  
(c) Scale `s` by a factor of `c` (a `double` value), returning the modified
version of `s`. (`c` is an additional argument to the function.)

## Solution

(a)

```c
int compute_area(struct shape s)
{
    int area;

    if (s.shape_kind == CIRCLE)
        area = 3.14 * (s.u.circle.radius * s.u.circle.radius);
    if (s.shape_kind == RECTANGLE)
        area = s.u.rectangle.width * s.u.rectangle.height;

    return area;
}
```

(b)

```c
struct shape transform(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;

    return s;
}
```

(c)

```c
struct shape scale(struct shape s, double c)
{
    if (s.shape_kind == CIRCLE)
        s.u.circle.radius *= c;
    if (s.shape_kind == RECTANGLE) {
        s.u.rectangle.width *= c;
        s.u.rectangle.height *= c;
    }

    return s;
}
```
