#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* buildList(string str) {
    if (str.empty()) return NULL;
    
    Node* head = NULL;
    Node* tail = NULL;
    stringstream ss(str);
    int num;
    
    while (ss >> num) {
        Node* newNode = new Node();
        newNode->data = num;
        newNode->next = NULL;
        
        if (head == NULL) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        tail = newNode;
    }
    
    return head;
}

class Solution {
  public:
    int getMiddle(Node* head) {
        Node*slow=head;
        
        Node*fast=head;

        
        while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        }
        return slow->data;
        
    }
};

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string str, ch;
        getline(cin, str);
        Node* head = buildList(str);
        Solution ob;
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}