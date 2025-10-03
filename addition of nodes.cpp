//Joy Thakkar
//PRN:24070123051
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    
    // constructor
    Node(int data){
        val = data;
        next = NULL;
    }
};
int main (){
    //Cate 3 nodes
    Node*n1 = new Node(10);
    Node*n2 = new Node(20);
    Node*n3 = new Node(30);
    
    //link nodes together
    n1->next = n2; //1->2
    n2->next = n3;
    n3->next = NULL;
    
    //print linked list
    Node*temp = n1;
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return 0;
}

/* output 
10 20 30
*/
