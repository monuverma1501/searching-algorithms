///34. Find First and Last Position of Element in Sorted Array
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/



class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>::iterator lower, upper;
        lower=lower_bound(nums.begin(),nums.end(),target);
        upper=upper_bound(nums.begin(),nums.end(),target);
        vector<int> res(2,-1);
             int first=(lower-nums.begin());
             int second=(upper-nums.begin()-1);
            if(first>=0&&second>=0&&first<=second)
            {
                res[0]=first;
                res[1]=second;
            }
        return res;
        }
};
