#include<iostream>
using namespace std;

int main()
{
	int w[10];
	int v[10];
	int wbest3;
	int vbest3;
	for (int i = 0; i < 10; i++)
	{
		int k;
		cin >> k;
		w[i] = k;
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (w[i] < w[j])
			{
				int tmp = w[i];
				w[i] = w[j];
				w[j] = tmp;
			}
		}
	}
	wbest3 = w[0] + w[1] + w[2];
	for (int i = 0; i < 10; i++)
	{
		int k;
		cin >> k;
		v[i] = k;
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (v[i] < v[j])
			{
				int tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
		}
	}
	vbest3 = v[0] + v[1] + v[2];
	cout << wbest3 << " " << vbest3 << endl;
}