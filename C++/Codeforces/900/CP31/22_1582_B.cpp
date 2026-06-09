#include<iostream>
#include<cmath>
using namespace std;

typedef long long ll;

void program () {

    int n, zeroC = 0, oneC = 0;

    cin >> n;

    int x;

    for(int i = 0; i < n; i++) {
        cin >> x;

        if (x == 0)
            zeroC++;
        if (x == 1)
            oneC++;

    }

    // 2^zeroC * oneC
    cout << (1ll << zeroC) * (ll)oneC << endl;
    

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