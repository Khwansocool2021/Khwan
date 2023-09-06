#include <stdio.h>

int main(void)
{
    char grade;
    int age;
    float GPA;
    double NextGPA;
    printf("Enter Grade: ");//อันที่1
    scanf("%c",&grade);//อันที่1
    printf("Enter Age: ");//อันที่2
    scanf("%d",&age);//อันที่2
    printf("Enter Gpa: ");//อันที่3
    scanf("%f",&GPA);//อันที่3
    printf("Enter NextGPA: ");//อันที่4
    scanf("%lf",&NextGPA);//อันที่4
    printf("My Grade\t= %c\n",grade);//อันที่1
    printf("My Age\t\t= %d\n",age);//อันที่2
    printf("My gpa\t\t= %.2f\n",GPA);//อันที่3
    printf("My NextGPA\t\t= %.4f\n",NextGPA);//อันที่4
    return 0;
}