class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int max=0,ele;
        for(pair<int,int>i : freq){
            if(i.second>max){
                max = i.second;
                ele = i.first;
            }
        }
        return ele;
    }
};