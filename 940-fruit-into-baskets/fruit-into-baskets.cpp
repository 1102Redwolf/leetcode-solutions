class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int L = 0, r = 0, maxlen = 0;
        int n = fruits.size();

        unordered_map<int, int> mpp;

        while (r < n) {

            mpp[fruits[r]]++;

            if (mpp.size() > 2) {

                mpp[fruits[L]]--;

                if (mpp[fruits[L]] == 0)
                    mpp.erase(fruits[L]);

                L++;
                mpp[fruits[r]]--;   // Undo the addition
            }
            else {
                maxlen = max(maxlen, r - L + 1);
                r++;
            }
        }

        return maxlen;
    }
};