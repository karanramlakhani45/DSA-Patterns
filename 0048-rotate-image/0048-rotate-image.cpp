class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> v(n, vector<int>(n));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[j][n-i-1]=matrix[i][j];
            }
        }
        matrix =v;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna