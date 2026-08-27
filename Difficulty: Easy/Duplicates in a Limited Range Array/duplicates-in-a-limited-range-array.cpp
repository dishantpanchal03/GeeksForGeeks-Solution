class Solution {
  public:
      vector<int> findDuplicates(vector<int>& arr) {
          unordered_set<int> seen;
          vector<int> ans;

          for (int num : arr) {
              if (seen.count(num))
                  ans.push_back(num);
              else
                  seen.insert(num);
          }

          return ans;
      }
  };
