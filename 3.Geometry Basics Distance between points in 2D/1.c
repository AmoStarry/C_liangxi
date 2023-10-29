#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

double distance_between_points(struct Point a, struct Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main() {
    struct Point point_a = {1.0, 2.0};
    struct Point point_b = {4.0, 6.0};

    double distance = distance_between_points(point_a, point_b);
    printf("Distance between points: %lf\n", distance);

    return 0;
}
