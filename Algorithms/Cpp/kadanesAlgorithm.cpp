#include <iostream> 
using namespace std; 

// leetcode 53. Maximum Subarray
// this question will provide you a clear idea of kadane's Algo.

// Given an integer array nums, find the subarray with the largest sum, and return its sum.

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.

// Input: nums = [5,4,-1,7,8]
// Output: 23
// Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

class Solution {
public:
    // Method to find the maximum sum of a subarray within the given vector
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN, Sum = 0;
        
        // Iterate through the elements of the vector
        for (int i = 0; i < n; i++) {
            Sum += nums[i]; // Accumulate the sum of the current subarray
            
            // Update the maximum sum seen so far
            maxi = max(maxi, Sum);
            
            // If the accumulated sum becomes negative, reset it to 0,
            // as it won't be useful in finding the maximum sum subarray.
            Sum = max(Sum, 0);
        } 
        
        // Return the maximum sum of subarray found
        return maxi;
    }
};

int main() {
    // Initialize the vector nums with fixed values
    vector<int> nums;
    nums.push_back(-2);
    nums.push_back(1);
    nums.push_back(-3);
    nums.push_back(4);
    nums.push_back(-1);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(-5);
    nums.push_back(4);

    // Create an instance of the Solution class
    Solution solution;
    
    // Call the maxSubArray method to find the maximum sum of the subarray
    int maxSum = solution.maxSubArray(nums);

    // Print the result to the console
    cout << "Maximum sum of subarray: " << maxSum << endl;

    return 0;
}