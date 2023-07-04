#include <iostream>
using namespace std;


int getMaxStock(int arr[],  int size){
   
   int mini=arr[0];
   int maxi=0;

for(int i=0; i<size; i++){
    
    mini=min(mini,arr[i]);
    maxi=max(maxi,arr[i]-mini);

}
return maxi;
}



int main(){

  int arr[789];
  int size;
  cout<<"Enter the  size of the array: " <<endl;
cin>>size;

for(int i=0; i<size; i++){
    cin>>arr[i];
}


int ans=getMaxStock(arr,size);

cout<<ans;

    return 0;
}