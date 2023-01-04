class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int res = 0;
        for(int i=0;i<strs[0].size();i++){
            int x = 0;
            for(int j=0;j<strs.size();j++){
                if(x <= strs[j][i]){
                    x = strs[j][i];  
                }else{
                    res++;
                    break;
                }    
            }
        }
        return res;
    }
};

