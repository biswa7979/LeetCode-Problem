//1512. Number of Good Pairs
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int pairs=0;
        int m=nums.size();
        for(int i=0;i<m-1;i++)
        {
            for(int j=i+1;j<m;j++)
            {
                if(nums[i]==nums[j])
                    ++pairs;
            }
        }
        return pairs;
    }
};