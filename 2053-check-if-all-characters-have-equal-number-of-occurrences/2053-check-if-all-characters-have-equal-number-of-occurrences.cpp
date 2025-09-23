class Solution {
public:
    bool areOccurrencesEqual(string s) {
       vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<s.size()-1;i++){
            if(freq[s[i]-'a']!=freq[s[i+1]-'a']){
                return false;
            }
        }
        return true;
    }
};