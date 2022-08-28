#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


class Member
{
public :
	int age;
	string name;
	int index;
	Member()
	{

	}
	void Addinfo(int age, string name, int index)
	{
		this->age = age;
		this->name = name;
		this->index = index;
	}
};
bool compare(Member a, Member b)
{
	if (a.age == b.age)
	{
		return a.index < b.index;
	}
	return a.age < b.age;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int age;
	string name;
	int index = 0;
	Member *m = new Member[n];
	for (int i = 0; i < n; i++)
	{
		cin >> age >> name;
		m[i].Addinfo(age, name, index);
		index++;
	}
	sort(m, m + n, compare);
	for (int i = 0; i < n; i++)
	{
		cout << m[i].age << " " << m[i].name << '\n';
	}
	delete[] m;

}