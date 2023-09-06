#include <stdio.h>

int main(void)
{
    int weight, height;  // สีน้ำเงินรับค่าน้ำหนักและส่วนสูง
	printf("Enter weight(kg): "); scanf("%d",&weight);
	printf("Enter height(cm): "); scanf("%d",&height);
	float hMeter	= height/100.0; // สีแดงคำนวณค่า BMI
	float BMI = (float)weight/(hMeter*hMeter);
	printf("Your BMI: %.1f\n",BMI);
        if (BMI<=18.5)
		  printf("Too thin\n");
   
        else if(BMI>=18.5&& BMI<=22.9)
          printf("Good\n");
        else if(BMI>=22.9&& BMI<=24.9)
        printf("Little Fat\n");
        else if(BMI>=24.9&& BMI<=29.9)
          printf("Big Fat\n");
        else if(BMI>=22.9)
          printf("Dengerous Fat\n");
    
    return 0;
} 
