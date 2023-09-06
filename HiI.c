#include <stdio.h>

int main() {
    int correctAnswer = 6; // คำตอบที่ถูกต้อง

    do {
        int userAnswer;
        printf("Problem: 2*3=?\n");
        printf("ANS=");
        scanf("%d", &userAnswer);

        if (userAnswer == correctAnswer) {
            printf("Correct !!!\n");
            break;
        } else {
            printf("Wrong !!!\n");
        }
    } while (1);

    return 0;
}