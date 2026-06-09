#include <iostream>
using namespace std;

void program()
{
    int n, x;
    int litres = 0;


    cin >> n >> x;

    int *stations = new int[2 * n + 2];
    stations[0] = 0;
    stations[2 * n + 1] = 2 * x;

    for (int i = 1; i <= n; i++)
    {
        cin >> stations[i];
        stations[2 * n - i + 1] = 2 * x - stations[i];
    }

    for (int i = 1; i < (2 * n + 2); i++)
    {
        if(stations[i] - stations[i - 1] > litres) {
            litres = stations[i] - stations[i - 1];
        }
    }
    
    cout << litres << endl;

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