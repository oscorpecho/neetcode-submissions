class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int maxp=0;
        int diff=0;
        for(int r=1;r<prices.size();r++){
            while(prices[r]<prices[l]){
                l++;
            }
            diff=prices[r]-prices[l];
            maxp=max(maxp,diff);
        }
        return maxp;
    }
};
