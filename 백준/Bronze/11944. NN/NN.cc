#include<iostream>
#include<string>
using namespace std;



int main()
{
	int n;
	int m;
	cin >> n >> m;
	int cnt = 0;
	bool stop = 0;
	string stn = to_string(n);
	while (cnt <n*stn.size())
	{

		for (int i = 0; i < stn.size(); i++)
		{
			cout << stn[i];
			cnt++;
			if (cnt >= m)
			{
				stop = 1;
				break;
			}
		}
		if (stop == 1)
		{
			break;
		}
	}
		

}

	