#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string k;
		cin >> k;
		int last = k.size() - 1;
		cout << k[0] << k[last] << endl;
	}
	

}