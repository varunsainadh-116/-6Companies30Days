class Solution {
public:
    string getHint(string secret, string guess) {
        // Better
        int bull = 0, cnt = 0;
        vector<int> frq(10, 0);
        for(int i = 0; i<secret.size(); i++){
            if(secret[i] == guess[i]) ++bull;
            else{
                frq[secret[i] - '0']++;
                frq[guess[i] - '0']--;
            }
        }
        for(auto &i : frq){
            if(i > 0) cnt += i;
        }
        return to_string(bull) + 'A' + to_string(secret.size() - bull - cnt) + 'B';

    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)