class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int cs =0, ms = INT_MIN;
        for(int i:arr){
            cs += i;
            ms = max(cs,ms);
            if(cs<0){
                cs =0;
            }
        }
        return ms;
    }
};