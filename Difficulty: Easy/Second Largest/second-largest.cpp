class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int l1 = INT_MIN, l2 = INT_MIN;

            for(int n : arr){
                if(n > l1){
                    l2 = l1;
                    l1 = n;
                }
                else if(n > l2 && n < l1) l2 = n;
            }
        return l2 != INT_MIN ? l2 : -1;
    }
};