#include <iostream>
#include <map>
using namespace std;

void program()
{

    int n, k;
    string s;

    map<char, int> counts;
    int oddCount = 0;

    cin >> n >> k >> s;

    for (int i = 0; i < s.length(); i++)
        counts[s[i]]++;

    for(map<char, int>::iterator i = counts.begin(); i != counts.end(); i++) {
        if(i->second % 2 != 0)
            oddCount++;
    }

    // cout << oddCount << endl;

    oddCount -= k;

    // cout << oddCount << endl;

    if (oddCount == 0 || oddCount == 1) {
        cout << "YES" << endl;
        return;
    } else if (oddCount > 1) {
        cout << "NO" << endl;
        return;
    } else {
        cout << "YES" << endl;
        return;
    }

    // cout << "NO" << endl;
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