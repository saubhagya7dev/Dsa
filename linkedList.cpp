#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    public: // this constructor was created so that we don't have to pass the next pointer every time we create a new node, since it will be nullptr by default
    Node(int data1){
        data = data1;
        next = nullptr;
    }
        
};

int main (){

    vector<int> v = {10,2,3,4,5};

    Node* y = new Node(v[0]);
    cout<<y->data<<endl; // prints the data of the first node, which is 10
    cout<<y<<endl; // prints the memory address of the first node, which is a pointer to the node object in memory
    
    return 0;

}
