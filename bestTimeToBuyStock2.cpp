#include<iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;

        for(int i=0;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                profit =profit + prices[i]-prices[i-1];
            }
        }
        return profit;
    }
};