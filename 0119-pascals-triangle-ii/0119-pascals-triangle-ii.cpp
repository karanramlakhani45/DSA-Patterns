class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans=1;
        vector<int> a;
        a.push_back(ans);
        int n=rowIndex+1;
        for(int i=1;i<n;i++){
            ans=ans*(n-i);
            ans=ans/i;
            a.push_back(ans);
        }
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna