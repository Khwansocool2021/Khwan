#include <stdio.h>

int main() {
    char customerName[70];//กำหนดตัวเเปลรับค่าชื่อลูกค้า
    int elecUnit, waterUnit;//กำหนดตัวแปรและหน่วยค่าน้ำค่าไฟ
    float elecPrice = 10.25;//กำหนดตัวแปรและหน่วยค่าไฟ
    float waterPrice = 50.50;//กำหนดตัวแปรและหน่วยค่าน้ำ
    double elecTotalPrice, waterTotalPrice, total;//กำหนดตัวแปรและผลรับของค่าทั้งหมด

    printf("Enter customer name: ");//ชื่อลูกค้า
    scanf("%s", customerName);
    printf("Enter elec unit: ");//หน่วยค่าไฟ
    scanf("%d", &elecUnit);
    printf("Enter water unit: ");//หน่วยค่าน้ำ
    scanf("%d", &waterUnit);

    elecTotalPrice = elecUnit * elecPrice;//สูตรค่าไฟ
    waterTotalPrice = waterUnit * waterPrice;//สูตรค่าน้ำ
    total = elecTotalPrice + waterTotalPrice;//ผลรวมค่าน้ำค่าไฟ
    
    printf("\nCustomer name: %s\n", customerName);
    printf("elec price: %.2f\n", elecPrice);
    printf("water price: %.2f\n", waterPrice);
    printf("elec unit: %d\n", elecUnit);
    printf("water unit: %d\n", waterUnit);
    printf("elec total price: %.2f\n", elecTotalPrice);
    printf("water total price: %.2f\n", waterTotalPrice);
    printf("Total (elect+water): %.2f\n", total);

    return 0;

}