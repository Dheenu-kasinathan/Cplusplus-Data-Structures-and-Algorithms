/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

//using hash map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        
        for(int i = 0; i < nums.size(); i++){
            int rem = target - nums[i];
            if(map.find(rem) != map.end())    
                return {map[rem],i};
            map[nums[i]] = i;
        }
        return {}; 
    }
};

/* Naive Method
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> pivot;
        
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1; j<nums.size();j++)
                if (nums[i]+nums[j]== target){
                    pivot.push_back(i);
                    pivot.push_back(j);
                    return pivot;
                }
        }
        return pivot;      
    }
};
*/
