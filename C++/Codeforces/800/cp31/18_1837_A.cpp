#include <iostream>
using namespace std;

void program()
{
    int k, x;

    cin >> x >> k;

    if (x % k != 0) {
        cout << 1 << endl;
        cout << x << endl;
    } else {
        cout << 2 << endl;
        cout << 1 << " " << x-1 << endl;
    }

    
    

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