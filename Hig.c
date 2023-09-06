#include <stdio.h>
int main() {

    int เฉลย = 20;  
    int คำตอบ;

    while (1) {  
        printf("Problem: 5 * 4 = ?\n");
        printf("ANS=");
        scanf("%d", &คำตอบ);
        if (คำตอบ == เฉลย) {
            printf("Correct!\n");
            break;  
        } else {
            printf("Wrong!!\n");

        }
    }

    return 0;

}