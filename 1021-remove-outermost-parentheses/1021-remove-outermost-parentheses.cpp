class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')') c--;
            if(c!=0) ans.push_back(s[i]);
            if(s[i]=='(') c++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna