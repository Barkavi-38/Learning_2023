#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

double calculateDistance(struct Point p1, struct Point p2) {
    double distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return distance;
}

int main() {
    struct Point point1, point2;

    printf("Enter coordinates of point 1:\n");
    printf("x1: ");
    scanf("%lf", &point1.x);
    printf("y1: ");
    scanf("%lf", &point1.y);

    printf("\nEnter coordinates of point 2:\n");
    printf("x2: ");
    scanf("%lf", &point2.x);
    printf("y2: ");
    scanf("%lf", &point2.y);

    double distance = calculateDistance(point1, point2);
    printf("\nDistance between the points: %.2lf\n", distance);

    return 0;
}
