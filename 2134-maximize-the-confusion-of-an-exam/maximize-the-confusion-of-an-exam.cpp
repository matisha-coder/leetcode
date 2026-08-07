class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {

        int l = 0, r = 0;
        int ct = 0, cf = 0;
        int n = answerKey.size();
        int ans = 0;

        while (r < n) {

            if (answerKey[r] == 'T')
                ct++;
            else
                cf++;

            while (min(ct, cf) > k) {

                if (answerKey[l] == 'T')
                    ct--;
                else
                    cf--;

                l++;
            }

            ans = max(ans, r - l + 1);

            r++;
        }

        return ans;
    }
};