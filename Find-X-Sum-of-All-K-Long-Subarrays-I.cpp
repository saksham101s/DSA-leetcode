class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int arraySize = nums.size();
    vector<int> outputResult;

    for (int startIdx = 0; startIdx <= arraySize - k; startIdx++) {
        unordered_map<int, int> frequencyMap;

        for (int subIdx = startIdx; subIdx < startIdx + k; subIdx++) {
            frequencyMap[nums[subIdx]]++;
        }

        priority_queue<pair<int, int>> maxHeap;
        for (const auto& entry : frequencyMap) {
            maxHeap.push({entry.second, entry.first});
        }

        int currentSum = 0;
        for (int topElements = 0; topElements < x && !maxHeap.empty(); topElements++) {
            currentSum += maxHeap.top().first * maxHeap.top().second;
            maxHeap.pop();
        }

        outputResult.push_back(currentSum);
    }

    return outputResult;
    }
};