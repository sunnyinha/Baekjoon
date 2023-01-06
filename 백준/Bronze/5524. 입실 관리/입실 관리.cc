#include<iostream>
#include<string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	while (n--)
	{
		string k;
		cin >> k; 
		for (int i = 0; i < k.size(); i++)
		{
			k[i] = tolower(k[i]);
			cout << k[i];
		}
		cout << '\n';
	}
	


}
