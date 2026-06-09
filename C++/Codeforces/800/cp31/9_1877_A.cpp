#include <iostream>
using namespace std;


void program()
{
    int n;
    int goals = 0;

    cin >> n;

    int* arr = new int[n - 1];

    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        goals += arr[i];
    }
    
    cout << -(goals) << endl;

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