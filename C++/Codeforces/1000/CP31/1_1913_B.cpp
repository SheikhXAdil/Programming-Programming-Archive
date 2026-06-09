#include <iostream>
using namespace std;

void program()
{
    int cost = 0, counts[2];
    string s;

    counts[0] = 0;
    counts[1] = 0;

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0')
            counts[0]++;
        else
            counts[1]++;
    }
    

    for (int i = 0; i <= s.size(); i++)
    {
        if (i == s.size() || counts[1 - (s[i] - '0')] <= 0)
        {
            cost = s.size() - i;
            break;
        }

        counts[1 - (s[i] - '0')]--;
        
    }

    cout << cost << endl;

}

int main()
{

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        program();
    }

    return 0;
}