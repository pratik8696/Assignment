#include <stdio.h>

int main()
{
    int num,remainder;

    
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);
	remainder=num%2;
    switch(remainder)
    {
    
        case 0: 
            printf("Number is Even");
            break;

    
        case 1: 
            printf("Number is Odd");
            break;
    }

    return 0;
}

