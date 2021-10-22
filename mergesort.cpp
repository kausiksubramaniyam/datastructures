#include<iostream>
using namespace std;
int split(int a[],int length){
    int mid=length/2;
    int b[mid],c[length-mid];
    cout<<mid<<" "<<length-mid;
    int i=0,j=0;
    for(i=0;i<mid;i++){
        b[j]=a[i];
        j++;
    }
    j=0;
    for(i=mid;i<length;i++){
        c[j]=a[i];
        j++;
    }
    i=0;
    j=0;
    int k=0,fin[10];
    while(i<mid && j<length-mid){
        if(b[i]<c[j]){
            fin[k]=b[i];
            i++;
        }
        else{
            fin[k]=c[j];
            j++;
        }
        k++;
    }
    while(i<mid){
        fin[k]=b[i];
        i++;
        k++;
    }
    while(j<length-mid){
        fin[k]=c[j];
        j++;
        k++;
    }
    for(int i=0;i<k;i++){
        cout<<fin[i];
    }
    return 0;
}
int main(){
    int i,a[10];
    int n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    split(a,n);
    return 0;
}
