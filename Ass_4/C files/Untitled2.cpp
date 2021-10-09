#include <stdio.h>
#include <math.h>


int main(){
    for (int i = 1; i <=10; i++)
    {
        if (i%2==0)
        {   int square=pow(i,2);
            printf("%d\n",square);
            square=0;
        }
        
        if (i%2!=0)
        {
            int cube=pow(i,3);
            printf("%d\n",cube);
            cube=0;
        }
    }
    return 0;
}
