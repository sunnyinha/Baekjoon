#include<iostream>
#include<string>
using namespace std;

int main()
{
	string k;
	cin >> k;
	int length = k.size();
	int cnt = 0;
	while (length--)
	{
		cout << k[cnt];
		if ((cnt+1) % 10 == 0)
		{
			cout << endl;
		}
		cnt++;
	}

}