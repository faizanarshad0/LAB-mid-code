#include<iostream>
using namespace std;  
class Node{

        	
    public: 
    int data;  
    Node *next; 
	void add(int);
	void display();
	void sorting();
    };
   int count=0;   
   Node*head=NULL;  
   Node*tail=NULL;    
void Node::add(int data){   
    Node*newNode=new Node;  
    newNode->data=data;   
    if(head==NULL){  
        head=newNode;  
        tail=newNode;  
        newNode->next=head;  
    }else {   
        tail->next=newNode;   
        tail =newNode;  
        tail->next=head;  
    }  
}  
void Node::display(){  
     Node*current=head;  
    if(head == NULL){  
    cout<<"List is empty"<<endl;  
    }  
    else{  
         do{  
            cout<< current->data;  
            current = current->next;  
        }while(current!=head);  
        cout<<"\n"<<endl;  
    }  
}
void Node::sorting(){
      Node*current=head, *index=NULL;  
     int temp;  
    if(head == NULL) {  
    cout<<"List is Empty"<<endl;  
  }  
   else {  
   do{    
      index=current->next;  
    while(index!=head) {  
     if(current->data>index->data) {  
     temp=current->data;  
     current->data=index->data;  
    index->data=temp;  
 }  
   index=index->next;  
 }  
   current=current->next;  
     } 
	 while(current->next!=head);   
  }  
 }  
int main()  
{  
  Node obj;
    obj.add(13);
    obj.add(11);  
    obj.add(24);  
    obj.add(13);  
    obj.add(40); 
	obj.add(52);
	obj.add(16);
	obj.add(17);
	obj.add(82);
	cout<<" List Values are:"<<endl;
	obj.display();
	cout<<" After Sorting"<<endl;
	obj.sorting();
	obj.display();
	return 0;
}

