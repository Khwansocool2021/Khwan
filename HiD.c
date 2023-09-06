#include <stdio.h>
int main() {
    // สร้างเก็บจำนวนคนที่ได้เกรด A, B, C, D, F
    int grades_count[5] = {0, 0, 0, 0, 0};
    // ใช้การทำซ้ำ for เพื่อรับค่าคะแนน 5 ครั้ง
    for (int i = 0; i < 5; i++) {
        int score;
        printf("กรอกคะแนนครั้งที่ %d: ", i + 1);
        scanf("%d", &score);
        if (score >= 80) {
            grades_count[0]++;
        } else if (score >= 70) {
            grades_count[1]++;
        } else if (score >= 60) {
            grades_count[2]++;
        } else if (score >= 50) {
            grades_count[3]++;
        } else {
            grades_count[4]++;
        }
    }

    // แสดงผลจำนวนคนที่ได้เกรด A, B, C, D, F
    printf("จำนวนคนที่ได้เกรด A: %d คน\n", grades_count[0]);
    printf("จำนวนคนที่ได้เกรด B: %d คน\n", grades_count[1]);
    printf("จำนวนคนที่ได้เกรด C: %d คน\n", grades_count[2]);
    printf("จำนวนคนที่ได้เกรด D: %d คน\n", grades_count[3]);
    printf("จำนวนคนที่ได้เกรด F: %d คน\n", grades_count[4]);

    return 0;
}