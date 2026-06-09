#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {

        int l = 0, r = height.size() - 1;
        int maxL = height[l], maxR = height[r];
        int res = 0, trappedWater;


        while (l < r)
        {
            if (maxL <= maxR)
            {
                l++;
                maxL = max(maxL, height[l]);
                trappedWater = maxL - height[l] < 0 ? 0 : maxL - height[l];
                res += trappedWater;
            }
            else if (maxR < maxL)
            {
                r--;
                maxR = max(maxR, height[r]);
                trappedWater = maxR - height[r] < 0 ? 0 : maxR - height[r];
                res += trappedWater;
            }
        }

        return res;
    }
};

int main()
{

    Solution S;
    vector<int> nums = {0, 2, 0, 3, 1, 0, 1, 3, 2, 1};
    int ans = S.trap(nums);

    cout << ans;
}