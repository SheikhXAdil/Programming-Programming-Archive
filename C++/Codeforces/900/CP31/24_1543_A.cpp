#include <iostream>
using namespace std;

void program()
{

    long long a, b;

    cin >> a >> b;

    if (a == b) {
        cout << 0 << " " << 0 << endl;
        return;
    }

    if (b > a) {
        swap(a, b);
    }

    long long g = a - b;

    cout << g << " " << min(a % g, g - (a % g)) << endl;


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