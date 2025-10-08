class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }
        int m=0;
        vector<int>res;
        for(pair<int,int>i:freq){
            if(i.first%2 == 0 && i.second>m){
                m = i.second;
            }
        }
        if(m == 0) return -1;
        for(pair<int,int>i:freq){
            if(i.first%2 == 0 && i.second == m){
                res.push_back(i.first);
            }
        }
        return res[0];
    }
};