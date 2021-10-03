class Solution {
public:
    int romanToInt(string s) {
    int i,v=0;
    for(i=0;i<s.size();i++){
        if((s[i]=='V')&&(s[i-1]=='I')){
            s[i]='A';
            s[i-1]='A';
            v=4;
        }
        else if((s[i]=='X')&&(s[i-1]=='I')){
            s[i]='A';
            s[i-1]='A';
            v=v+9;
        }
        else if((s[i]=='L')&&(s[i-1]=='X')){
            s[i]='A';
            s[i-1]='A';
            v=v+40;
        }
        else if((s[i]=='C')&&(s[i-1]=='X')){
            s[i]='A';
            s[i-1]='A';
            v=v+90;
        }
        else if((s[i]=='D')&&(s[i-1]=='C')){
            s[i]='A';
            s[i-1]='A';
            v=v+400;
        }
        else if((s[i]=='M')&&(s[i-1]=='C')){
            s[i]='A';
            s[i-1]='A';
            v=v+900;
        }
    }
    for(i=0;i<s.size();i++){
        if(s[i]!='A'){
            if(s[i]=='I'){
                v=v+1;
            }
            else if(s[i]=='V'){
                v=v+5;
            }
            else if(s[i]=='X'){
                v=v+10;
            }
            else if(s[i]=='L'){
                v=v+50;
            }
            else if(s[i]=='C'){
                v=v+100;
            }
            else if(s[i]=='D'){
                v=v+500;
            }
            else if(s[i]=='M'){
                v=v+1000;
            }
        }
    }
    return v;
    }
};
