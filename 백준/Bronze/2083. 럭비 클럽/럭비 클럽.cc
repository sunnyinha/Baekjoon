#include<iostream>
#include<string>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string name;
    int age;
    int weight;

    while (1)
    {
        cin >> name >> age >> weight;
        if (name == "#" && age == 0 && weight == 0)
        {
            break;
        }
        cout << name << " ";
        if (age > 17 || weight >= 80)
        {
            cout << "Senior" << '\n';
        }
        else 
        {
            cout << "Junior" << '\n';

        }
    }



}