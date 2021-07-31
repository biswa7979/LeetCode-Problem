//1486. XOR Operation in an Array
class Solution {
public:
    int xorOperation(int n, int start) {
        int op=start;
        for(int i=1;i<n;i++)
        op=op^(start+(2*i));
        
        return op;
    }
};