#include <stdio.h>

int main(void)
{
    int age; //ประกาศตัวแปร
    printf ("Enter your age:"); //แสดงผลรับเข้า
    scanf("%d",&age); //คำสั่งรับเข้า
    if(age >=18) //เงื่อนไข
    printf("OK\n"); //แสดงผล

    return 0;


}