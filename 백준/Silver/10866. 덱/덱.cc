#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Deque
{
public:
	int first =0;
	int size = 0;
	int a[10001] = { 0, };

	void push_front(int x)
	{
		for (int i = size; i >= 1; i--)
		{
			a[i] = a[i-1];
		}
		a[first] = x;
		size++;
	}
	void push_back(int x)
	{
		a[size] = x;
		size++;
	}
	void pop_front()
	{
		if (empty())
		{
			cout << "-1" << '\n';
			return;
		}
		cout << a[first] << '\n';
		for (int i = 0; i <size-1; i++)
		{
			a[i] = a[i+1];
		}
		size--;
	}
	void pop_back()
	{
		if (empty())
		{
			cout << "-1" << '\n';
			return;
		}
		cout << a[size - 1] << '\n';
		a[size-1] = 0;
		size--;
	}
	void nowsize()
	{
		cout << size << '\n';
	}
	bool empty()
	{
		if (size == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	void front()
	{
		if (empty())
		{
			cout << "-1" << '\n';
			return;
		}
		else
		{
			cout << a[first] << '\n';
		}
	}
	void back()
	{
		if (empty())
		{
			cout << "-1" << '\n';
			return;
		}
		else
		{
			cout << a[size-1] << '\n';
		}
	}

};



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	Deque D;
	while (n--)
	{
		string cmd;
		cin >> cmd;
		if (cmd == "push_front")
		{
			int x;
			cin >> x;
			D.push_front(x);
		}
		else if (cmd == "push_back")
		{
			int x;
			cin >> x;
			D.push_back(x);
		}
		else if (cmd == "pop_front")
		{
			D.pop_front();
		}
		else if (cmd == "pop_back")
		{
			D.pop_back();
		}
		else if (cmd == "size")
		{
			D.nowsize();
		}
		else if (cmd == "empty")
		{
			cout << D.empty() << '\n';
		}
		else if (cmd == "front")
		{
			D.front();
		}
		else if (cmd == "back")
		{
			D.back();
		}
	}


}