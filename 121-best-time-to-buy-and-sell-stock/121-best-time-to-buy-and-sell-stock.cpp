class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuy = 10001, maxP =0;
        
        for (const int &i: prices) {
            minBuy = i < minBuy ? i: minBuy; //min(i, minBuy);
            maxP =  maxP > (i - minBuy) ? maxP: (i-minBuy); // max(maxP, i - minBuy);
        }
        return maxP;  
    }
};