class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        vector<int> vc;
        
        stack<int> st;
        
        st.push(arr[n-1]);
        vc.insert(vc.begin(), arr[n-1]);
        
        for(int i=n-2; i>=0; i--){
            if(arr[i] >= st.top()){
                st.push(arr[i]);
                vc.insert(vc.begin(),arr[i]);
            }
        }
        return vc;
    }
};