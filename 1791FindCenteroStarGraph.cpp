//1791 Find Center of Star Graph
class Solution {
public:
    int findCenter(vector<vector<int>>& ed) {
      
       return (ed[0][0]==ed[1][0]||ed[0][0]==ed[1][1])? ed[0][0]:ed[0][1];
    }
};