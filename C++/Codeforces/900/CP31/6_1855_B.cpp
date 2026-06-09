#include <iostream>
using namespace std;

void program()
{

    long long n;

    cin >> n;

    int i = 1;

    do {
        i++;
    } while (n % i == 0);

    cout << i - 1 << endl;
    

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