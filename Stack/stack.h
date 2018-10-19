//stack
#include"node.h"
class stack
{
private: 
        node* head;
        int count;	
public:
	stack(){
		head=NULL;
		count=0;
	}
	void push(int data){
         node* n=new node(data);
         n->next=head;
         head=n;
         count++;
	}
	void pop(){
		if(head==NULL){
			cout<<"Empty Stack";
		}
		else{
		node* temp=head;
		head=head->next;
		delete temp;
	    count--;
	    }
    }

    int top(){
    	return head->data;
    }

    bool isEmpty(){
    	return count==0;
    }

    int size(){
    	return count;
    }
		
};