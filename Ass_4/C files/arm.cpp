#include <stdio.h>

int main(){
    int n1=0,n2=1,count,temp=0;
    printf("Enter the count\n");
    scanf("%d",&count);
    printf("0\n1\n");
    for (int i = 0; i < count; i++)
    {
        int next=0;
        next=n1+n2;
        temp=n2;
        n2=next;
        n1=temp;
        printf("%d\n",next);
    }
    

return 0;

}




