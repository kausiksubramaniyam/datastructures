/*Function for binary search!*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i,c=-1;
        for(i=0;i<nums.size();i++){
            if(nums[i]==target){
                c=i;
            }
        }
        return c; 
    }
};
