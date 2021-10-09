#include <stdio.h>

int main(){
    int a,b,c,d,e,f;
    printf("enter first number \n");
    scanf("%d",&a);
    printf("enter second number \n");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("Addition of a and b is : %d\n",c);
    printf("Subtraction of a and b is : %d\n",d);
    printf("Multiplication of a and b is : %d\n",e);
    printf("Division of a and b is : %d\n",f);
    return 0;
}

