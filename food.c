#include <stdio.h>

int main()
{
    int menu;

	printf("Menu:\n");
	printf("1) Papaya Salad\n");
	printf("2) Grilled Chicken\n");
	printf("3) Sticky Rice\n");
	printf("Enter Menu Number:");
	scanf("%d",&menu);
    switch(menu)
    { 
      case 1: printf("Your order is Papaya Salad \n");
                break;
      case 2: printf("Your order is Grilled Chicken \n");
                break;
      case 3: printf("Your order is Sticky Rice \n");
                break;
      default: printf("Incorrect order\n");

    }

    return 0;

}