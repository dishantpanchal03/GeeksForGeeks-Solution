class Solution {
  public:
    int minParentheses(string& s) {
        // code here
        int n = 0;
        int open = 0;
        
        for(char c : s){
            if(c == '(') open++;
            else if(c == ')' && open > 0) open--;
            else n++;
        }
        return n + open;
    }
};