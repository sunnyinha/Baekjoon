#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string mbti;
    string friends;
    int count = 0;
    cin >> mbti;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> friends;
        if (mbti == friends)
        {
            count++;
        }
    }
    cout << count << '\n';
    
}