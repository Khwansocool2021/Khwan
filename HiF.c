#include <stdio.h>
int main() {

    int ตัวคูณ = 2;
    int i = 1;

    while (i <= 12) {
        int result = ตัวคูณ * i;
        printf("%d * %d = %d\n", ตัวคูณ, i, result);
        i++;
    }

    return 0;
}