/*
53. Maximum Subarray
Easy

7802

363

Add to List

Share
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Follow up:

If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size()>1)
        {
        int sum,mx= *max_element(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            sum=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                sum+=nums[j];
                mx=max(mx,sum);
               // cout<<sum;
            }
            
        }
        return mx;
        }
        return nums[0];
    }
};
