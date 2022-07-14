#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, m;
	bool isexist = 0;
	int sum = 0; 
	cin >> n >> m;
	int min = int(sqrt(n)) + 1;
	for (int i = int(sqrt(n))+1; i <= int(sqrt(m)); i++)
	{
		sum += i*i;
		isexist = 1;
	}
	if (sqrt(n) - int(sqrt(n)) == 0)
	{
		sum += int(sqrt(n))* int(sqrt(n));
		min = int(sqrt(n));
		isexist = 1;
	}
	if (isexist == 0)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << sum << '\n' << min*min << '\n';
	}
}