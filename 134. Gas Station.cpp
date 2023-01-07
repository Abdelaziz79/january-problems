class Solution {
public:
    long long vec_sum(vector<int> arr){
        long long sum=0;
        for(auto x:arr){
            sum+=x;
        }
        return sum;
    } 
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(vec_sum(gas) < vec_sum(cost))
            return -1;

        int res = 0;
        int total = 0;
        
        for(int i=0;i<gas.size();i++){
            total += gas[i] - cost[i];

            if(total<0){
                total = 0;
                res = i + 1; 
            }
        }
        return res;
    }
};

