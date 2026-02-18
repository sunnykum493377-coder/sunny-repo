// ASSIGN VALUE TO LINKED-LIST AND ACCES IT
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// int main(){
//     Node* head=new Node();
//     Node* second=new Node();
//     Node* third=new Node();
//     //ASSIGN VALUE
//     head->data=34;
//     second->data=44;
//     third->data=10;
//     four->data=34;
//     head->next=second;
//     second->next=third;
//     third->next=NULL;

//     Node* temp=head;
//     while(temp !=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
// };
// int main(){
//     Node *first=new Node();
//     Node *second=new Node();

//     first->data=44;
//     second->data=89;

//     first->next=second;
//     second->next=NULL;

//     Node *temp=first;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }return 0;
// }

//INSERT ELEMENT AT STARTING INDEX
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };
// void insertAtHead(Node*& head, int val) {
//     Node* newNode = new Node(val);
//     newNode->next = head; 
//     head = newNode; }
// void printList(Node* head) {
//     while (head != NULL) {
//         cout << head->data << " ";
//         head = head->next;}   
// }
// int main() {
//     Node* head = NULL; 
//     insertAtHead(head, 30);
//     insertAtHead(head, 20);
//     insertAtHead(head, 10);
//     printList(head);
//     return 0;}


//INSERT AT TAIL
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;}  
};
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode; 
        return;}
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
int main() {
    Node* head = NULL;
    insertAtTail(head, 78);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    printList(head);
    return 0;
}
