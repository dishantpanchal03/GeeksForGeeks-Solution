class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        // code here
        vector<int> res;
        int n = matrix.size();
        
        for(int i = 0; i<n; i++){
            if(i % 2 == 0){
                for(int j=0; j<n; j++){
                    res.push_back(matrix[i][j]);
                }
            }
            else{
                for(int k = n-1; k>=0; k--){
                    res.push_back(matrix[i][k]);
                }
            }
        }
        return res;
    }
};