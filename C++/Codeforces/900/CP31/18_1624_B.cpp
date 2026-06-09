#include <iostream>
using namespace std;

void program()
{

    long long a, b, c;

    cin >> a >> b >> c;

    int newA = b - (c - b), newB = a + (c - a) / 2, newC = a + 2 * (b - a);

    if (newA >= a && newA % a == 0 && newA != 0) {
        cout << "YES" << endl;
        return;
    }

    if (newB >= b && (c-a) % 2 == 0 && newB % b == 0 && newB != 0) {
        cout << "YES" << endl;
        return;
    }

    if (newC >= c && newC % c == 0 && newC != 0) {
        cout << "YES" << endl;
        return;
    }

    // int new_a = b - (c - b);
    // if(new_a >= a && new_a % a == 0 && new_a != 0) {
    //     cout << "YES\n";
    //     return;
    // }

    // int new_b = a + (c - a)/2;
    // if(new_b >= b && (c-a)%2 == 0 && new_b % b == 0 && new_b != 0) {
    //     cout << "YES\n";
    //     return;
    // }

    // int new_c = a + 2*(b - a);
    // if(new_c >= c && new_c % c == 0 && new_c != 0) {
    //     cout << "YES\n";
    //     return;
    // }

    cout << "NO" << endl;


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