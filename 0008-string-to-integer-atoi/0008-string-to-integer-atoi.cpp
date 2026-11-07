class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.size();
        while(i<n && s[i]==' '){
            i++;
        }
        s=s.substr(i);
        i=0;
        n=s.size();
        int sign=1;
        if(i<n && (s[i]=='+' || s[i]=='-')){
            if(s[i]=='-'){
                sign=-1;
            }
            i++;
        }
        long long num=0;
        int maximum=INT_MAX;
        int minimum=INT_MIN;
        while(i<n && s[i]>='0' && s[i]<='9'){
            int digit=s[i]-'0';
            num=num*10+digit;
            if(num*sign>=maximum){
                return maximum;
            }

            if(num*sign<=minimum){
                return minimum;
            }
            i++;
        }
        return (int)(sign*num);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna