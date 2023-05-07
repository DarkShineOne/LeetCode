

#include <iostream>
#include <string>
#include <stack>
#include <map>
using namespace std;

class Solution {
public:
    map<char,int> dict{ {'{', 0}, {'(',0}, {'[', 0},{'}', 1}, {')',1}, {']', 1} };
    stack <char> stk;
    bool isValid(string s) {
        stk.push(s[0]);
        if (dict[stk.top()] == 1) return false;
        for (size_t i = 1; i != s.size(); i++) {
            if (stk.size() == 0 and dict[s[i]] == 1)
                return false;
            if (stk.size() == 0 or (dict[stk.top()] == 0 and dict[s[i]] == 0)) {
                stk.push(s[i]);
            }
            else {
                if (abs(s[i] - stk.top()) > 3) {
                    return false;
                }
                else
                    stk.pop();
            }
        }
        if (stk.size() != 0)
            return false;
        else
            return true;
    }
};
int main()
{
    Solution s;
    cout << s.isValid("{)");
}
