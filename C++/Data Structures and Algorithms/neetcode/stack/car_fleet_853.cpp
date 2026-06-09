#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int carFleet(int target, vector<int> &position, vector<int> &speed)
    {
        vector<vector<int>> pairs;
        stack<float> fleets;

        for (int i = 0; i < position.size(); i++)
        {
            pairs.push_back({position[i], speed[i]});
        }

        sort(pairs.begin(), pairs.end(), [](const vector<int> &pair1, const vector<int> &pair2)
             { return pair1[0] < pair2[0]; });

        for (int i = pairs.size() - 1; i >= 0; i--)
        {
            int position = pairs[i][0];
            int speed = pairs[i][1];

            float current = (target - position) / (float)speed;

            if (!(!fleets.empty() && current <= fleets.top()))
                fleets.push(current);
        }

        return fleets.size();
    }
};

int main()
{

    Solution s;

    vector<int> position = {4,1,0,7};
    vector<int> speed = {2,2,1,1};
    int target = 10;

    int ans = s.carFleet(target, position, speed);
    cout << ans << endl;

    return 0;
}