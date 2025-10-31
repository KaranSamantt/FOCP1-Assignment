#include <stdio.h>

int main() {
    float x, y;

  
    printf("Enter the coordinates (x,y): ");
    scanf("%f %f", &x, &y);


    if (x > 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in the First Quadrant.\n", x, y);
    }
    else if (x < 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in the Second Quadrant.\n", x, y);
    }
    else if (x < 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in the Third Quadrant.\n", x, y);
    }
    else if (x > 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in the Fourth Quadrant.\n", x, y);
    }
    else if (x == 0 && y == 0) {
        printf("The point (%.2f, %.2f) is at the Origin.\n", x, y);
    }
    else if (x == 0) {
        printf("The point (%.2f, %.2f) lies on the Y-axis.\n", x, y);
    }
    else if (y == 0) {
        printf("The point (%.2f, %.2f) lies on the X-axis.\n", x, y);
    }

    return 0;
}
