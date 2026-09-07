class Solution {
  public:
    int distinctSubseq(string &str) {
        // code here
        const long long MOD = 1e9 + 7;

                vector<long long> dp(26, 0);


                for (char c : str) {
                    int idx = c - 'a';

                    dp[idx] = (accumulate(dp.begin(), dp.end(), 0LL) +1) % MOD;
                }

                return (accumulate(dp.begin(), dp.end(), 0LL) +1) % MOD;
    }
};