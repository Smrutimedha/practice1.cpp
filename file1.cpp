#include<iostream>
using namespace std;
class node{
public:
int data;
node*next;
};
class linkedlist
{
private:
node*head;
node*tail;
public:
linkedlist()
{
head=NULL;
tail=NULL;
}
void reversell()
{
node *p, *c, *n; //p=previous node,c=current node,n= next node
p=NULL;
c=head;
while(c!=NULL)
{

n=c->next;

c->next=p;

p=c;
c=n;
 
}
head=p;

}

};
int main(){
int data;
linkedlist obj;
cout<<"enter elements of the linked list"<<"\n";
cin>>data;

obj.reversell();
return 0;
}
