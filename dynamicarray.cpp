#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,lastans,idx,y;
    cin>>n;
    vector<vector<int>> a(n);
    int q[3];
    for(i=0;i<3;i++){
        cin>>q[i];
    }
    if(q[0]==1){
        idx=(q[1]^lastans)%n;
        a[idx].push_back(q[2]);
    }
    else if(q[0]==2){
        cout<<"HI";
        idx=(q[1]^lastans)%n;
        y=q[2]%(a[idx].size());
        lastans=a[idx][y];
        cout<<"HI"<<lastans;
    }
    
}
