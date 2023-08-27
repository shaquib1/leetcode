class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num==1){
            return true;
        }
        
       long long int s=0; 
       long long int e=num/2;

        while(s<=e){
           long long int m=s+(e-s)/2;

           if(m*m==num){
               return true;
           }else if(m*m<num){
               s=m+1;
           }else{
               e=m-1;
           }
        }
        return false;
    }
};