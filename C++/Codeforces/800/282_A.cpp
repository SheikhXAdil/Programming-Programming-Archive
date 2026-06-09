#include <iostream>
using namespace std;

int main()
{

    int n, x = 0;
    string statement;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        
        cin >> statement;

        if(statement == "--X" || statement == "X--") {
            x--;
        } else {
            x++;
        }

    }

    cout << x;
    

   return 0;
}