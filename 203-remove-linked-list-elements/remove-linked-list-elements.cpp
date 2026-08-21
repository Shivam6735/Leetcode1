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
// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         vector<int> arr;

//         // Store valid values
//         while (head != nullptr) {
//             if (head->val != val)
//                 arr.push_back(head->val);

//             head = head->next;
//         }

//         // Create new linked list
//         ListNode* dummy = new ListNode(-1);
//         ListNode* temp = dummy;

//         for (int x : arr) {
//             temp->next = new ListNode(x);
//             temp = temp->next;
//         }

//         return dummy->next;
//     }
// };








class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = dummy;

        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};

