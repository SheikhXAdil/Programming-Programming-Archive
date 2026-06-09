#include <iostream>
using namespace std;

void program()
{
    int n;

    cin >> n;
    
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];        
    }

    if (arr[0] == 1) {
        cout << "YES" << endl;
        return;
    }
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