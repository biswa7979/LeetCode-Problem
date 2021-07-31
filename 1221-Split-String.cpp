//1221. Split a String in Balanced Strings

class Solution {
public:
    int balancedStringSplit(string s) {
        int res=0,cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L') cnt--;
            else cnt++;
            if(cnt==0) res++;
        }
      return res;  
    }
};