class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int cnt = 1;
            int sum = 0;

            for (int i = 0; i < weights.size(); i++) {

                if (sum + weights[i] <= mid) {
                    sum += weights[i];
                }
                else {
                    cnt++;
                    sum = weights[i];
                }
            }

            if (cnt <= days) {
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