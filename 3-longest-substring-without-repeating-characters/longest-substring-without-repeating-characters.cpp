class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        int L = 0, r = 0;
        int count = 0;
        int maxcount = 0;

        while (r < n) {

            bool duplicate = false;

            for (int i = L; i < r; i++) {
                if (s[i] == s[r]) {
                    duplicate = true;
                    break;
                }
            }

            if (!duplicate) {
                count++;
                maxcount = max(maxcount, count);
                r++;
            }
            else {
                L++;
                count--;
            }
        }

        return maxcount;
    }
};