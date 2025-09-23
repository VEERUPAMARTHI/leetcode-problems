class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        return false;
    }
    int maxFreqSum(string s) {
        map<char,int>freq;
        for(char c : s){
            freq[c]++;
        }
        int m1=0,m2=0,c1=0,c2=0;
        for(pair<char,int>i : freq){
            if(isVowel(i.first)){
                if(i.second>m1){
                    m1 = i.second;
                }
            }
            else{
                if(i.second>m2){
                    m2 = i.second;
                }
            }
        }
        return m1+m2;
    }
};