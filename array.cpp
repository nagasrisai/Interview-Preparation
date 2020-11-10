#include<bits/stdc++.h>
using namespace std;
void insertatbeginning(int arr[],int n, int ele){
   
    for(int i=n; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=ele;
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void insertatend(int arr[], int n, int ele){
    n++;
    int i;
    
    arr[n]=ele;
    for(i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void insertatmiddle(int arr[], int n, int ele, int pos){
    int i;
    n++;
    for(i=n; i>=pos; i--){
    arr[i]=arr[i-1];
    }
    
    arr[i]=ele;
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void deleteatfirst(int arr[],int n){
    
    for(int i=0; i<=n; i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void deleteatmiddle(int arr[], int n, int pos){
    int i;
    for(i=pos-1; i<n; i++){
        arr[i]=arr[i-1];
    }
    n--;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void deleteatend(int arr[], int n){
    n--;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void searching(int arr[], int n, int ele){
    int i;
    for(i=0; i<n; i++){
        if(arr[i]==ele){
    
            break;
        }
    }
    cout<<i;
}
int  main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    insertatbeginning(arr,n,0);
    insertatend(arr,n,6);
    insertatmiddle(arr,n,20,3);
    deleteatfirst(arr, n);
    deleteatmiddle(arr,n,4);
    deleteatend(arr,n);
    searching(arr,n,2);
    searching (arr,n,1);
    return 0;
}
