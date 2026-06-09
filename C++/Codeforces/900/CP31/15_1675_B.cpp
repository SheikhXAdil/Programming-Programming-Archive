#include<iostream>
using namespace std;

void program () {

    int n, count = 0;

    cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    if (n == 1) {
            cout << 0 << endl;
            return;
        }

    for(int i = n - 2; i >= 0; i--) {
    
        // cout << arr[i] << " " << arr[i + 1] << endl;
    
        if (arr[i+1] == 0) {
            cout << -1 << endl;
            return;
        }
        
        while (arr[i] >= arr[i+1]) {
            arr[i] /= 2;
            count++;
        }
    }

    cout << count <<  endl;

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