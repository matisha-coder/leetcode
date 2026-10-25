class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        using T = pair<int, ListNode*>;

        auto cmp = [](const T& a, const T& b) {
            return a.first > b.first;
        };

        priority_queue<T, vector<T>, decltype(cmp)> pq(cmp);

        for (ListNode* node : lists) {
            if (node)
                pq.push({node->val, node});
        }

        ListNode dummy(0);
        ListNode* curr = &dummy;

        while (!pq.empty()) {
            auto [value, node] = pq.top();
            pq.pop();

            curr->next = new ListNode(value);
            curr = curr->next;

            if (node->next)
                pq.push({node->next->val, node->next});
        }

        return dummy.next;
    }
};