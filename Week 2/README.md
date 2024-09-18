## Problem Description ##

Given the top-right and bottom-left coordinates of a rectangle, which all of the sides are either parralel to the x-axis or y-axis, please calculate the area of the rectangle inside each quadrant.

## Input Format ##

$X_{1}\text{ }Y_{1}$

$X_{2}\text{ }Y_{2}$

($X_{1}\text{, }Y_{1}$) is the top-right coordinates of the rectangle, while ($X_{2}\text{, }Y_{2}$) is the bottom-left coordinates of the rectangle.

## Output Format ##

$A\text{ }B\text{ }C\text{ }D$

$A\text{, }B\text{, }C\text{, }D$ are the area of the rectangle inside the first, second, third and forth quadrant respectively.

## Constraint ##

$X_{1} \leq X_{2}\text{, }Y_{1} \leq Y_{2}$

$0 \leq A\text{, }B\text{, }C\text{, }D < 2^{31} - 1$

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
