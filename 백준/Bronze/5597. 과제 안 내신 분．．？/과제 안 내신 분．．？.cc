#include<iostream>
using namespace std;
int main()
{
    bool a[31] ={0,};
    for(int i=1; i<=28 ; i++)
    {
        int x;
        cin >> x;
        a[x] = 1;
    }
    for(int i=1; i<=30; i++)
    {
        if(a[i] == 0)
        {
            cout << i << '\n';
        }
    }
}