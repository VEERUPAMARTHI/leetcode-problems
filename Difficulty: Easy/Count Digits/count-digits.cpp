class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int c = 0;
        int t =n;
        while(t!=0){
            int d = t % 10;
            if(d!=0 && n% d == 0){
                c++;
            }
            t /=10;
        }
        return c;
    }
};