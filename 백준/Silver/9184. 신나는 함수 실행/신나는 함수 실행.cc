#include <iostream>
using namespace std;

int f[102][102][102] = { 0, };

int w(int a,int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
	{
		return 1;
	}
	if (a > 20 || b > 20 || c > 20)
	{
		if (f[70][70][70] == 0)
		{
			f[70][70][70] = w(20, 20, 20);
			
		}
		return f[70][70][70];
	
	}
	if (a < b && b < c)
	{
		if (f[a+50][b+50][c+50] == 0)
		{
			f[a+50][b+50][c+50] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
		}
		return f[a+50][b+50][c+50];
	}
	else
	{
		if (f[a + 50][b + 50][c + 50] == 0)
		{
			f[a + 50][b + 50][c + 50] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
		}
		return f[a + 50][b + 50][c + 50];
	}

}

int main()
{
	int a, b, c;
	while (1)
	{
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1)
		{
			break;
		}
		cout << "w(" << a << "," << " " << b << ", " << c << ") = " << w(a, b, c) << endl;
	}
}