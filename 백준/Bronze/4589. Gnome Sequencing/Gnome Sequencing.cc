#include<iostream>
#include<string>

using namespace std;

int main()
{
	bool big[31][3] = {0,};
	int n;
	cin >> n;

	for(int i=0; i<n; i++)
	{
		int a[3];
		for (int j = 0; j < 3; j++)
		{
			cin >> a[j];
			if (j != 0)
			{
				if (a[j] < a[j - 1])
				{
					big[i][j] = 1;
				}
				else
				{
					big[i][j] = 0;
				}
			}
			
		}
	}
	cout << "Gnomes:\n";

	for (int i = 0; i < n; i++)
	{

		if ((big[i][1] == big[i][2]))
		{
			cout << "Ordered" << '\n';

		}
		else
		{
			cout << "Unordered" << '\n';


		}
	}

}