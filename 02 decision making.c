#include<stdio.h>
int main()
{
	int a,b,res,chioce;
	printf("===== BRANCHING STATEMENTS =====\n");
	printf("Enter the first number :");
	scanf("%d",a);
	printf("Enter the second number:");
	scanf("%d",b);
	printf("\n----- MENU -----\n");
	printf("1. Check Positive,Negative or zero\n");
	printf("2. Check Even or Odd\n");
	printf("3. Find Largest of Two Numbers\n");
	printf("4. Check Divisibility by 5\n");
	
	printf("\nEnter your chioce:");
	scanf("%d",&chioce);
	
	printf("\n----- RESULT -----\n");
	
	switch(chioce)
	{
		case 1:
			if(a>0){
				printf("%d is Positive",a);
			}
			else if(a<0){
				printf("%d is Negative",a);
			}
			else{
				printf("%d is Zero",a);
			}
			break;
		case 2:
			if(a%2==0){
				printf("%d is Even",a);
			}	
			else{
				printf("%d is Odd",a);
			}
			break;
		case 3:
			if(a>b){
				res=a;
				printf("%d is Largest number",res);
			}
			else if(b>a){
				res=b;
				printf("%d is Largest number",res);
			}
			else{
				printf("Both number are Equal");
			}
			break;
		case 4:
			if(a%5==0){
				printf("%d is Divisible by 5",a);
			}	
			else{
				printf("%d is not Divisible by 5",a);
			}
			break;
		default:
			printf("Invalid choice.");
	}
	return 0;
}