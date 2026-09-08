class Solution {
public:
    vector<vector<int>> searchWord(vector<vector<char>> mat, string word) {
        int n = mat.size();
        int m = mat[0].size();

        int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (mat[i][j] != word[0])
                    continue;

                for (int d = 0; d < 8; d++) {
                    int r = i;
                    int c = j;
                    int k;

                    for (k = 1; k < word.size(); k++) {
                        r += dr[d];
                        c += dc[d];

                        if (r < 0 || r >= n || c < 0 || c >= m ||
                            mat[r][c] != word[k]) {
                            break;
                        }
                    }

                    if (k == word.size()) {
                        ans.push_back({i, j});
                        break;
                    }
                }
            }
        }

        return ans;
    }
};
