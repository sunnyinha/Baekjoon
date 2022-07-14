#include<iostream>
#include<math.h>
using namespace std;

class Student
{
public:
	string name;
	int day;
	int month;
	int year;

	Student()
	{
		
	}

	void setinfo(string name, int day, int month, int year)
	{
		this->name = name;
		this->day = day;
		this->month = month;
		this->year = year;
	}
};

int main()
{
	int n;
	cin >> n;
	Student* s = new Student[n+1];
	for (int i = 0; i < n; i++)
	{
		string name;
		int day, month, year;
		cin >> name >>day >> month >> year;
		s[i].setinfo(name, day, month, year);
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (s[i].year > s[j].year)
			{
				s[n] = s[i];
				s[i] = s[j];
				s[j] = s[n];
			}
			else if (s[i].year == s[j].year)
			{
				if (s[i].month > s[j].month)
				{
					s[n] = s[i];
					s[i] = s[j];
					s[j] = s[n];
				}
				else if (s[i].month == s[j].month)
				{
					if (s[i].day > s[j].day)
					{
						s[n] = s[i];
						s[i] = s[j];
						s[j] = s[n];
					}
				}
			}
		}
		
	}
	cout << s[n-1].name << endl << s[0].name << endl;

}