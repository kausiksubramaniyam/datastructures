#include<iostream>
using namespace std;
void merge(int arr[10],int lb,int mid,int ub){
    int i=lb;
    int j=mid+1;
    int k=0;
    int b[10],c[10];
    for(i=lb;i<=mid;i++){
        b[i]=arr[i];
    }
    i=0;
    for(j=mid+1;j<ub;j++){
        c[i]=arr[j];
        i++;
    }
    while(i<=mid && j<ub){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
        }
        else{
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        b[k]=arr[i];
        i++;
        k++;
    }
    while(j<ub){
        b[k]=arr[j];
        j++;
        k++;
    }
}
void mergesort(int arr[10],int lb,int ub){
    int mid;
    if(lb<ub){
        mid=(lb+ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}
int main(){
    int n,lb,ub,arr[10]={12,11,13,5,6,7};
    lb=0;
    ub=5;
    mergesort(arr,lb,ub);
    return 0;
}
