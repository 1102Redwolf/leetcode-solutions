class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxdiff=-1, bestnum=nums[0];
        int n=nums.size();
        for(int i=1; i<n; i++){
            if(nums[i]>bestnum){
                maxdiff = max(maxdiff, nums[i]-bestnum);
            }
            bestnum = min(bestnum, nums[i]);
        }
        return maxdiff;
    }
};