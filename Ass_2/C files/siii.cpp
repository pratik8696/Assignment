#include <stdio.h>

int main(){
	
	int principle, rate, time;
	float si;
	principle=5000;
	rate=7;
	time=5;
	si=(principle*rate*time)/100;
	printf("Simple Interest = %f",si);
	return 0;
}

