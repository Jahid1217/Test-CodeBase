#include<iostream>
using namespace std;

typedef class ListNode
{
    public:
        int data;
        ListNode *next;

        ListNode() {}
        ListNode(int value)
        {
            data=value;
            next=NULL;
        }
    } * nodePointer;

    nodePointer head = NULL ;

    nodePointer curr = NULL ;



    nodePointer createNode(int value)
    {
        return new ListNode (value);
    }

    void insertElements(int n)
    {
    cout<<"Insert Elements "<<n<<endl;
      for( int i=0 ; i < n ; i++ )
        {
                 int value;
            cin >> value;
            nodePointer newNode = createNode(value);
            newNode->next = NULL;
            if(head==NULL)
            {
                head = newNode;
            }
            else
            {
                curr->next = newNode;
            }
            curr = newNode;
        }
    }


    void insertAtFirst (int value)
    {
        nodePointer newNode = createNode(value);
        newNode->next = head;
        head = newNode;
    }


    void insertAtLast(int value)
    {
        nodePointer temp = head;
        if(head == NULL)
        {
            head = createNode(value);
            curr = head;
        }
        else
        {
            curr-> next = createNode(value);
            curr= curr->next;
        }
    }

    void insertBefore(int value, int n)
    {
        nodePointer newNode = createNode(value);
        nodePointer temp = head;
        while(temp->data != n && temp->next !=NULL)
            temp = temp->next;

        if(temp->data==n)
        {
            temp->data= value;
            newNode->next = temp->next;
            temp->next = newNode;
        }
        else
        cout<<" Not Found Insert Before";

    }
   void insertAfter (int value, int n)
    {
        nodePointer newNode = createNode(value);
        nodePointer temp = head;
        while(temp->data != n && temp->next !=NULL)
            temp = temp->next;
        if(temp->data==n)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
        else
            cout <<" Not Found Insert After ";
    }

    void deleteFirst()
    {
        nodePointer old =head;
        head = head->next;
        delete old;
    }

    void deleteLast()
    {
        nodePointer temp =head,curr;
        while(temp->next->next!=NULL)
        temp=temp->next;
        curr = temp->next;
        temp->next = NULL;
        delete(curr);

    }
    void deleteData(int p)
    {
        nodePointer temp =head,curr;
        while(temp->next->data != p && temp->next !=NULL)
        {
            temp= temp->next;
        }
        curr = temp->next;
        temp->next = temp->next->next;
        delete(curr);
    }
void display ()
    {
        nodePointer temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }


int main()
{
    insertElements(7);
    insertAtLast(6);
    insertAtLast(11);
    insertAtLast(33);
    insertAtLast(17);
    insertAtLast(44);
    insertAtLast(25);
    insertAtLast(46);
    insertAtLast(25);
    insertAtFirst(80);
    insertAfter(34,5);
    insertBefore(67,6);
    display();
    deleteFirst();
    deleteLast();
    deleteData(7);
    display();

    return 0;
}




