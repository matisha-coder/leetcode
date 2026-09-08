class Solution {
public:
    int characterReplacement(string s, int k) {

        int freq[26] = {0};

        int l = 0;
        int maxFreq = 0;
        int ans = 0;

        for(int r = 0; r < s.size(); r++)
        {
            // Add current character
            freq[s[r] - 'A']++;

            // Maximum frequency in current window
            maxFreq = max(maxFreq, freq[s[r] - 'A']);

            // Invalid window
            while((r - l + 1) - maxFreq > k)
            {
                freq[s[l] - 'A']--;
                l++;
            }

            // Valid window
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};