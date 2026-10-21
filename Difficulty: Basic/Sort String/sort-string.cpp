class Solution {
  public:
    string sortString(string &s) {
        sort(s.begin(), s.end());
        return s;
    }
};