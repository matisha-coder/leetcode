class ATM {
    private:

    // Denominations in increasing order
    vector<int> denomination = {20, 50, 100, 200, 500};

    // Number of notes available
    vector<long long> count = {0, 0, 0, 0, 0};
public:
    ATM() {
        
    }
    
    void deposit(vector<int> banknotesCount) {
         for (int i = 0; i < 5; i++)
        {
            count[i] += banknotesCount[i];
        }
    }
    
    vector<int> withdraw(int amount) {
         vector<long long> used(5, 0);

        // Try largest denomination first
        for (int i = 4; i >= 0; i--)
        {
            long long take =
                min(count[i],
                    (long long)amount / denomination[i]);

            used[i] = take;

            amount -= take * denomination[i];
        }

        // Exact amount cannot be formed
        if (amount != 0)
        {
            return {-1};
        }

        // Withdrawal successful
        for (int i = 0; i < 5; i++)
        {
            count[i] -= used[i];
        }

        // Convert to int vector
        vector<int> result;

        for (int i = 0; i < 5; i++)
        {
            result.push_back((int)used[i]);
        }

        return result;
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */