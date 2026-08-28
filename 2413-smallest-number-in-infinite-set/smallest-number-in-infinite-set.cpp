class SmallestInfiniteSet
{
    private:
        int next;

        // Stores numbers that were added back
        priority_queue<int, vector<int>, greater<int>> minHeap;

        // Prevent duplicate numbers in heap
        unordered_set<int> addedBack;

    public:

        SmallestInfiniteSet()
    {
        next = 1;
    }

    int popSmallest()
    {
        // If we have numbers that were added back
        if (!minHeap.empty())
        {
            int smallest = minHeap.top();

            minHeap.pop();

            addedBack.erase(smallest);

            return smallest;
        }

        // Otherwise use the next untouched number
        return next++;
    }
    
    void addBack(int num) {
         if (num < next && addedBack.find(num) == addedBack.end())
        {
            minHeap.push(num);

            addedBack.insert(num);
        }
        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */