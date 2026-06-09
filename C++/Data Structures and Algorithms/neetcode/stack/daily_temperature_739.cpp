#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> res(temperatures.size());
        stack<vector<int>> stk;

        for (int i = 0; i < temperatures.size(); i++)
        {
            int current = temperatures[i];

            while(!stk.empty() && current > stk.top()[1]) {
                int stackT = stk.top()[1];
                int stackInd = stk.top()[0];

                res[stackInd] = i - stackInd;

                stk.pop();
            }

            stk.push({i, current});
        }

        return res;
        
    }
};

int main()
{

    Solution s;

    vector<int> temperatures = {30, 38, 30, 36, 35, 40, 28};

    vector<int> ans = s.dailyTemperatures(temperatures);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}