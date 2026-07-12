class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        int L = 0, r = 0;
        int count = 0;
        int maxcount = 0;

        while (r < n) {

            int i;
            for (i = L; i < r; i++) {
                if (s[i] == s[r]) {
                    break;
                }
            }

            if (i == r) {      // No duplicate found
                count++;
                maxcount = max(maxcount, count);
                r++;
            }
            else {             // Duplicate found
                L++;
                count--;
            }
        }

        return maxcount;
    }
};