#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size;
    int arr[size];
    int exarr[size];
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        exarr[i]=0;
    }
    int maxread=INT_MIN;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]==arr[j])
            {	
                exarr[i]=exarr[i]+1;
            }
            
        }
    }
    int maxindex=0;
    for (int i = 0; i < size; i++)
    {
        if (exarr[i]>maxread)
        {
            maxread=exarr[i];
            maxindex=i;
        }
        
    }
    cout<<arr[maxindex];
    return 0;
}
