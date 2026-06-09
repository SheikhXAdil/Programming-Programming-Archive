#include <iostream>
using namespace std;



void program()
{
    int n, a, b;

    cin >> n >> a >> b;
    
    if ((n == a && b == a) || a + b <= n - 2) {
        cout << "Yes" << endl;
        return;
    } 

    cout << "No" << endl;

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