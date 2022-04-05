// !!!
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
};
node* push_empty(node* last,int data)
{
	node* temp=new node();
	temp->data=data;
	if(last!=NULL)
	{
		return last;
	}
	if(last==NULL)
	{
		last=temp;
		temp->next=last;
	}
	return last;
}
node* push_beg(node* last,int data)
{
	node* temp=new node();
	temp->data=data;
	if(last==NULL)
	{
		last=push_empty(last,data);
		return last;
	}
	temp->next=last->next;
	last->next=temp;
	return last;
}
node* push_last(node* last,int data)
{
	node* temp=new node();
	temp->data=data;
	temp->next=last->next;
	last->next=temp;
	last=temp;
	return last;
}
node* push_btw(node* last,int data)
{
	node* temp=new node();
	temp->data=data;
	last->next->next=temp;
	temp->next=last;
	return last;
	
}
void print(node* last)
{
	node* p;
	p=last->next;
	cout<<endl;
	do{
		cout<<"\t"<<p->data;
		p=p->next;
	}while(p!=last->next);
}
node* pop_last(node* last)
{
	node* index=last;
	while(index->next!=last)
	{  
	   index=index->next;	
	}
	index->next=last->next;
	delete last;
	last=index;
	return last;
}
node* pop_beg(node* last)
{
	node* index;
	index=last->next;
	last->next=index->next;
	delete index;
	return last;
	
}
node* pop_pos(node* last,int pos)
{
	node* index;
	node* temp;
	index=last;
	while(index->next!=last&&pos>0)
	{
		index=index->next;
		pos--;
	}
	temp=index->next;
	index->next=index->next->next;
	delete temp;
	return last;
	
}
void sort(node* last)
{
	node* p;
	node* q;
	p=last->next;
	while(p->next!=last->next)
	{
	q=p->next;
	while(q!=last->next)
	{ 
	
		if(p->data>q->data)
		{   
			int temp=p->data;
			p->data=q->data;
			q->data=temp;
		}
		q=q->next;
		}
		p=p->next;	
	}
	
	
}

	

int main()
{
	node* last=NULL;
	last=push_empty(last,2);
	last=push_beg(last,20);
	last=push_btw(last,30);
	last=push_last(last,40);
	last=push_last(last,50);
		last=push_last(last,5);
		last=push_last(last,15);
		last=push_last(last,10);
		last=pop_pos(last,3);
		sort(last);
	
	print(last);
	
}
