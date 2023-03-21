#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
	int a[5];
	int min = 100;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		if (min > a[i])
		{
			min = a[i];
		}
	}
	sort(a, a + 5);

	int max = a[2] * a[3] * a[4];
	for (int i = min; i < max; i++)
	{
		int count = 0;
		for (int j = 0; j < 5; j++)
		{
			if (count == 3)
			{
				break;
			}
			if (i % a[j] == 0)
			{
				count++;
			}
		}
		if (count == 3)
		{
			cout << i;
			break;
		}
	}

}