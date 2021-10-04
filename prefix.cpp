class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,j;
        vector<string> word{strs[0]};
        vector<string> op;
        auto iter=word[0].begin();
        auto it=word[0].end();
        for(i=0;i<strs.size();i++){
         iter=word[0].begin();
         it=word[0].end();
         for(j=0;j<word[0].size();j++){
           if(word[0].length()!=0){
            if(strs[i][j]==word[0][j])
            {
                continue;
            }
            else{
                word[0].erase(iter+j,it);
            }
           }
        }
    }
    return word[0];
    }
};
