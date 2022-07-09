#include<iostream>
#include<string>
using namespace std;

string Rev(string k)
{
	string j;
	for (int i = k.size()-1; i >=0; i--)
	{
		j += k[i];
	}
	return j;
}

int main()
{
	string x;
	string y;
	cin >> x >>y;
	int k = stoi(Rev(x)) + stoi(Rev(y));
	string result = to_string(k);
	cout << stoi(Rev(result)) << endl;

	
}