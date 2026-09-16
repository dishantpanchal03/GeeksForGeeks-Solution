class Solution {
public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        int m = a.size();
        int n = b.size();

        vector<int> merged(m + n);

        for (int i = 0; i < m; i++) {
            merged[i] = a[i];
        }

        for (int i = 0; i < n; i++) {
            merged[m + i] = b[i];
        }

        sort(merged.begin(), merged.end());

        int total = m + n;
        int mid = total / 2;

        if (total % 2 == 0) {
            return (double)(merged[mid] + merged[mid - 1]) / 2.0;
        } else {
            return merged[mid];
        }
    }
};
