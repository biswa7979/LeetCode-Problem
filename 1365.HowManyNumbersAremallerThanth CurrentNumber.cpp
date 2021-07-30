//1365. How Many Numbers Are Smaller Than the Current Number
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(nums[i]>nums[j])
                {
                    count++;
                }
            }
            v.push_back(count);
        }
      return v;  
    }
};