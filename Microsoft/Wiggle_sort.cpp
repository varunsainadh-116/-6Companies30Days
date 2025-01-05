class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        int endIndex = n - 1; 

        sort(nums.begin(), nums.end()); 

        vector<int> temp(n); 

        for (int i = 1; i < n; i += 2) {
            temp[i] = nums[endIndex--];
        }
        
        for (int i = 0; i < n; i += 2) {
            temp[i] = nums[endIndex--];
        }

        nums = move(temp);
    }
};

// Time complexity: O(nlogn)
// Space complexity: O(n)
