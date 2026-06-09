#include<iostream>
using namespace std;


void program () {

    int n;

    cin >> n;

    int* arr = new int[n];
    cin >> arr[0];

    for(int i = 1; i < n; i++) {
        cin >> arr[i];

        arr[0] = arr[0] & arr[i];
    }
    
    
    cout << arr[0] << endl;

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