class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        int repeating = -1, missing = -1;

        for (int i = 0; i < n; i++) {
            int x = abs(arr[i]);

            if (arr[x - 1] < 0) {
                repeating = x;
            } else {
                arr[x - 1] = -arr[x - 1];
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                missing = i + 1;
                break;
            }
        }

        return {repeating, missing};
    }
};
