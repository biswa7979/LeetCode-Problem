//1281. Subtract the Product and Sum of Digits of an Integer
class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        int sub;
        while(n>0)
        {
            prod*=(n%10);
            sum+=(n%10);
            n/=10;
        }
        sub=prod-sum;
        return sub;
    }
};