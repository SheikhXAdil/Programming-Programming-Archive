#include <iostream>
using namespace std;

void program()
{

    string s;

    cin >> s;

    cout << s[s.size() - 1] + s.substr(1) << endl;

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