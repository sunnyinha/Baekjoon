#include <iostream>
#include<string>
using namespace std;

int c = 0;

string multiples(string x)
{
	if (x.size() < 2)
	{

		return x;
	}
	else
	{
		c++;
		long sum = 0;
		for (int i = 0; i < x.size(); i++)
		{
			sum += x[i] - '0'; // string에서 끝에 0 Q빼면 int로 변환가능
		}
		return multiples(to_string(sum));
	}

}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string x; // x 범위가 1000000자리이므로 long 불가
	cin >> x;
	if (stoi(multiples(x)) % 3 ==0)
	{
		cout << c << '\n';
		cout << "YES" << '\n';
	}
	else
	{
		cout << c << '\n';
		cout << "NO" << '\n';
	}

}