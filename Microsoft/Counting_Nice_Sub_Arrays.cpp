class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> frq(n + 1, 0);
        frq[0] = 1;
        int ans = 0, cnt = 0;
        for(auto &i : nums){
            cnt += (i%2);
            if(cnt - k >= 0){
                ans += frq[cnt - k];
            }
            frq[cnt]++;
        }
        return ans;
    }
};

// time complexity: O(n)
// space complexity: O(n)