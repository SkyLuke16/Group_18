#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    // Ensure x1, y1 is the top-right and x2, y2 is the bottom-left
    int topRightX = (x1 > x2) ? x1 : x2;
    int topRightY = (y1 > y2) ? y1 : y2;
    int bottomLeftX = (x1 < x2) ? x1 : x2;
    int bottomLeftY = (y1 < y2) ? y1 : y2;

    // Initialize areas for each quadrant
    int A = 0, B = 0, C = 0, D = 0;

    // First quadrant (x > 0, y > 0)
    if (topRightX > 0 && topRightY > 0) {
        int firstX = topRightX;
        int firstY = topRightY;
        int firstW = (bottomLeftX > 0) ? firstX - bottomLeftX : firstX;
        int firstH = (bottomLeftY > 0) ? firstY - bottomLeftY : firstY;
        A = firstW * firstH;
    }

    // Second quadrant (x < 0, y > 0 )
    if (bottomLeftX < 0 && topRightY > 0) {
        int secondX = (topRightX < 0) ? topRightX : 0;
        int secondY = topRightY;
        int secondW = -bottomLeftX;
        int secondH = (bottomLeftY > 0) ? secondY - bottomLeftY : secondY;
        B = secondW * secondH;
    }

    // Third quadrant (x < 0, y < 0)
    if (bottomLeftX < 0 && bottomLeftY < 0) {
        int thirdX = (topRightX < 0) ? topRightX : 0;
        int thirdY = bottomLeftY;
        int thirdW = -bottomLeftX;
        int thirdH = -bottomLeftY;
        C = thirdW * thirdH;
    }

    // Fourth quadrant (x > 0, y < 0)
    if (topRightX > 0 && bottomLeftY < 0) {
        int fourthX = topRightX;
        int fourthY = bottomLeftY;
        int fourthW = (bottomLeftX > 0) ? fourthX - bottomLeftX : fourthX;
        int fourthH = -bottomLeftY;
        D = fourthW * fourthH;
    }

    // Output the areas for each quadrant
    printf("%d %d %d %d\n", A, B, C, D);

    return 0;
}