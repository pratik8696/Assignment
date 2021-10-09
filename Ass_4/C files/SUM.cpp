#include <stdio.h>

int main(){
	int n,sum=0;
	printf("Enter the number:= ");
	scanf("%d",&n);
	for (int i = 1; i <= n; i++)
    {
        sum = sum+i;
    }
    
	printf("\nThe sum till n is = %d",sum);
}

