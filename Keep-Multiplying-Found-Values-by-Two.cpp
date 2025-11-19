class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
         int bits = 0;
         int k=original;
        for (auto& n : nums) {
            if (n % k != 0) continue;
            n = n / k;
            if ((n & (n - 1)) == 0)
                bits |= n;
        }
        int d = bits + 1;
        return k * (d & -d);
    }
};