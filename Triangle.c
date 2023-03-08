#include <stdio.h>

typedef struct {
    float a, b, c;
} Triangle;

enum TriangleType {
    EQUILATERAL,
    ISOSCELES,
    SCALENE,
    NOT_A_TRIANGLE
};

enum TriangleType get_triangle_type(Triangle t) {
    if (t.a <= 0 || t.b <= 0 || t.c <= 0)
        return NOT_A_TRIANGLE;

    if (t.a + t.b <= t.c || t.b + t.c <= t.a || t.c + t.a <= t.b)
        return NOT_A_TRIANGLE;

    if (t.a == t.b && t.b == t.c)
        return EQUILATERAL;

    if (t.a == t.b || t.b == t.c || t.c == t.a)
        return ISOSCELES;

    return SCALENE;
}

int main() {
    Triangle t = { 3, 3, 3 }; // Change these values to test different triangles
    enum TriangleType type = get_triangle_type(t);

    switch (type) {
        case EQUILATERAL:
            printf("The triangle is equilateral.\n");
            break;
        case ISOSCELES:
            printf("The triangle is isosceles.\n");
            break;
        case SCALENE:
            printf("The triangle is scalene.\n");
            break;
        case NOT_A_TRIANGLE:
            printf("These parameters do not form a triangle.\n");
            break;
    }

    return 0;
}

