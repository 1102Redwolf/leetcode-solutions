class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int x = k;
        int n = nums.size();

        int L = 0, r = 0;
        int cnt = 0, maxcnt = 0;

        while (r < n) {

            if (nums[r] == 0)
                x--;

            cnt++;

            while (x < 0) {
                if (nums[L] == 0)
                    x++;
                L++;
                cnt--;
            }

            maxcnt = max(maxcnt, cnt);
            r++;
        }

        return maxcnt;
    }
};