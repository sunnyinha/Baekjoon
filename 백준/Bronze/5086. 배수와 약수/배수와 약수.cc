#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n1,n2;
    while (1)
    {
        cin >> n1 >> n2;
        if (n1 == 0 && n2 == 0)
        {
            break;
        }
        if (n1 >=n2)
        {
            if (n1 % n2 == 0)
            {
                cout << "multiple" << '\n';
            }
            else
            {
                cout << "neither" << '\n';
            }
        }
        else
        {
            if (n2 % n1 == 0)
            {
                cout << "factor" << '\n';
            }
            else
            {
                cout << "neither" << '\n';
            }
        }

   }
}