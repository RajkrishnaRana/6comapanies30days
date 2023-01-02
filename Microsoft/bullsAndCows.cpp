class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        vector<int> s(10, 0);
        vector<int> g(10, 0);

        int n = secret.size();

        for (int i = 0; i < n; i ++) {
            if (secret[i] == guess[i]) bulls++;
            else {
                s[secret[i] - '0'] ++;
                g[guess[i] - '0'] ++;
            }
        }

        for (int i = 0; i < s.size(); i ++) {
            cows += min(s[i], g[i]);
        }

        string ans = "";

        ans += to_string(bulls);
        ans += 'A';
        ans += to_string(cows);
        ans += 'B';

        return ans;
    }
};
