#include <stdio.h>
int main() {

    int myMul, rounds;
    printf("Enter my mul: ");
    scanf("%d", &myMul);
    printf("Enter round: ");
    scanf("%d", &rounds);

    int i = 1;
    do {
        int result = myMul * i;
        printf("%d * %d = %d\n", myMul, i, result);
        i++;
    } while (i <= rounds);


    return 0;

}