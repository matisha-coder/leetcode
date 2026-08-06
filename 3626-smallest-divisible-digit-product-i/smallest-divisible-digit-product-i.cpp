class Solution {
public:
    int smallestNumber(int n, int t) {
        
        int digit;
        int k;
        while(n)
        {
            k=n;
            int product =1;
            while(k>0)
            {
                digit=k%10;
            k=k/10;
            product = product * digit;
            }
            if(product%t==0)
            return n;
            else
            n++;
        }
       return n; 
    }
};