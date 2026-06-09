#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &heights)
    {

        int res = 0;
        int l = 0, r = heights.size() - 1;

        while (l < r)
        {
            int area = (r - l) * min(heights[l], heights[r]);
            res = max(res, area);

            if (heights[l] < heights[r])
                l++;
            else if (heights[r] < heights[l])
                r--;
            else
            {
                l++;
                r--;
            }
        }

        return res;
    }
};

int main()
{

    Solution S;
    vector<int> nums = {1, 7, 2, 5, 4, 7, 3, 6};
    int ans = S.maxArea(nums);

    cout << ans;
}