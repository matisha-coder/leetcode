class Solution {
public:
    int countWays(vector<vector<int>>& intervals) {
        int cnt = 1;
         sort(intervals.begin(),intervals.end(),
        [](const vector<int>& a , const vector<int>& b){
            return a[0] < b[0];
        });
        int start = intervals[0][0];
        int end = intervals[0][1];

        for(int i = 1 ; i < intervals.size() ; i++){
            if(intervals[i][0] <= end){
                end = max(end , intervals[i][1]);
            }
            else{
                cnt++;
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        const long long mod = 1e9+7;

        long long res = 1;
        
        for(int i = 0 ; i < cnt ; i++){
            res = (res*2)%mod;
        }
        return res;
    }
};