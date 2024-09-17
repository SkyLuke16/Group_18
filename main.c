#include <stdio.h>

int main() {
    int topRightX, topRightY, bottomLeftX, bottomLeftY;
    scanf("%d %d %d %d", &topRightX, &topRightY, &bottomLeftX, &bottomLeftY);

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

    // Second quadrant (x < 0, y > 0)
    if (bottomLeftX < 0 && topRightY > 0) {
        int secondX = (topRightX < 0) ? topRightX : 0;
        int secondY = topRightY;
        int secondW = -bottomLeftX+secondX;
        int secondH = (bottomLeftY > 0) ? secondY - bottomLeftY : secondY;
        B = secondW * secondH;
    }

    // Third quadrant (x < 0, y < 0)
    if (bottomLeftX < 0 && bottomLeftY < 0) {
        int thirdX = (topRightX < 0) ? topRightX : 0;
        int thirdY = (topRightY < 0) ? topRightY : 0;
        int thirdW = thirdX - bottomLeftX;
        int thirdH = thirdY - bottomLeftY;
        C = thirdW * thirdH;
    }

    // Fourth quadrant (x > 0, y < 0)
    if (topRightX > 0 && bottomLeftY < 0) {
        int fourthX = topRightX;
        int fourthY = (topRightY < 0) ? topRightY : 0;
        int fourthW = (bottomLeftX > 0) ? fourthX - bottomLeftX : fourthX;
        int fourthH = -bottomLeftY+fourthY;
        D = fourthW * fourthH;
    }

    // Output the areas for each quadrant
    printf("%d %d %d %d\n", A, B, C, D);
    return 0;
}
