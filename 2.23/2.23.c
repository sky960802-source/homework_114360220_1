#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A,B,C,M,S;
	 
	printf("��J�T�ӼƦr:");
	scanf("%d%d%d",&A,&B,&C);
	M=A;
	S=A; //M���̤jS�̤p
	
		if(B>M)
		  M=B;
		if(B<S)
		  S=B;
		  
		if(C>M)
		  M=C;
		if(C<S)
		  S=C; 
		
	printf("�̤j:%d\n",M);
	printf("�̤p:%d",S);
	system("pause");
	return 0;
	
}
