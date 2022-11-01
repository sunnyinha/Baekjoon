#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int largest = 0;
    cin >> n;
    int* sum = new int[n];

    for(int i=0; i<n; i++)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        if (a[0] == a[1] && a[1] == a[2])
        {
            sum[i] = (10000 + a[0] * 1000);
        }
        else if (a[0] == a[1])
        {
            sum[i] = (1000 + a[0] * 100);
        }
        else if (a[0] == a[2])
        {
            sum[i] = (1000 + a[0] * 100);

        }
        else if (a[1] == a[2])
        {
            sum[i] = (1000 + a[1] * 100);
        }
        else
        {
            int max = 0;
            for (int j = 0; j < 3; j++)
            {
                if (a[j] > max)
                {
                    max = a[j];
                }
            }
            sum[i] = max * 100;
        }
    }
    for(int i=0;i<n;i++)
    {
        if (sum[i] > largest)
        {
            largest = sum[i];
        }
    }
    delete[] sum;
    cout << largest;
}