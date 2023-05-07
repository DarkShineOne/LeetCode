#include <iostream>
#include <string>
#include <vector> 
using namespace std;
class Solution {
public:
    string addBinary(string &a, string &b) {
        if (a.size() < b.size())
            return addBinary(b, a);
        b = string(a.size() - b.size(),'0') + b;
        vector<char> result;
        bool reminder = false;
        for (int i = a.size()-1; i >= 0; i--) {
            short add = (a[i] + b[i]) - 96 + reminder;
            reminder = false;
            if (add > 1) {
                reminder = true;
                add = add == 3 ? 1: 0;
            }
            result.push_back(add + '0');
        }
        if (reminder)
            result.push_back(reminder + '0');
        reverse(result.begin(), result.end());
        return string(result.begin(), result.end());
    }
};

int main()
{
    string a{ "111" };
    string b{ "1010" };
    Solution s;
    cout << s.addBinary(a, b);
}

