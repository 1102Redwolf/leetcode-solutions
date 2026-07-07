class Solution {
public:

    bool possibleSplits(vector<int>& nums, int barrier, int k) {
        int currentSum = 0;
        int splitCount = 1;

        for (int i = 0; i < nums.size(); i++) {

            if (currentSum + nums[i] > barrier) {
                splitCount++;
                currentSum = nums[i];   // Start a new subarray
            }
            else {
                currentSum += nums[i];
            }

            if (splitCount > k)
                return false;
        }

        return true;
    }

    int splitArray(vector<int>& nums, int k) {

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (possibleSplits(nums, mid, k)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};