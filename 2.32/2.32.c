#include<stdio.h>

int main()
{
	float Weight,Height,IBM;
	printf("�п�J����(m):");
	scanf("%f",&Height);
	printf("�п�J�魫(kg):");
	scanf("%f",&Weight);
	IBM=Weight/Height/Height;
	printf("\nBMI��%f\n\nBMI VALUES\nUnderweight: less than 18.5",IBM);
	printf("\nNormal:      between 18.5 and 24.9\nOverweight:  between");
	printf("25 and 29.9\nObese:       30 or greater\n");
	system("pause");
	return 0;
}
