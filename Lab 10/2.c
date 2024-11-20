#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Pt;

double dist(Pt a, Pt b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int inRect(Pt p, Pt tl, Pt br) {
    return (p.x >= tl.x && p.x <= br.x && p.y <= tl.y && p.y >= br.y);
}

int main() {
    Pt a, b, tl, br, p;

    printf("Enter coordinates for point A (x y): ");
    scanf("%lf %lf", &a.x, &a.y);

    printf("Enter coordinates for point B (x y): ");
    scanf("%lf %lf", &b.x, &b.y);

    printf("Distance between points: %.2f\n", dist(a, b));

    printf("Enter coordinates for top-left of rectangle (x y): ");
    scanf("%lf %lf", &tl.x, &tl.y);

    printf("Enter coordinates for bottom-right of rectangle (x y): ");
    scanf("%lf %lf", &br.x, &br.y);

    printf("Enter coordinates for test point (x y): ");
    scanf("%lf %lf", &p.x, &p.y);

    if (inRect(p, tl, br)) {
        printf("The point (%.2f, %.2f) is inside the rectangle.\n", p.x, p.y);
    } else {
        printf("The point (%.2f, %.2f) is outside the rectangle.\n", p.x, p.y);
    }

    return 0;
}
