#include <iostream>
using namespace std;

class zip
{
public:
	bool s[21] = { 0, };

	void add(int x)
	{
		s[x] = 1;
	}
	void remove(int x)
	{
		s[x] = 0;
	}
	void check(int x)
	{
		if (s[x] == 1)
		{
			cout << 1 << '\n';
		}
		else
			cout << 0 << '\n';
	}
	void toggle(int x)
	{
		if (s[x] == 1)
		{
			s[x] = 0;
		}
		else
		{
			s[x] = 1;
		}
	}
	void all()
	{
		for (int i = 1; i <= 20; i++)
		{
			s[i] = 1;
		}
	}
	void empty()
	{
		for (int i = 1; i <= 20; i++)
		{
			s[i] = 0;
		}
	}

};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int m;
	cin >> m;
	zip z;
	while (m--)
	{
		string cmd;
		cin >> cmd;
		if (cmd == "add")
		{
			int x;
			cin >> x;
			z.add(x);
		}
		else if (cmd == "remove")
		{
			int x; 
			cin >> x;
			z.remove(x);
		}
		else if (cmd == "check")
		{
			int x;
			cin >> x;
			z.check(x);
		}
		else if (cmd == "toggle")
		{
			int x;
			cin >> x;
			z.toggle(x);
		}
		else if (cmd == "all")
		{
			z.all();
		}
		else if (cmd == "empty")
		{
			z.empty();
		}
	}
	

}