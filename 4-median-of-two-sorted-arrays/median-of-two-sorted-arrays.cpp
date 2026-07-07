class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n2 = nums2.size();

        // Merge nums2 into nums1
        for (int i = 0; i < n2; i++) {
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());

        int n = nums1.size();
        int mid = n / 2;

        if (n % 2 == 0) {
            return (nums1[mid - 1] + nums1[mid]) / 2.0;
        } else {
            return nums1[mid];
        }
    }
};