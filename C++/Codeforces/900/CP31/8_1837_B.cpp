#include <iostream>
#include <set>
using namespace std;

void program()
{

    int n;
    string s;

    cin >> n >> s;

    int ans = 1, cur = 1;

    for(int i = 1; i < n; i++)
    {
        if(s[i] != s[i - 1]) cur = 1;
        else cur++;
        ans = max(ans, cur);
    }
    
    cout << ans + 1 << endl;
    

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