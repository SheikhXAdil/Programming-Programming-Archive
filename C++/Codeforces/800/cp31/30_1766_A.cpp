#include <iostream>
using namespace std;



void program()
{
    int n, count = 0;

    cin >> n;

    

    while (n > 10) {
        count++;
        n /= 10;
    }

    cout << 9 * count + n << endl;
    
    

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