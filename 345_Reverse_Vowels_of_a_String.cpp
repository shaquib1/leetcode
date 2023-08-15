class Solution {
public:

 bool isVowel(char a){
        if(a=='a' || a == 'A' || a == 'E' || a == 'e' ||a=='i' || a == 'I' || a == 'o' || a == 'O' ||a=='U' || a == 'u'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        
         int n = s.size();
        int p1 = 0;
        int p2 = n-1;

        while(p1<=p2){
            if(isVowel(s[p1]) && isVowel(s[p2])){
                swap(s[p1], s[p2]);
                p1++;
                p2--;
            }
            else if(isVowel(s[p1])){
                p2--;

            }
            else if(isVowel(s[p2])){
                p1++;
            }
            else{
                p2--;
                p1++;
            }
        }

        return s;
    }
};