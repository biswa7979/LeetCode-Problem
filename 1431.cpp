//1431. Kids With the Greatest Number of Candies
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int beforCandies=*max_element(begin(candies),end(candies));
        
        vector<bool> res;
        for(int i=0;i<n;i++)
        {
            int sum=candies[i]+extraCandies;
            if(beforCandies<=sum)
            {
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        
        return res;
    }
};