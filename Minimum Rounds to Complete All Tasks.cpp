class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int res = 0;
        unordered_map<int,int> map;
        for(auto i:tasks){
            map[i]++;
        }
        // 0 - 1 - 2
        for(auto i:map){
            if(i.second<2)
                return -1;
            if(i.second % 3 == 0){
                res+=(i.second/3);
            }
            else if(i.second % 3 == 2)
            {
                res+= (i.second/3) + 1;
            }else{
                int z = 0;
                int x = i.second;
                while(x%3 == 1){
                    x = i.second - 2;
                    z++;
                }
                res+=(i.second/3)+z;  
            }
        }

        return res == 0 ? -1 : res;
    }
};
