#include<iostream>
#include <cmath>
using namespace std;

int getMedian(int a, int b) {

    return ceil((a+b)/2.0);

}


void program () {

    int n, k;

    cin >> n >> k;

    long long* arr = new long long[n*k];

    for(int i = 0; i < n*k; i++) {
        cin >> arr[i];
    }
    
    int startI = getMedian((n * k) - 1, (n * k) - 1 - n);
    // cout << startI << endl;
    long long sum = arr[startI];

    // cout << startI << " " << arr[startI] << ' ';

    for (int i = 0; i < k - 1; i++)
    {
        startI = getMedian(startI - 1, startI - 1 - n);
        // cout << startI << " " << arr[startI] << ' ';
        sum += arr[startI];
    }
    // cout << endl;

    cout << sum << endl;
    

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