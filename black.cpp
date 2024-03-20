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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode zero = ListNode(0, head); // ListNode(val, next) : in case of returning empty list
        ListNode* ptr = zero;
        unordered_map<int, ListNode*> mp;
        int prefix = 0;
        for(ptr = zero; ptr != NULL; ptr = ptr->next){
            prefix += ptr->val;
            mp[prefix] = ptr;
        }
        prefix = 0;
        for(ptr = zero; ptr != NULL; ptr = ptr->next){
            prefix += ptr->val;
            ptr->next = mp[prefix]->next;
        }
        return zero->next;
    }
};