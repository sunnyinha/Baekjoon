#include<iostream>
using namespace std;

int main()
{
    long sum = 0;
    for(int i=0; i<3; i++)
    {
        long x;
        cin >> x;
        sum += x;
    }
    cout << sum << '\n';
    
}