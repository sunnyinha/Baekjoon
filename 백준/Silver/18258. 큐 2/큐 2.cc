#include<iostream>
#include<vector>
using namespace std;

long a[2000001] = { 0, };

class q
{
private:
	int rear = 0;
	int front = 0;
	

public:
	void push(long x)
	{
		a[rear++] = x;
	}
	void pop()
	{
		if ((rear-front)== 0)
		{
			cout << -1 << '\n';
			return;
		}
		cout << a[front++] << '\n';

	}
	void size()
	{
		cout << rear-front << '\n';
	}
	void empty()
	{
		if ((rear - front) == 0)
		{
			cout << 1 << '\n';
		}
		else
		{
			cout << 0 << '\n';
		}
	}
	void frontp()
	{
		if ((rear - front) == 0)
		{
			cout << -1 << '\n';
			return;
		}
		cout << a[front] << '\n';
	}
	void backp()
	{
		if ((rear - front)  == 0)
		{
			cout << -1 << '\n';
			return;
		}
		cout << a[rear - 1] << '\n';
	}


};

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	q queue;
	long n;
	cin >> n;
	while (n--)
	{
		string cmd;
		cin >> cmd;
		if (cmd == "push")
		{
			long x;
			cin >> x;
			queue.push(x);
		}
		else if (cmd == "pop")
		{
			queue.pop();
		}
		else if (cmd == "size")
		{
			queue.size();
		}
		else if (cmd == "empty")
		{
			queue.empty();
		}
		else if (cmd == "front")
		{
			queue.frontp();
		}
		else if (cmd == "back")
		{
			queue.backp();
		}
	}



}
