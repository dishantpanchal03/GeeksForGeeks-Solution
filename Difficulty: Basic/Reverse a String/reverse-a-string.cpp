class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int i = 0, n = s.size() - 1;
        
        while(i < n){
            char temp = s[i];
            s[i] = s[n];
            s[n] = temp;
            
            i++;
            n--;
        }
        return s;
    }
};
