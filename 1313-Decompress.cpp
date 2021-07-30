//1313. Decompress Run-Length Encoded List
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        for(int i=0;i<n;i+=2)
            v.insert(v.end(), nums[i],nums[i+1]);
        
        return v;
    }
};