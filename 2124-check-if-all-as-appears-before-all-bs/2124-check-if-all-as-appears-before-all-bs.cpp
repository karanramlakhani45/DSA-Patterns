class Solution {
public:
    bool checkString(string s) {
        int b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                b++;
            }
            if(b>0 && s[i]=='a'){
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna