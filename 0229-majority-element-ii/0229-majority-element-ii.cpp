class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        vector<int>res;
        for(pair<int,int>i:freq){
            if(i.second>n/3){
                res.push_back(i.first);
            }
        }
        return res;
    }
};