#include<stdio.h>
int main()
{
	int a,b;
	printf("===== SWAP USING BITWISE XOR =====\n");
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("\n Before swapping:\n");
	printf("a =%d\n",a);
	printf("b =%d\n",b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\n After swapping:\n");
	printf("a =%d\n",a);
	printf("b =%d\n",b);
	return 0;
}