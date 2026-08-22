// class MyLinkedList {
// public:
//     struct Node{
//         int val;
//         Node* next;

//         Node(int value){
//             val = value;
//             next = nullptr;
//         }
//     };

//     Node* dummy;
//     int size;

//     public:

//     MyLinkedList(){
//         dummy = new Node(0);
//         size =0;
//     }

    
//     int get(int index) {
//         if(index<0 || index >= size){
//             return -1;
//         }

//         Node* curr = dummy->next;

//         for(int i=0; i<index; i++){
//             curr = curr->next;
//         }
//         return curr->val;
//     }

    
//     void addAtHead(int val) {
//         Node* newNode = new Node(val);

//         newNode->next = dummy->next;
//         dummy->next = newNode;

//         size++;
//     }
    
//     void addAtTail(int val) {
//         Node* newNode = new Node(val);
//         Node* curr = dummy;

//         while(curr->next != nullptr){
//             curr = curr->next;
//         }
//         curr->next = newNode;

//         size++;
//     }
    
//     void addAtIndex(int index, int val) {
//         if(index < 0|| index > size){
//             return;
//         }

//         Node* curr = dummy;
//         for(int i=0; i<index; i++){
//             curr = curr->next;
//         }
//         Node* newNode = new Node(val);
//         newNode->next = curr->next;
//         curr->next = newNode;

//         size++;
//     }
    
//     void deleteAtIndex(int index) {
//         if(index<0 || index>=size){
//             return;
//         }

//         Node* curr = dummy;

//         for(int i=0; i<index; i++){
//             curr = curr->next;
//         }

//         Node* deleteNode = curr->next;

//         curr->next = curr->next->next;
//         delete deleteNode;
//         size--;
//     }
// };






// OPTIMAL SOLUTION

class MyLinkedList {
private:

    struct Node {
        int val;
        Node* next;

        Node(int value) {
            val = value;
            next = nullptr;
        }
    };

    Node* dummy;
    Node* tail;
    int size;

public:

    MyLinkedList() {
        dummy = new Node(0);
        tail = dummy;
        size = 0;
    }

    int get(int index) {

        if(index < 0 || index >= size)
            return -1;

        Node* curr = dummy->next;

        for(int i = 0; i < index; i++) {
            curr = curr->next;
        }

        return curr->val;
    }

    void addAtHead(int val) {

        Node* newNode = new Node(val);

        newNode->next = dummy->next;
        dummy->next = newNode;

        if(size == 0)
            tail = newNode;

        size++;
    }

    void addAtTail(int val) {

        Node* newNode = new Node(val);

        tail->next = newNode;
        tail = newNode;

        size++;
    }

    void addAtIndex(int index, int val) {

        if(index < 0 || index > size)
            return;

        if(index == size) {
            addAtTail(val);
            return;
        }

        Node* curr = dummy;

        for(int i = 0; i < index; i++) {
            curr = curr->next;
        }

        Node* newNode = new Node(val);

        newNode->next = curr->next;
        curr->next = newNode;

        size++;
    }

    void deleteAtIndex(int index) {

        if(index < 0 || index >= size)
            return;

        Node* curr = dummy;

        for(int i = 0; i < index; i++) {
            curr = curr->next;
        }

        Node* deleteNode = curr->next;
        curr->next = deleteNode->next;

        if(index == size - 1)
            tail = curr;

        delete deleteNode;
        size--;
    }
};



/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */