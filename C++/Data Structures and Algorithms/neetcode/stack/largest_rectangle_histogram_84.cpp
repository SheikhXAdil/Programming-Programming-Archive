#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {

        int maxArea = 0;
        stack<vector<int>> pairs; // index, height

        for (int i = 0; i < heights.size(); i++)
        {
            int currentH = heights[i];
            int start = i;
            int stackI = i;
            int stackH = heights[i];
            while (!pairs.empty() && pairs.top()[1] < currentH)
            {
                stackI = pairs.top()[0];
                stackH = pairs.top()[1];
                pairs.pop();

                maxArea = max(maxArea, stackH * (i - stackI));
                start = stackI;
            }
            pairs.push({start, stackH});
        }

        cout << maxArea << endl;

        while (!pairs.empty())
        {
            int area = pairs.top()[1] * (heights.size() - 1 - pairs.top()[0]);
            cout << pairs.top()[1] << " " << pairs.top()[0] << " " << area << endl;
            maxArea = max(maxArea, area);
            pairs.pop();
        }

        return maxArea;
    }
};

int main()
{

    Solution s;

    vector<int> heights = {7,1,7,2,2,4};

    int ans = s.largestRectangleArea(heights);
    cout << ans << endl;

    return 0;
}