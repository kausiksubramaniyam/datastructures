#include<iostream>
#include<vector>
using namespace std;
vector<int> dynarray(vector<vector<int>> queries,int n){
    vector<vector<int>> arr(n);
    vector<int> ans;
    int idx=0,lastans=0;
    for(int i=0;i<queries.size();i++){
        if(queries[i][0]==1){
            idx=((queries[i][1]^lastans)%n);
            arr[idx].push_back(queries[i][2]);
        }
        else if(queries[i][0]==2){
            idx=((queries[i][1]^lastans)%n);
            lastans=arr[idx][queries[i][2]%(arr[idx].size())];
            ans.push_back(lastans);
            cout<<lastans<<"\n";
        }
    }
    return ans;
    
}
int main()
{
    int n,q,no;
    cin>>n;
    cin>>q;
    vector<vector<int>> queries(q);
    for(int i=0;i<q;i++){
        for(int j=0;j<3;j++){
            cin>>no;
            queries[i].push_back(no);
        }
    }
    dynarray(queries,n);
}
