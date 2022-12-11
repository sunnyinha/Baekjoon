#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    int remainder = 0;
    cin >> n;
    while (n--)
    {
        int stu, app;
        cin >> stu >> app;
        remainder += app % stu;
    }
    cout << remainder;
}