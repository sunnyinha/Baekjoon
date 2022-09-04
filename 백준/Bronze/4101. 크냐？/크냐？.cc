#include <iostream>
#include<string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    
    int a, b;
    cin >> a >> b;
    while(1)
    {
        if(a == 0 && b == 0)
        {
            break;
        }
        if(a>b)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
        cin >> a >>b;
    }
    
}