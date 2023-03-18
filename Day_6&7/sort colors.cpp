// leet code problem of sorted an array

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // let's solve this question using 3 pointer approach
         int n = nums.size(),l,m,h;
        l=m= 0 ;
        h = n-1;
        while(m<=h)
        {
            if(nums[m]==0){
                swap(nums[m],nums[l]) ;
                l++;
                m++;
            }
            else if(nums[m]==1){
                m++;
            }
            else if(nums[m]==2){
                swap(nums[m],nums[h]);
                h--;
            }
        }
    }
};
