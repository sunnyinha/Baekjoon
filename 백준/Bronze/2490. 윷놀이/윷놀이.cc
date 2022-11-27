#include<iostream>
using namespace std;

void choose(int c)
{
    if (c == 4)
    {
        cout << "E" << "\n";
    }
    else if (c == 3)
    {
        cout << "A" << "\n";
    }
    else if (c == 2)
    {
        cout << "B" << "\n";
    }
    else if (c == 1)
    {
        cout << "C" << "\n";
    }
    else if (c == 0)
    {
        cout << "D" << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            int x;
            cin >> x;
            count += x;
        }
        choose(count);
        
    }

}