#include <iostream>
using namespace std;

void program()
{

    long long n, ans = -9999;

    cin >> n;
    
    long long *arr = new long long[n];


    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }

    for(int i = 0; i < n; ++i){
		ans = max(ans, arr[(i - 1 + n) % n] - arr[i]);
	}

	for(int i = 1; i < n; ++i){
		ans = max(ans, arr[i] - arr[0]);
	}

	for(int i = 0; i < n - 1; ++i){
		ans = max(ans, arr[n - 1] - arr[i]);
	}

    cout << ans << endl;
    
    
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