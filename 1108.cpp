//1108. Defanging an IP Address
class Solution {
public:
    string defangIPaddr(string address) {
        string add;
        int n=address.size();
        for(int i=0;i<n;i++)
        {
            if(!(address[i]=='.'))
            {
                add.push_back(address[i]);
            }
            else{
                add.push_back('[');
                add.push_back('.');
                add.push_back(']');
            }
        }
        return add;
        
    }
};