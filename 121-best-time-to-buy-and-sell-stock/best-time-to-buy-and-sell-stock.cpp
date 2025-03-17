class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minvalue = INT_MAX;
        int maxprofit = 0;
        if(prices.size()==1) return 0;

        for(int i : prices){
            if( minvalue > i ){
                minvalue = i;
            }
            
            int profit = i - minvalue;
            if(profit > maxprofit){
                maxprofit = profit;
            }
        }
        return maxprofit;
    }
};