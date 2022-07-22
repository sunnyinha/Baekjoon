#include <iostream>
using namespace std;

long arr[1001] = { 0 };
int main() 
{
    int n;
    cin >> n;
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        arr[i] = arr[i-1] + arr[i - 2];
        arr[i] %= 10007;
    }
    cout << arr[n] << endl;
    
    return 0;
}