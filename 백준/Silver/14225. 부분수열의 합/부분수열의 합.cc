#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void removecase(int idx, int sum, int s[],bool t[],int n)
{
	if (idx == n) 
	{
		t[sum] = 1;
		return;
	}
	removecase(idx + 1, sum,s,t,n); // 원소가 포함 안되는 경우
	removecase(idx + 1, sum + s[idx],s,t,n); //원소가 포함 되는 경우
}

int main()
{
	int n;
	int sum = 0;
	bool nosum = 1;
	cin >> n;
	int* s = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
		sum += s[i];
	}
	bool* t = new bool[sum+1];
	removecase(0, 0, s, t,n);
	
	for (int i = 0; i < sum+1; i++)
	{
		if (t[i] != 1)
		{
			cout << i << endl;
			nosum = 0;
			break;
		}
	}
	if (nosum == 1)
	{
		cout << sum + 1 << endl;
	}

}