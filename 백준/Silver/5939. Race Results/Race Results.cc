#include<iostream>
#include<algorithm>
using namespace std;

class Time
{
public:
	int hour;
	int minute;
	int second;


};

bool small(Time a, Time b)
{
	if (b.hour < a.hour)
	{
		return 0;
	}
	else if (b.hour == a.hour)
	{
		if (b.minute < a.minute)
		{
			return 0;
		}
		else if (b.minute == a.minute)
		{
			if (b.second < a.second)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
		
	}
	
	else
	{
		return 1;
	}
}



int main()
{
	long n;
	cin >> n;
	Time* time = new Time[n];
	for (long i = 0; i < n; i++)
	{
		cin >> time[i].hour >> time[i].minute >> time[i].second;
	}
	sort(time, time + n, small);
	for (long i = 0; i < n; i++)
	{
		cout << time[i].hour << " " << time[i].minute << " " <<time[i].second <<'\n';
	}
	delete[] time;

}