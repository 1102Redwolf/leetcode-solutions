class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int current = 1;
        int index = 0;
        int missing = 0;

        while (true) {

            if (index < arr.size() && current == arr[index]) {
                index++;
            }
            else {
                missing++;

                if (missing == k)
                    return current;
            }

            current++;
        }
    }
};