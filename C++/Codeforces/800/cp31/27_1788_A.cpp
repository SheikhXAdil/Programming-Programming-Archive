#include <iostream>
using namespace std;


void program()
{
    int n, twoC = 0, temp = 0;

    cin >> n;
    
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] == 2)
            twoC++;
    }

    if (twoC % 2 != 0) {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
            temp++;


        if (temp == (twoC / 2)) {
            cout << i+1 << endl;
            return;
        }
    }
    

    

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