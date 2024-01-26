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
    ListNode* insertionSortList(ListNode* head)
    {
        vector<int> v;
        ListNode* ptr = head;
        ListNode* hd = head;

        while(head!=NULL){
            v.push_back(head->val);
            head = head->next;
        }

        sort(v.begin(),v.end());
        int i = 0;

        while(ptr!=NULL)
        {
            ptr->val = v[i];
            i++;
            ptr = ptr->next;
        }
        return hd;
    }
};