#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	float h, w, b;
	
	printf("height(m):");
	scanf_s("%f", &h);
	printf("weight(kg):");
	scanf_s("%f", &w);
	b = w / (h*h);
	printf("Height:%f,weight:%f,BMI:%f\n\n", h, w,b);
	
	if (b < 18.5)
	{
		printf("Underweight\n");
	}
	else if (b > 18.5 && b < 24.9)
	{
		printf("Normal\n");
	}
	else if (b > 24.9)
	{
		printf("Obese\n");
	}
	


	system("pause");
	return 0;
}