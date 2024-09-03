/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        map<char, int> m {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int ans = m[s[n-1]];
        int i = 1;
        while (i < n)
        {
            if(s[n-1-i] == 'I')
            {
                if(s[n-i] == 'V' | s[n-i] == 'X')
                    ans--;
                else
                    ans++;
            }
            else if(s[n-1-i] == 'X')
            {
                if(s[n-i] == 'L' | s[n-i] == 'C')
                    ans -= 10;
                else
                    ans += 10;
            }

            else if(s[n-1-i] == 'C')
            {
                if(s[n-i] == 'D' | s[n-i] == 'M')
                    ans -= 100;
                else
                    ans += 100;
            }
            else
            {
                ans += m[s[n-1-i]];
            }
            i++;
        }
        return ans;
    }
};
// @lc code=end

