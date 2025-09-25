class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>freq;
        for(int i:arr){
            freq[i]++;
        }
        int res = -1;
        for(pair<int,int>i:freq){
            if(i.first == i.second){
                res = max(res,i.first);
            }
        }
        return res;
    }
};