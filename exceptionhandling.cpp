#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,result;
    cin>>a>>b;
    try {
        if(b==0){
            throw b;
        }
        else{
            result=a/b;
        }
        cout<<result;
    }
    catch(int b){
        cout<<"the value of b is zero"<<b;
    }
    return 0;
}
