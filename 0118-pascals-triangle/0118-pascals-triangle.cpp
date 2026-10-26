class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        for(int i=1;i<=numRows;i++){
            a.push_back(generaterow(i));
        }
        return a;
    }
    vector<int> generaterow(int r){
        long long ans=1;
        vector<int> row;
        row.push_back(ans);
        for(int i=1;i<r;i++){
            ans=ans*(r-i);
            ans=ans/(i);
            row.push_back(ans);
        }
        return row;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna