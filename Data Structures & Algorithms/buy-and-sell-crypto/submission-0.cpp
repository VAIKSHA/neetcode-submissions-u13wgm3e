class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int bestbuy = arr[0];
        int profit = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > bestbuy){
                profit = max(profit, arr[i] - bestbuy);
            }
            bestbuy = min(bestbuy, arr[i]);
        }
        return profit;
    }
};
