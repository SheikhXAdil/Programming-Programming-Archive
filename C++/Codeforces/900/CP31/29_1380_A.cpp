#include<iostream>
using namespace std;


void program () {

    int n;

    cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
            cout << "YES" << endl;
            cout << i << " " << i + 1 << " " << i + 2 << endl;
            return;
        }
    }
    
    cout << "NO" << endl;

}

int main()
{

    int t;

    cin >> t;

    for(int i = 0; i < t; i++) {
        program();
    }
    return 0;
}