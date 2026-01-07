class Solution {
public:
    string addBinary(string a, string b) {
        int x = a.size() - 1;
        int y = b.size() - 1;
        int carry = 0;
        string result = "";
        while(x >= 0 || y >= 0 || carry){
            int sum = carry;
            if( x >= 0){
                sum += a[x] - '0';
                x--;
            }
            if( y >= 0){
                sum += b[y] - '0';
                y--;
            }
            result += ((sum % 2) + '0');
            carry = sum/2;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};