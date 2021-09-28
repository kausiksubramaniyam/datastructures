#include<iostream>
#include<vector>
using namespace std;
void swamp(vector<int> arr,int a,int b){
    
}
void leftrotate(vector<int> arr,int n,int d){
    int i,j,temp;
    for(i=d,j=n-1;i<d+((n-d)/2);i++,j--)
    {
        temp=arr.at(i);
        arr.at(i)=arr.at(j);
        arr.at(j)=temp;
    }
    for(i=0,j=d-1;i<d/2;i++,j--)
    {
        temp=arr.at(i);
        arr.at(i)=arr.at(j);
        arr.at(j)=temp;
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        temp=arr.at(i);
        arr.at(i)=arr.at(j);
        arr.at(j)=temp;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";;
    }
}

int main(){
    int i,n,d,no;
    vector<int> a;
    cin>>n;
    cin>>d;
    for(i=0;i<n;i++){
        cin>>no;
        a.push_back(no);
    }
    
    leftrotate(a,n,d);
    return 0;
  }
