#include <iostream>
using namespace std;

void program()
{

    string s;
    int zeroC = 0, oneC = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            zeroC++;
        else
            oneC++;
    }

    int minC = min(zeroC, oneC);

    if (minC % 2 == 1) {
        cout << "DA" << endl;
    } else 
        cout << "NET" << endl;

    

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