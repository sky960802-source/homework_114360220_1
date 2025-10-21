#include<stdio.h>

int main()
{
	printf("number	square	cube\n");
	
	for(int X=0;X<=10;X++)
	{
		printf("%d	%d	%d\n",X,X*X,X*X*X);
	} 
	
	return 0; 
}
