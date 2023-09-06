#include<stdio.h>
int main(void)
{
    int i; //ประกาศตัวแปรตัวเลข
    int s,e;  //ประกาศตัวแปรตัวเลข
    printf("Enter start ="); //แสดงผลตัวแปรตัวที่ 1
    scanf("%d",&s); //คำนวน
    printf("Enter end ="); //แสดงผลตัวแปรตัวที่ 2
    scanf("%d",&e); //คำนวน
    for (i=s; i<=e; i++ ) //ผลรวม
        {   printf("2 x %d = %d \n",i, 2*i);  } //แสดงผลรวม
    
    return 0;
}