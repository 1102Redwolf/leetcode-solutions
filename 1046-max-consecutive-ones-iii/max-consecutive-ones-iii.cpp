class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxlen = 0, L = 0, r = 0;
        int zeros = 0;

        while (r < n) {
            if (nums[r] == 0)
                zeros++;

            if (zeros > k) {
                if (nums[L] == 0)
                    zeros--;
                L++;
            }

            maxlen = max(maxlen, r - L + 1);
            r++;
        }

        return maxlen;
    }
};