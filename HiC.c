#include <stdio.h>
int main() {
    int multiplier, start, end;
    printf("กรอกแม่คูณ: ");
    
    scanf("%d", &multiplier);
    printf("จุดเริ่มต้นสูตรคูณ: ");
    
    scanf("%d", &start);
    printf("จุดจบสูตรคูณ: ");
    
    scanf("%d", &end);
    printf("สูตรคูณแม่ %d ตั้งแต่ %d ถึง %d:\n", multiplier, start, end);
    
    if (start <= end) {
        for (int i = end; i >= start; i--) {
            printf("%d x %d = %d\n", multiplier, i, multiplier * i);
        }
    } else {
        printf("จุดเริ่มต้นต้องไม่มากกว่าจุดจบ\n");
    }
    return 0;

}