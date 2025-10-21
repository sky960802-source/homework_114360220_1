#include<stdio.h>

int main()
{
	float Weight,Height,IBM;
	printf("請輸入身高(m):");
	scanf("%f",&Height);
	printf("請輸入體重(kg):");
	scanf("%f",&Weight);
	IBM=Weight/Height/Height;
	printf("\nBMI為%f\n\nBMI VALUES\nUnderweight: less than 18.5",IBM);
	printf("\nNormal:      between 18.5 and 24.9\nOverweight:  between");
	printf("25 and 29.9\nObese:       30 or greater\n");
	system("pause");
	return 0;
}
