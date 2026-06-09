#include <iostream>
using namespace std;

void program()
{
    int n;

    cin >> n;


    if(n % 3 == 0)
        cout << "Second" << endl;
    else
        cout << "First" << endl;
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