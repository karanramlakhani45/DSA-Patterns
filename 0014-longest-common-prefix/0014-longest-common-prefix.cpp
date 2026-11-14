class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string f=strs[0];
        string l=strs[n-1];
        string ans="";
        for(int i=0;i<min(f.size(),l.size());i++){
            if(f[i]!=l[i]){
                return ans;
            }
            ans+=f[i];
        }
        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna