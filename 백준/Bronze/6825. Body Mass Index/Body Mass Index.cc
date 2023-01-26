#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double w, h;
    int bmi;

    cin >> w >> h;
    bmi = w / (h * h);
    if (bmi > 25)
    {
        cout << "Overweight";
    }
    else if (bmi >= 18.5)
    {
        cout << "Normal weight";
    }
    else
    {
        cout << "Underweight";
    }

}