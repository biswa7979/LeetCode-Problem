//1342. Number of Steps to Reduce a Number to Zero
class Solution {
public:
    int numberOfSteps(int num) {
        int i;
        for(i=0;num>0;i++)
        (num%2==0)? num/=2:num--;
        return i;
    }
};