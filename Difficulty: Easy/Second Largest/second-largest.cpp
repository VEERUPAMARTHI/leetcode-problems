class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        if (n<2){
            return -1;
        }
        int max = INT_MIN, prev = INT_MIN;
        for(int i:arr){
            if( i > max){
                prev = max;
                max = i;
            }
            else if(i > prev && i!= max){
                prev = i;
            }
        }
        if(prev != INT_MIN) return prev;
        else return -1;
    }
};