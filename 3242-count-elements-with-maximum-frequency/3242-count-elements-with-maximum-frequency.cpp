class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>freq;
        int n = nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int max = 0;
        for(pair<int,int>i : freq){
            if(i.second>max){
                max=i.second;
            }
        }
        int count = 0;
        for(pair<int,int>i : freq){
            if(i.second==max){
                count += max;
            }
        }
        return count;
    }
};