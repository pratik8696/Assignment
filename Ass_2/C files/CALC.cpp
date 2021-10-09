#include <stdio.h>

int main(){
    float a,b,c,d,e,f;
    printf("Enter the number on which operations are to be performed\n");
    scanf("%f%f",&a,&b);
    c=a+b;
    printf("The sum is = %f\n",c);
    d=a-b;
    printf("The diff is = %f\n",d);
    e=a*b;
    printf("The product is = %f\n",e);
    f=a/b;
    printf("The divison is = %f\n",f);
   return 0;
}

