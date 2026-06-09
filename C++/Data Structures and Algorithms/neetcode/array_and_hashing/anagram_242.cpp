#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.length() != t.length())
            return false;

        unordered_map<char, int> s_map, t_map;

        for (int i = 0; i < s.length(); i++)
        {
            s_map[s[i]]++;
            t_map[t[i]]++;
        }

        for (int i = 0; i < s_map.size(); i++)
        {
            if (s_map[s[i]] != t_map[s[i]])
                return false;
        }

        return true;
    }
};

int main()
{

    Solution S;

    cout << S.isAnagram("jam", "jar");
}