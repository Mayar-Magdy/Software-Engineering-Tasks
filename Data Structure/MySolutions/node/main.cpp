#include <iostream>
using namespace std;
struct node
{
    int data;
    node* pNext; //to point next node
    node* pPrev; //to point previous
};
node *pHead=NULL;
node *pTail=NULL;
node* create_node(int _data)
{
    node *ptr = new node;
    if(ptr!=nullptr)
    {
        ptr->data=_data;
        ptr->pNext=NULL;
        ptr->pPrev=NULL;
    }
    return ptr;
}
int add(int _data)
{
    int retVal=0;
    node *ptr;
    ptr = create_node(_data);
    if(ptr!=nullptr)
    {

        if(pHead==pTail)  //one node || no node yet=null
        {
            retVal=1;
            if(pHead==NULL)
            {
                pHead=pTail=ptr;
            }
            else    //more than one
            {
                pTail->pNext=ptr;
                ptr->pPrev=pTail;
                pTail=ptr;
            }

        }
        else    //more than one
        {
            pTail->pNext=ptr;
            ptr->pPrev=pTail;
            pTail=ptr;
        }


    }

    return retVal;
}
void insert_node(int _data, int _pos)
{
    node *ptr;
    node *temp=pHead;
    ptr = create_node(_data);
    for(int i=0; i<_pos; ++i) //0
    {
        if(temp->pNext==NULL) break;
        temp =temp->pNext ;
    }
    if(temp->pNext==NULL)
        add(_data);
    else
    {
        ptr->pNext=temp;
        ptr->pPrev=temp->pPrev;

        if(temp->pPrev==NULL)
        {
            temp->pPrev=ptr;
            pHead=ptr;
        }
        else
        {
            temp->pPrev->pNext=ptr;
            temp->pPrev=ptr;
        }
    }
}
void print_linked_list()
{
    node *i=pHead;
    for(;;)
    {
        cout<<i->data<<" ";
        if(i->pNext==NULL) break;
        i=i->pNext;
    }
    cout<<"\n";
}
void delete_node(int _pos)
{
    node *temp =pHead;
    for(int i=0; i<_pos; ++i)
    {
        temp=temp->pNext;
    }
    if(temp->pPrev==NULL)
        pHead=pHead->pNext;
    else temp->pPrev->pNext = temp->pNext;
    if(temp->pNext==NULL)
        pTail=temp->pPrev;
    else
        temp->pNext->pPrev =  temp->pPrev;
    delete temp;
    // temp=temp->pNext;

}
int main()
{
    // to create node u simply need 3 things one to save data - two point to next - three point to pervious so i will do it by struct.
    cout<<"---------------test-create--------------------\n";
    node*n1=create_node(1);
    cout<<n1->data<<" "<<n1->pPrev<<" "<<n1->pNext<<"\n";
    cout<<"---------------test-add------------------------\n";
    add(7); //712
    add(1);
    add(2);
    print_linked_list() ;
    cout<<"---------------test-insert----------------------\n";
    insert_node(9,0); //0
    insert_node(8,4);//size-1
    insert_node(3,2);//mid
    print_linked_list();
    cout<<"---------------test-delete-cases-------------------\n";
    cout<<"1) Delete First : ";
    delete_node(0);
    print_linked_list();
    cout<<"2) Delete Mid   : ";
    delete_node(2);
    print_linked_list();
    cout<<"3) Delete Last  : ";
    delete_node(3);
    print_linked_list();
    cout<<"---------------test add after delete-----------------\n";
    add(9);
    print_linked_list();
    cout<<"---------------test insert after delete---------------\n";

    cout<<"1) insert first   : ";
    insert_node(4,0);
    print_linked_list();

    cout<<"2) insert mid     : ";
    insert_node(6,2);
    print_linked_list();
    cout<<"--------------- Finish (: --------------------";






    return 0;
}
