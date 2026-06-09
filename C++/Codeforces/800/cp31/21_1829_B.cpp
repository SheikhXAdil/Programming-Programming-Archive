#include<iostream>
using namespace std;

void program () {

    int n, zeroC = 0, maxC =0;

    cin >> n;

    int* arr = new int[n];


    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] == 0) {
            zeroC++;
        } else {

            if (zeroC > maxC)
                maxC = zeroC;

            zeroC = 0;

        }

    }
    
    if (zeroC > maxC)
                maxC = zeroC;

    cout << maxC <<  endl;

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