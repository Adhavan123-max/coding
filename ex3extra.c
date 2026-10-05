#include<stdio.h>
int main()
{
	int unit;
	float bill;
	printf("===== ELECTRICITY BILL =====\n");
	printf(" Enter the units consumed :");
	scanf("%d",&unit);
	if(unit<=100){
		bill=unit*1.50;
	}
	else if(unit<=200){
		bill =100*1.50+(unit-100)*2.00;
	}
	else if(unit<=500){
		bill=100*1.50+100*2.00+(unit-200)*3.00;
	}
	else{
		bill =100*1.50+100*2.00+300*3.00+(unit-500)*5.00;
	}
	printf("Electricity Bill = Rs.%.2f",bill);
	return 0;
}