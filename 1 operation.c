#include<stdio.h>
int main()
{
	int a,b,cho,res;
	printf("=====OPERATION ANS EXPERSSION=====\n");
	printf("Enter the frist number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("\n1.Addition");
	printf("\n2.Subration");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n5.Modolus");
	printf("\n\nEnter your chioce:");
	scanf("%d",&cho);
	switch(cho)
	{
		case 1:
			res=a+b;
			printf("Result = %d",res);
			break;
		case 2:
			res=a-b;
			printf("Result = %d",res);
			break;
		case 3:
			res=a*b;
			printf("Result = %d",res);
			break;
		case 4:
			if(b!=0)
			{
				res=a/b;
				printf("Result = %d",res);
			}
			else
			{
				printf("Division by zero is not possible.");
			}
			break;
		case 5:
			if(b!=0)
			{
				res=a%b;
				printf("Result = %d",res);
			}
			else
			{
				printf("Modulus by zero is not possible.");
			}
			break;
		default:
			printf("Invalid choice");
	}
	return 0;
}