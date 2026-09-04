/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {

//         vector<ListNode*> visited;
//         ListNode* temp = head;


//         while(temp != NULL){

//             bool found = false;

//             for(ListNode* node : visited){
//             if(node == temp){
//                 found = true;
//                 break;
//             }
//             }
            
//             if(found){
//                 return true;  
//             }

//             visited.push_back(temp);
//             temp = temp->next;
//             }

//         return false;
//     }
// };










// BETTER APPROACH USING HASHSET

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         unordered_set<ListNode*> visited;

//         ListNode* temp = head;
//         while(temp != NULL){
//             if(visited.count(temp)){
//                 return true;
//             }
//             else {
//                 visited.insert(temp);
//                 temp = temp->next;
//             }
            
//         }
//         return false;
//     }


// };









// BEST Optimal Solution

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        // ListNode* temp = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow){
            return true;
        }
        
    }
    return false;
    }

};