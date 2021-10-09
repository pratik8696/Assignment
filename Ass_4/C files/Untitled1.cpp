#include <iostream>
using namespace std;


int main(){
    int n,revno=0;
    cin>>n;
    while (n<=0)
    {
         int remainder=n%10;
        revno=revno*10+remainder;
        n=n/10;
    }
    cout<<revno;
    return 0;
}
