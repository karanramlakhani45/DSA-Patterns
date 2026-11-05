class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
       
        while(low<=high){
            int mid=low+(high-low)/2;
            int nd=find(weights,mid);
            if(nd<=days){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
    int find(vector<int>& wt,int c){
        int day=1;
        int load=0;
        for(int i=0;i<wt.size();i++){
        if(load+wt[i]>c){
            day+=1;
            load=wt[i];
        }else{
            load+=wt[i];
        }
        }
        return day;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna