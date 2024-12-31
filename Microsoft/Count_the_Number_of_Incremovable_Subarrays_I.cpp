class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int n  = nums.size(), count = 0;
        for(int i = 0; i<n; i++){
            for(int j = i; j<n; j++){
                if(incremovable(nums, i , j)) ++count;
            }
        }
        return count;
    }
    bool incremovable(vector<int>& nums, int start, int end){
        int n = nums.size(), prev = 0;
        for(int i = 0; i<n; i++){
            if(i<= end  && i>= start) continue;
            if(nums[i] <= prev) return false;
            prev = nums[i];
        }
        return true;
    }
}
// Time Complexity: O(n^3)
// Space Complexity: O(1)