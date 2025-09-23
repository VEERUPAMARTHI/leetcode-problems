class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int>freq;
        for(char c : s){
            freq[c]++;
            if(freq[c] == 2){
                return c;
            }
        }
        return ' ';
    }
};