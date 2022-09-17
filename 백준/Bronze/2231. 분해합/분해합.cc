#include <iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long n;
	long a;
	long s;
	cin >> n;
	long cn;
	cn = n;
	long count = 0;
	bool isexist = 0;
	while (cn > 10)
	{
		cn /= 10;
		count++;
	}
	for (long i = (pow(10, count)); i < n; i++)
	{
		s = i;
		a = i;
		for (long j = 0; j < count+1; j++)
		{
			s += a % 10;
			a /= 10;
		}
		if (s == n)
		{
			isexist = 1;
			cout << i << "\n";
			break;
		}
	}
	if (isexist == 0)
	{
		cout << 0 << "\n";
	}
	
 	
}