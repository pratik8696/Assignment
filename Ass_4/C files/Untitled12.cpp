#include <iostream>
#include <cmath>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
	
    int k;
    cin>>k;
    int arr[2*k];
    for (int i = 0; i < 2*k; i++)
    {
        arr[i]=k+ pow(i+1,2);
    }
    int sum=0;
    for (int i = 0; i < 2*k; i++)
    {   int gc=0;
        gc=gcd(arr[i],arr[i+1]);
        sum=gc+sum;
    }
    cout<<sum;
}
    return 0;
}
