#include<stdio.h>

float a,b,c,d,e;

int main()
{
	printf("Total miles driven per day:");
	scanf("%f",&a);
	printf("Cost per gallon of gasoline:");
	scanf("%f",&b);
	printf("Average miles per gallon:");
	scanf("%f",&c);
	printf("Parking fees per day:");
	scanf("%f",&d);
	printf("Tolls per day:");
	scanf("%f",&e);
	printf("cost per day of driving to work:%f",a*b/c+d+e);
	system("pause");
	return 0;
} 
