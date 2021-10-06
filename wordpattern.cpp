class Solution {
public:
    bool wordPattern(string pattern, string s) {
    int i,j,n;
    bool res;
    char val='a';
    vector<string> a;
    string word="";
    for(auto x:s){
        if(x==' '){
            a.push_back(word);
            word="";
        }
        else{
            word=word+x;
        }
    }
    a.push_back(word);
    n=a.size();
    char pat[n];
    for(i=0;i<n;i++){
        pat[i]='0';
    }
    pat[0]=val;
    for(i=0;i<n;i++){
         for(j=i+1;j<n+1;j++){
            if(pat[i]=='0'){
                pat[i]=val;
            }
            if(a[i]==a[j]){
                pat[j]=val;
                i=i+1;
            }
        }
        val=val+1;
    }
    word="";
    for(i=0;i<n;i++){
        word=word+pat[i];
    }
    if(word==pattern){
        res=true;
    }
    else{
        res=false;
    }
    return res;
    }
};
