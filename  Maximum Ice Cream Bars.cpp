class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int res = 0;
        sort(costs.begin(),costs.end());
        for(auto i:costs){
            if(i<=coins){
                res++;
                coins-=i;
            }
        }
        return res;
    }
};
