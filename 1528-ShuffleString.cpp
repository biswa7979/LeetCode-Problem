//1528. Shuffle String
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> shu;
        int n=s.size();
        string correct;
        for(int i=0;i<n;i++)
        {
            shu[indices[i]]=s[i];
        }
        map<int,char>::iterator it;
        for(it=shu.begin();it!=shu.end();++it)
        {
            correct.push_back(it->second);
        }
        
    return correct;
    }
};