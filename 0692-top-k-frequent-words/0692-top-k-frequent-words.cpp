class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>freq;
        for(int i=0;i<words.size();i++){
            freq[words[i]]++;
        }
        vector<string>res;
        while(k--){
            int max=0;
            string word;
            for(pair<string,int>i :freq){
                if(i.second>max){
                    max = i.second;
                    word = i.first;
                }
            }
            res.push_back(word);
            freq.erase(word);
        }
        return res;
    }
};