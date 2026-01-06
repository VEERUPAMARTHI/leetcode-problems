class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        map<int,int>freq;
        for(int i:nums){
            freq[i]++;
            if(freq[i]==n){
                return i;
            }
        }
        return -1;
    }
};