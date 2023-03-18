// leet code problem Two sum array
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> p;

        for(int i=0;i<nums.size();i++)
        {
        int ser = target - nums[i];

        if(p.find(ser)!=p.end())
        {
            return {i,p[ser]};
        }
        p[nums[i]]=i;

        }
        return {-1,-1};
                
    }
};
