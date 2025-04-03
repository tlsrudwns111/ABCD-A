#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main() {
    double r, theta, x, y;

    printf("r 입력: ");
    scanf_s("%lf", &r);
    printf("각도(도) 입력: ");
    scanf_s("%lf", &theta);

    theta = theta * PI / 180;
    x = r * cos(theta);
    y = r * sin(theta);

    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    

    return 0;
}