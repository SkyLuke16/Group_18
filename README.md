## Problem Description ##

Given the top-right and bottom-left coordinates of a rectangle, which all of the sides are either parralel to the x-axis or y-axis, please calculate the area of the rectangle inside each quadrant.

## Input Format ##

$X_{1} Y_{1}$

$X_{2} Y_{2}$

($x_{1}, y_{1}$) is the top-right coordinates of the rectangle, while ($x_{2}, y_{2}$) is the bottom-left coordinates of the rectangle.

## Output Format ##

$A B C D$

$A, B, C, D$ are the area of the rectangle inside the first, second, third and forth quadrant respectively.

## Constraint ##

$-2^{16} < X_{1}, Y_{1}, X_{2}, Y_{2} < 2^{16}$

## Sample Input 1 ##

```
3 3
-3 -3
```

## Sample Output 1 ##

```
9 9 9 9
```

## Sample Input 2 ##

```
0 10000
-10000 -10000
```

## Sample Output 2 ##

```
0 100000000 100000000 0
```