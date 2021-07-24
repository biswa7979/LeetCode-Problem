//27. Remove Element
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> n;
        for(int i=0; i<nums.size();i++){
            if(val!=nums[i])
            {
                n.push_back(nums[i]);
            }
            else{
                continue;
            }
        }
        nums=n;
        return n.size();
    }
};