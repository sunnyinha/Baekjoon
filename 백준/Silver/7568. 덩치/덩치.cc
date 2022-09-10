#include<iostream>
#include<math.h>
using namespace std;

class Person
{
public:
	int kg;
	int m;
	int win = 1;

	Person()
	{

	}

	void setinfo(int kg,int m)
	{
		this->kg = kg;
		this->m = m;
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	Person* p = new Person[n];
	for (int i = 0; i < n; i++)
	{
		int kg, m;
		cin >> kg >> m;
		p[i].setinfo(kg, m);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				continue;
			}
			else if (p[i].kg < p[j].kg && p[i].m < p[j].m)
			{
					p[i].win++;
				
			}
		}

	}
	for (int i = 0; i < n; i++)
	{
		cout << p[i].win << '\n';
	}
	

}