#include <stdio.h>

int min(int a, int b) {
    return (a <= b)? a: b;
}

int max(int a, int b) {
    return (a >= b)? a: b;
}

int getRectangleArea(int x1, int y1, int x2, int y2) {
    return (x1 - x2) * (y1 - y2);
}

int main(int argc, char **argv) {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int X[5] = {-1, 1, 0, 0, 1};
    int Y[5] = {-1, 1, 1, 0, 0};
    int (*functions[2])(int, int) = {min, max};
    for (int quadrant = 1; quadrant <= 4; quadrant++)
        printf((quadrant == 4)? "%d\n": "%d ", getRectangleArea(functions[X[quadrant]](x1, 0), functions[Y[quadrant]](y1, 0), functions[X[quadrant]](x2, 0), functions[Y[quadrant]](y2, 0)));
    return 0;
}