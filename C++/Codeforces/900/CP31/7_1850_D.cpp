#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void program()
{

    long long n, k, temp;

    cin >> n >> k;

    vector<long long> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    int sequenceC = 1, maxSequenceC = 1;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i + 1] - k <= arr[i])
        {
            sequenceC++;
            continue;
        }

        // cout << sequenceC << " " << maxSequenceC << endl;

        maxSequenceC = max(maxSequenceC, sequenceC);
        sequenceC = 1;
    }

    maxSequenceC = max(maxSequenceC, sequenceC);

    cout << n - maxSequenceC << endl;
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