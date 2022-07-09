#include<iostream>
using namespace std;

int main()
{
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int n;
		cin >> n;
		int* stu = new int[n];
		for (int j = 0; j < n; j++)
		{
			int score;
			cin >> score;
			stu[j] = score;
		}
		for (int p = 0; p < n-1; p++)
		{
			for (int q = p + 1; q < n; q++)
			{
				if (stu[p] < stu[q])
				{
					int tmp = stu[p];
					stu[p] = stu[q];
					stu[q] = tmp;
				}
			}
		}
		int gap = 0;
		for (int p = 1; p < n; p++)
		{
			if ((stu[p-1] - stu[p]) > gap)
			{
				gap = (stu[p-1] - stu[p]);
			}
		}
		cout << "Class" << " " << i + 1 << endl;
		cout << "Max " << stu[0] <<", "<<"Min " <<stu[n-1] <<", " << "Largest gap " << gap << endl;
	}
}