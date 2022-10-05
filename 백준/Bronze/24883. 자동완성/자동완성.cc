#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin >> s;
    if (s == "N" || s == "n")
    {
        cout << "Naver D2" << '\n';
    }
    else
    {
        cout << "Naver Whale" << '\n';
    }
  
}