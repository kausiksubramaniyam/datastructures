class Solution {
public:
    int romanToInt(string s) {
    int val,i,no=0,fin=0;
    for(i=s.size()-1;~i;i--){
        switch(s[i]){
            case 'I' : val=1;break;
            case 'V' : val=5;break;
            case 'X' : val=10;break;
            case 'L' : val=50;break;
            case 'C' : val=100;break;
            case 'D' : val=500;break;
            case 'M' : val=1000;break;
        }
        if(no<=val){
            no=val;
            fin=fin+no;
        }
        if(no>val){
            fin=fin-val;
        }
    }
    return fin;  
    }
};
