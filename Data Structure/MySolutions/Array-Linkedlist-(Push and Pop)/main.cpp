#include <iostream>
using namespace std;
int tos=-1;
int top =-1;
int n=10;
int arr[100];
struct node
{
    int data;
    node* pPrev; //to point previous
};
node *pTail=NULL;
node* create_node(int _data)
{
    node *ptr = new node;
    if(ptr!=nullptr)
    {
        ptr->data=_data;
        ptr->pPrev=NULL;
    }
    return ptr;
}


void push_linkedlist(int _val)
{
    node *p=create_node(_val);
    if(pTail==NULL)
      pTail=p;
    else{
        p->pPrev=pTail;
        pTail=p;
    }
}
void pop_linkedlist()
{
    if(pTail!=NULL)
    {
        node *temp=pTail;
        pTail=pTail->pPrev;
        free(temp);
    }
}
void print_linked_list()
{
    node *i=pTail;
    for(;;)
    {
        cout<<i->data<<"\n";
        if(i->pPrev==NULL) break;
        i=i->pPrev;
    }
    cout<<"\n";
}

void push_arr(int _val, int sz)
{
    if(tos<sz)
        arr[++tos]=_val;
}
void pop_arr()
{
    if(tos>-1)
        --tos;
}
void print_arr()
{
    for(int i=tos ; i>=0; --i)
    {
        cout<<arr[i]<<"\n";
    }
    cout<<"\n";
}
int main()
{
    // cin>>n;
    cout<<"--------------------Test-Push-on-array---------------------\n";
    push_arr(3,n);
    push_arr(5,n);
    push_arr(9,n);
    print_arr();
    cout<<"--------------------Test-Pop-on-array--------------------\n";
    pop_arr();
    print_arr();
    cout<<"--------------------Test-Push-on-linkedlist---------------------\n";
    push_linkedlist(2);
    push_linkedlist(4);
    push_linkedlist(6);


    print_linked_list();
    cout<<"--------------------Test-Pop-on-linkedlist---------------------\n";
    pop_linkedlist();
    print_linked_list();




}
