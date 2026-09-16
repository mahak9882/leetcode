class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_prof = 0;
        for(int price:prices){
            if(price<min_price){
                min_price = price;
            }else{
                max_prof = max(max_prof,price-min_price);
            }
        }
        return max_prof;
    }
};