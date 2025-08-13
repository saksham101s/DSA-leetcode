class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return false;
        }
        int maxPowerOfThree = 1162261467;
        return maxPowerOfThree % n == 0;
    }
};