/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* Reverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr != NULL)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* secondhalf = Reverse(slow);
        int ans = 0;
        ListNode* firsthalf = head;
        while(secondhalf != NULL)
        {
            int sum = firsthalf->val + secondhalf->val;
            ans = max(ans,sum);
            firsthalf = firsthalf->next;
            secondhalf = secondhalf->next;
        }
        return ans;
    }
};