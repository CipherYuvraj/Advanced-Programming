#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
const int INT_MAX = 2147483647;
using namespace std;

std::vector<int> minimumDistanceQueries(std::vector<int>& nums, std::vector<int>& queries) {
    int n = nums.size();
    std::vector<int> answer(queries.size(), -1); // Initialize all answers to -1
    
    // Create a map to store all indices for each value in nums
    std::unordered_map<int, std::vector<int>> valueToIndices;
    for (int i = 0; i < n; i++) {
        valueToIndices[nums[i]].push_back(i);
    }
    
    // Process each query
    for (int i = 0; i < queries.size(); i++) {
        int queryIndex = queries[i];
        int queryValue = nums[queryIndex];
        
        // Check if there's only one occurrence of the value
        if (valueToIndices[queryValue].size() <= 1) {
            continue; // answer[i] already set to -1
        }
        
        // Find the minimum circular distance
        int minDistance = n; // Initialize to maximum possible distance
        
        for (int idx : valueToIndices[queryValue]) {
            if (idx == queryIndex) continue; // Skip the query index itself
            
            // Calculate circular distance
            int distance = std::min(std::abs(idx - queryIndex), n - std::abs(idx - queryIndex));
            minDistance = std::min(minDistance, distance);
        }
        
        answer[i] = minDistance;
    }
    
    return answer;
}

int main() {
    vector<int> nums = {1, 3, 1, 4, 1, 3, 2};
    vector<int> queries = {0, 3, 5};
    
    vector<int> answer = minimumDistanceQueries(nums, queries);
    
    for (int res : answer) {
        cout << res << " ";
    }
    cout << endl;

    return 0;
}
