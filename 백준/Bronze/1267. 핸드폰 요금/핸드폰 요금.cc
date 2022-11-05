#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int sumy = 0;
    int summ = 0;
    int x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 30 != 0)
        {
            if(x%29 == 0)
                sumy += (x / 30) * 10;
            else
            {
                sumy += (x / 30) * 10 + 10;

            }

        }
        else 
        {
            sumy += (x / 30) * 10 + 10;

        } 
        if (x % 60!=0) 
        {
            if(x% 59 == 0)
                summ += (x / 60) * 15;
            else
                summ += (x / 60) * 15 + 15;

        }
        else
        {
            summ += (x / 60) * 15 + 15;
        }
    }
    if (sumy == summ)
    {
        cout << "Y M " << summ;
    }
    else if (sumy > summ)
    {
        cout << "M " << summ;
    }
    else
    {
        cout << "Y " << sumy;
    }
}