#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> billu; //initialization/declaration
    //input
    billu.push_back(4);  //billu[0]
    billu.push_back(7);  //billu[1]
    billu.push_back(18); //billu[2]
    billu.push_back(45); //billu[3]
    billu.push_back(10); //billu[4]

    //output
    for (auto element:billu)
    {
        cout << element << " ";
    }
    cout << endl;
    for (int i = 0; i < billu.size(); i++)
    {
        cout << billu[i] << " ";
    }
    cout << endl;
    vector<int> pandu;
    int size;
    cout << endl
         << "enter the size for pandu";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int input;
        cin >> input;
        pandu.push_back(input);
    }
    cout << endl;
    for (auto element : pandu)
    {
        cout << element << " ";
    }
    cout << endl;
    billu.pop_back();
    cout << endl;
    for (auto element : billu)
    {
        cout << element << " ";
    }
    cout<<endl;
    swap(billu, pandu);
    for (auto element : billu)
    {
        cout << element << " ";
    }
    cout<<endl;
    for (auto element : pandu)
    {
        cout << element << " ";
    }

    return 0;
}
