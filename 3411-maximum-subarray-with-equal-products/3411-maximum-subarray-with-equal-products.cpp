class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int m = 0;

        for(int i = 0; i < n; i++) {
            long long prod = 1;
            long long g = 0;
            long long lcm = 1;

            for(int j = i; j < n; j++) {

                prod *= nums[j];
                if(prod>25200) break;

                g = gcd(g, (long long)nums[j]);

                lcm = (lcm / gcd(lcm, (long long)nums[j])) * nums[j];

                if(prod == g * lcm) {
                    m = max(m, j - i + 1);
                }
            }
        }

        return m;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna