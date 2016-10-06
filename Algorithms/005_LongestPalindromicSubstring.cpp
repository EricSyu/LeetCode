class Solution {
public:
    string longestPalindrome(string s) {
        string longestPal = s.substr(0,1);
        for(int i=0; i<s.length(); i++){
            if(longestPal.length() > s.length()-i)
                break;

            for(int j=s.length()-1; j>i; j--){
                if(s[i] != s[j]) continue;

                string sub = s.substr(i,j-i+1);
                if(sub.length() > longestPal.length()){
                    if(isPalindrome(sub)){
                        longestPal = sub;
                        break;
                    }
                }
            }
        }
        return longestPal;
    }
    
    bool isPalindrome(string& s){
        for(int i=0; i<s.length()/2; i++){
            if(s[i] != s[s.length()-1-i])
                return false;
        }
        return true;
    }
};