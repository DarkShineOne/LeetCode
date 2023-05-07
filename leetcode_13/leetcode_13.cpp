
#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char, int> dict{ {'I', 1},{'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };

class Solution {
public:
    int romanToInt(string s) {
        int sum = dict[s[0]];
        for (size_t i = 1; i != s.size(); i++) {
            if (dict[s[i - 1]] < dict[s[i]])
                sum += dict[s[i]] - 2 * dict[s[i - 1]];
            else
                sum += dict[s[i]];
        }
        return sum;
    }
};

int main()
{
    Solution s;
    cout << s.romanToInt("MCMXCIV") << endl;

}