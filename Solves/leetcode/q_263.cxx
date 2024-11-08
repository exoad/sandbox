class Solution {
public:
    bool isUgly(int n) {
        return n==0?false:n>0&&n<=3?true:n%2==0?isUgly(n/2):n%3==0?isUgly(n/3):n%5==0?isUgly(n/5):false;
    }
};