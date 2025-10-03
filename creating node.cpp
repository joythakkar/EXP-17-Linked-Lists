#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    
    // constructor to initialise
    
    Node(int data){
        val = data;
        next = NULL;
    }
};
int main (){
    Node*n = new Node(10);
    cout<<<<n->val<<" "<<n->next<<endl;
    return 0;
}

/* output 
10 0 
*/
