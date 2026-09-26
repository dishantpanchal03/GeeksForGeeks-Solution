class Solution {
  public:
    int squaresInMatrix(int m, int n) {
        // code here
        int sqr = 0;
        while(m > 0 && n > 0){
            sqr += (m*n);
            m--;
            n--;
        }
        return sqr;
    }
};