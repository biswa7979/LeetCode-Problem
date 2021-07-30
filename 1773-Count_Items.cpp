//1773. Count Items Matching a Rule
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
         int j=0;
            if(ruleKey=="color") j=2;
            else if(ruleKey=="name") j=3;
            else j=1;
        
        int n=items.size();
        int f=0;
        for(int i=0;i<n;i++)
        {
           if(items[i][j-1]==ruleValue)
                f++;
        }
       return f; 
    }
};