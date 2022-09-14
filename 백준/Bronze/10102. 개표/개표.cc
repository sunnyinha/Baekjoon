#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int v;
	cin >> v;
	string k;
	int countA = 0;
	int countB = 0;
	cin >> k;
	for (int i = 0; i < v; i++)
	{
		if (k[i] == 'A')
		{
			countA++;
		}
		else
		{
			countB++;
		}
	}
	if (countA > countB)
	{
		cout << "A" << '\n';
	}
	else if (countA == countB)
	{
		cout << "Tie" << '\n';
	}
	else
	{
		cout << "B" << '\n';
	}


	

}