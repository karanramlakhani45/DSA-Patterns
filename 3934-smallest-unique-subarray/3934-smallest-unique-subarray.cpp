
class Solution {
public:
    using ll = long long;

    const ll MOD = 1e9 + 7;
    const ll BASE = 100002;

    vector<ll> power;

    bool check(int len, vector<int>& nums) {

        int n = nums.size();

        unordered_map<ll, int> mp;

        ll hash = 0;

        for(int i = 0; i < len; i++) {
            hash = (hash * BASE + nums[i]) % MOD;
        }

        mp[hash]++;

        ll highestPower = power[len-1];

        for(int i = len; i < n; i++) {

            hash = (hash - nums[i-len] * highestPower % MOD + MOD) % MOD;

            hash = (hash * BASE + nums[i]) % MOD;

            mp[hash]++;
        }

        for(auto &p : mp) {
            if(p.second == 1) {
                return true;
            }
        }

        return false;
    }

    int smallestUniqueSubarray(vector<int>& nums) {

        int n = nums.size();

        power.resize(n+1,1);

        for(int i = 1; i <= n; i++) {
            power[i] = (power[i-1] * BASE) % MOD;
        }

        int left = 1, right = n;
        int ans = n;

        while(left <= right) {

            int mid = left + (right-left)/2;

            if(check(mid, nums)) {
                ans = mid;
                right = mid-1;
            }
            else {
                left = mid+1;
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna