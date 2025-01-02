class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int median = nums[nums.size() / 2];

        int cnt = 0;
        for(auto i : nums){
            cnt += abs(i - median);
        }
        return cnt;
    }
};

// Time Complexity: O(nlogn)
// Space Complexity: O(1)