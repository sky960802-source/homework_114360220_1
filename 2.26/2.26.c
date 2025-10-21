#include<stdio.h>

int main()
{
	int A,B;
	printf("輸入兩數字:");
	scanf("%d%d",&A,&B);
	if(A%B==0)
    	printf("%d是%d的倍數",A,B);
    else
    	printf("%d不是%d的倍數",A,B);
    	
    system("pause");
    return 0;
}
