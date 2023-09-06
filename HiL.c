#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;

    printf("เลขฐาน: ");
    scanf("%lf", &base);
    printf("เลขยกกำลัง: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);

    printf("%.0lf^%.0lf = %.0lf\n", base, exponent, result);

    return 0;
}