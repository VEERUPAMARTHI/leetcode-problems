class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<int> arr;
        while(k--){
            int max = 0;
            int ele;
            for(pair<int,int>i : freq){
                if(i.second>max){
                    max = i.second;
                    ele = i.first;
                }
            }
            arr.push_back(ele);
            freq.erase(ele);
        }
        return arr;
    }
};