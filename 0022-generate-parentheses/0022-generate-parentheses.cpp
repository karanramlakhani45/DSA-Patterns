class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int oc=0;
        int cc=0;

        helper(v,n,oc,cc,"");
        return v;
    }
    void helper(vector<string>& v,int n,int oc,int cc,string s){
        if(oc==n && cc==n){
            v.push_back(s);
            return;
        }

        if(oc<n){
            helper(v,n,oc+1,cc,s+"(");
        }
        if(cc<oc){
            helper(v,n,oc,cc+1,s+")");
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna