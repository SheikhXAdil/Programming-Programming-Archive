#include<iostream>
using namespace std;

void program () {

    int n;

    cin >> n;

    int* arr = new int[n];
    int* res = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        res[i] = n - arr[i] + 1;
    }

    for(int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout <<  endl;

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