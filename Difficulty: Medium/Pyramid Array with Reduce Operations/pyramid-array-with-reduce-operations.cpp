class Solution {
  public:
    int formPyramid(vector<int>& arr) {
        int n = arr.size();

                vector<long long> left(n), right(n);

                left[0] = 1;
                for (int i = 1; i < n; i++) {
                    left[i] = min((long long)arr[i],
                                  left[i - 1] + 1);
                }

                right[n - 1] = 1;
                for (int i = n - 2; i >= 0; i--) {
                    right[i] = min((long long)arr[i],
                                   right[i + 1] + 1);
                }

                long long maxHeight = 0;

                for (int i = 0; i < n; i++) {
                    maxHeight = max(maxHeight, min(left[i], right[i]));
                }

                long long total = accumulate(arr.begin(), arr.end(), 0LL);

                return total - maxHeight * maxHeight;
    }
};