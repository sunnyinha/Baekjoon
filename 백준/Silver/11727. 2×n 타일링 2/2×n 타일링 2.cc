#include <iostream>
using namespace std;

long arr[10001] = { 0 };
int main() 
{
    int n;
    cin >> n;
    arr[1] = 1;
    arr[2] = 3;
    for (int i = 3; i <= n; i++)
    {
        arr[i] = arr[i-1] + arr[i - 2]*2;
                //한칸 세로 1   //두칸 가로 2, 2*2 1
        arr[i] %= 10007;
    }
    cout << arr[n] << endl;
    
    return 0;
}