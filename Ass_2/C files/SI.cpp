#include <stdio.h>

int main(){
	 int principle,interest_rate ,time;
	 float simple_interest ;
	 printf("Enter the principle amount \n");
	 scanf("%d",&principle);
	 printf("Enter the interest rate in percentage \n");
	 scanf("%d",&interest_rate);
	 printf("Enter the time duration \n");
	 scanf("%d",&time);
	 simple_interest = ( principle * interest_rate * time )/100 ;
	 printf("Simple interest is %f\n",simple_interest);
	 return 0;
}
