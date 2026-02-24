#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    public:
    Node(int data1,Node* next1){
        this->data = data1;
        this->next = next1;
    }
        
};



int main (){

    vector<int> v = {10,2,3,4,5};

    Node* y = new Node(v[0],nullptr);
    cout<<y->data<<endl;
    cout<<y<<endl;
    
    return 0;

}
