class Solution {
public:
    bool canweplace(vector<int>& position, int dist, int m){
        int n=position.size();
        int countm = 1, last = position[0];
        for(int i=1; i<n; i++){
            if(position[i]-last >= dist){
                countm++;
                last = position[i];
            }
        }

        if(countm >= m){
            return true;
        }

        else{
            return false;
        } 

    }





    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(), position.end());

        int low = 1;
        int high = position[n-1]-position[0];
        int ans=0;

        while(low<=high){

            int mid = (low+high)/2;

            if(canweplace(position,mid,m) == true){
                ans = mid;
                low = mid+1;
            }

            else{
                high = mid-1;
            }
        }

        return ans;
    }
};