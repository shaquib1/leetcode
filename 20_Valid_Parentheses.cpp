#include <iostream>

using namespace std;

int sum(int a , int b){
    int sum= a+b;
    return sum;
}

int main(){
    
    int a,b;
    cout<<"Enter the number";
    cin>>a>>b;

int ans=sum(a,b);
    cout<<"sum is:"<<ans;
    return 0;
}