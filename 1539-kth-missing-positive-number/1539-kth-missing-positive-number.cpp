class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int high=*max_element(arr.begin(),arr.end());
        int c=0;
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
           m[arr[i]]++;
        }
        for(int i=1;i<=k+high;i++){
            if(m.find(i)==m.end()){
                c++;
            }
            if(c==k){
                return i;
            }
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna