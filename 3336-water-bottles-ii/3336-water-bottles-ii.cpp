class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int total = numBottles;
        while(numBottles >= numExchange){
            numBottles -= numExchange;
            numExchange++;
            numBottles++;
            total++;
        }
        return total;
    }
};