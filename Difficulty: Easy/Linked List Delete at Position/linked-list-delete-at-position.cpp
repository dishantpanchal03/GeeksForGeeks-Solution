/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        
        if(x == 1){
            return head->next;
        }
        
        if(head->next == NULL){
            return NULL;
        }
        
        Node* curr = head;
        int n = 1;
        while(n < x-1){
            curr = curr->next;
            n++;
        }
        curr->next = curr->next->next;
        
        return head;
    }
};