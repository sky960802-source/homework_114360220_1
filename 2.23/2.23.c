#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A,B,C,M,S;
	 
	printf("块计:");
	scanf("%d%d%d",&A,&B,&C);
	M=A;
	S=A; //M程S程
	
		if(B>M)
		  M=B;
		if(B<S)
		  S=B;
		  
		if(C>M)
		  M=C;
		if(C<S)
		  S=C; 
		
	printf("程:%d\n",M);
	printf("程:%d",S);
	system("pause");
	return 0;
	
}
