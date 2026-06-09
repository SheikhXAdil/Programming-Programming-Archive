#include <iostream>
using namespace std;

int getMinElemIndex(int A[], int n) {

    int min = A[0], minIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if(A[i] < min) {
            min = A[i];
            minIndex = i;
        }
    }

    return minIndex;
    

}

void program()
{
    int A_c;

    cin >> A_c;

    int* A = new int[A_c];
    int* B = new int[A_c];
    int* C = new int[A_c];
    int B_c = 0;
    int C_c = 0;

    for (int i = 0; i < A_c; i++)
    {
        cin >> A[i];
    }

    

    B[B_c++] = A[getMinElemIndex(A, A_c)];

    for (int i = 0; i < A_c; i++)
    {

        if(i == getMinElemIndex(A, A_c))
            continue;

        if(A[i] == B[0]) {
            B[B_c++] = A[i];
        } else {
            C[C_c++] = A[i];
        }
    }

    if(C_c == 0) {
        cout << -1 << endl;
        return;
    }

    cout << B_c << " " << C_c << endl;

    for (int i = 0; i < B_c; i++)
        cout << B[i] << " ";
    cout << endl;
    for (int i = 0; i < C_c; i++)
        cout << C[i] << " ";
    cout << endl;

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