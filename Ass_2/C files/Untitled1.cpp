#include <stdio.h>

int main(){
	float a=13,b,c;
	c=a-- + a++;
	printf("%f",c);
	printf("%f",a);
	return 0;
}

