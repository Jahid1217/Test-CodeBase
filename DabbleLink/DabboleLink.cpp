#include<iostream>
using namespace std;

typedef class Node
{
public:
        int data=0;
        Node *next=NULL;
        Node *prev=NULL;
        Node(){}
        Node(int value)
        {
            data=value;
            }
    } * Pointer;

    Pointer head = NULL;
    Pointer tail = NULL;

Pointer createNode(int value)
{
    return new Node(value);

}
void InsertAtLast(int value)
    {
        if(head == NULL)
        {
            head = createNode(value);
            tail = head;
        }
        else
        {
            tail-> next = createNode(value);
            tail->next->prev=tail;
            tail=tail->next;
        }
    }
 void InsertAtFirst (int value)
    {
        Pointer tempNode = createNode(value);
        head->prev=tempNode;
        tempNode->next=head;
        head=tempNode;
    }

   void showElement(Pointer temp)
   {
       if(temp!=NULL)
       {
           cout<<temp->data<<" ";
           showElement(temp->next);
       }
   }

    void show()
    {
        Pointer temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void showReverse()
    {
        Pointer temp=tail;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
    void deleteLast()
    {
        if(tail!=NULL)
        {
            Pointer temp=tail;
            tail=tail->prev;
            tail->next=NULL;
            delete(temp);
        }
    }

    void deleteFirst() {
      if(head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
        if(head != NULL)
          head->prev = NULL;
      }
    }

    void deleteValue(int value,bool occ)
    {
        Pointer temp=head->next;
        if(head!=NULL && tail!=NULL)
        {
            if(head->data==value)
            {
                deleteFirst();
            }
            else if(tail->data==value)
            {
                deleteLast();
            }
            else{
                while(temp->next!=NULL)
                {
                    if(temp->data==value)
                    {
                        Pointer nextNode=temp->next;
                        Pointer prevNode=temp->prev;
                        nextNode->prev=temp->prev;
                        nextNode->next=temp->next;
                        if(!occ)break;
                    }
                    temp=temp->next;
                }
            }
        }
    }


    int main()
    {
        InsertAtLast(7);
        InsertAtLast(20);
        InsertAtLast(15);
        InsertAtLast(15);
        InsertAtFirst(-10);
        show();
        howReverse();

        deleteLast();
        deleteFirst();

        deleteValue(15,false);
        deleteValue(13,false);
        deleteValue(7,false);
        showElement(head);
        cout<<endl;
        return 0;

    }
