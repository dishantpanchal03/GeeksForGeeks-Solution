/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertPos(Node* head, int pos, int val) {
        // code here
        if(pos == 1){
            Node* curr = new Node(val);
            curr->next = head;
            return curr;
        }
        else{
            Node* curr = head;
            int n = 1;
            while(n < pos-1){
                curr = curr->next;
                n++;
            }
            if(curr->next == NULL){
            curr->next = new Node(val);
            }
            else{
                Node* temp = curr->next;
                curr->next = new Node(val);
                curr = curr->next;
                curr->next = temp;
            }
        }
        return head;
    }
};