class Solution {
public:
    bool detectCapitalUse(string word) {
        int cs = 0;
        int ss = 0;
        for(int i=0;i<word.size();i++){
            if(isupper(word[i]))
                cs ++;
            else if(islower(word[i]))
                ss ++;
        }
        if(cs == word.size())
            return true;
        if(ss == word.size())
            return true;
        if(ss == word.size()-1 && isupper(word[0]))
            return true;

        return false;
    }
};
