//1720. Decode XORed Array
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> dec;
        dec.push_back(first);
        for(int i=1;i<=encoded.size();i++)
        {
            dec.push_back(encoded[i-1]^dec[i-1]);
        }
      
        return dec;
    }
};