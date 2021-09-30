#include<iostream>
#include<string.h>
using namespace std;
using namespace std;
int sparse(char arr[][10],char quer[][10],int n,int q){
    int i,j,c;
    for(i=0;i<q;i++){
        c=0;
        for(j=0;j<n;j++){
            if(strcmp(quer[i],arr[j])==0){
                c=c+1;
            }  
        }
        cout<<c<<endl;
    }
    return 0;
}
int main(){
    int n,q,i;
    cin>>n;
    char arr[n][10];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>q;
    char quer[q][10];
    for(i=0;i<q;i++){
        cin>>quer[i];
    }
    sparse(arr,quer,n,q);
}

