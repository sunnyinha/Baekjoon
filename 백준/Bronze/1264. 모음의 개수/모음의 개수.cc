#include <iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string line;
    int count = 0;
    getline(cin ,line);
    while (line != "#")
    {
        for (int i = 0; i < line.size(); i++)
        {
            if (line[i] == 'a' || line[i] == 'A')
            {
                count++;
            }
            else if (line[i] == 'e' || line[i] == 'E')
            {
                count++;
            }
            else if (line[i] == 'i' || line[i] == 'I')
            {
                count++;
            }
            else if (line[i] == 'u' || line[i] == 'U')
            {
                count++;
            }
            else if (line[i] == 'o' || line[i] == 'O')
            {
                count++;
            }
        }
        cout << count << '\n';
        count = 0;
        getline(cin,line);
    }
 
    
}