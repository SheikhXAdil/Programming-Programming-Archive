#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    string encode(vector<string> &strs)
    {
        string res = "";

        for (int i = 0; i < strs.size(); i++)
        {
            res.append(to_string(strs[i].length()) + "%" + strs[i]);
        }

        return res;
    }

    vector<string> decode(string s)
    {

        vector<string> res;

        for (int i = 0; i < s.length();)
        {
            int j = i;

            while (s[j] != '%')
            {
                j++;
            }

            int len = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, len);
            res.push_back(str);
            i = j + len + 1;
        }

        return res;
    }
};

int main()
{

    Solution s;

    vector<string> strs = {"Hallo", "Everynyan"};

    string encoded = s.encode(strs);

    vector<string> decoded = s.decode(encoded);

    cout << "Encoded " << encoded << "\n" << "Decoded ";

    for (int i = 0; i < decoded.size(); i++)
    {
        cout << decoded[i] << " , "; 
    }
     

    return 0;
}