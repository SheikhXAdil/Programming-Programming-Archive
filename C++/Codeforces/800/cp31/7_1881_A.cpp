#include <iostream>
using namespace std;

bool contains(string s, string sub)
{

    if (s.length() < sub.length())
        return false;

    // if (s == sub)
    //     return true;

    string temp;

    for (int i = 0; i <= s.length() - sub.length(); i++)
    {

        temp = s.substr(i, sub.length());
        // cout << s << " " << sub << " " << temp << endl;

        if (temp == sub)
            return true;
    }
    return false;
}

void program()
{
    int n, m;
    string s, sub;

    cin >> n >> m >> s >> sub;

    for (int i = 0; i < 10; i++)
    {
        if (contains(s, sub))
        {
            cout << i << endl;
            return;
        }
        s += s;
    }

    cout << -1 << endl;
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