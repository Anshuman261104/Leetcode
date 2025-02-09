class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int curr = numBottles;
        int sum = numBottles;
        while(curr >= numExchange){
            int newBottles = curr/numExchange;
            sum += newBottles;
            curr = newBottles + (curr % numExchange);
        }
        return sum;
    }
};