#include<iostream>
using namespace std;

void step(long num)
{
    cout << 4 * num;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long n;
    cin >> n;
    step(n);

}