class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> map;
        int x;
        for(int i=0;i<pattern.size();i++){
            x = s.find(' ');
            string z = s.substr(0,x);
            s = s.substr(x+1,-1);
            
            if(map.find(pattern[i])!=map.end()&& map[pattern[i]]!=z){
                return false;
            }
            for(auto m:map){
                if(m.second == z&&m.first!=pattern[i]){
                    return false;
                }
            }
            map[pattern[i]] = z;
        }
        if(x!=-1)
            return false;
        return true;   
    }
};
