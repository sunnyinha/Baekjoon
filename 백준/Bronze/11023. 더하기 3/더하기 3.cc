#include<iostream>]
#include<sstream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    long sum = 0;
    getline(cin, str);
    cin.ignore();
    cin.clear();
    stringstream sub(str);
    sub.str(str);

    string word;
    while (sub >> word)
    {
        sum += stoi(word);
    }
    cout << sum;
}