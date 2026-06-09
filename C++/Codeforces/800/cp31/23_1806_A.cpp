#include <iostream>
using namespace std;

void program()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if (b > d || a - b < c - d) {
        cout << -1 << endl;
        return;
    }

    cout << (d-b) + ((a + d - b) - c) << endl;

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