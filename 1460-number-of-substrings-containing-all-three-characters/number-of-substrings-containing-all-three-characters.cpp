class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int freq[3]={0};
        int l =0, count = 0;
        for(int r =0;r<n;r++)
        {
            freq[s[r] - 'a']++;
            while(freq[0]>=1 && freq[1]>=1 && freq[2]>=1)
            {
                count += n-r;
                freq[s[l]-'a']--;
                l++;
            }
        }

        return count;
    }
};