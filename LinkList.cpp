#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;
    Node *tail;
    int length;

public:
    LinkedList(int val)
    {
        Node *newNode = new Node(val);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    ~LinkedList()
    {
        Node *temp;
        while (head)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    void preppend(int val)
    {
        Node *newHead = new Node(val);
        if (length == 0)
        {
            head = newHead;
            tail = newHead;
        }
        else
        {
            newHead->next = head;
            head = newHead;
        }
        length++;
    }

    void append(int val)
    {
        Node *newTail = new Node(val);
        if (length == 0)
        {
            head = newTail;
            tail = newTail;
        }
        else
        {
            tail->next = newTail;
            tail = newTail;
        }
        length++;
    }

    void printList()
    {
        Node *ptr = head;
        while (ptr)
        {
            cout << ptr->val << endl;
            ptr = ptr->next;
        }
    }

    void getData()
    {
    if (head)
        {
    // cout << "Head: "  << "\n";
            // cout << "Tail: " << tail->val << "\n";
            // cout << "Length: " << length << "\n";
        }
        else
        {
            cout << "List is empty\n";
        }
    }
};

int main()
{
    LinkedList *ll = new LinkedList(6);
    ll->append(2);
    ll->preppend(0);
    ll->printList();
    ll->getData();
    ll->printList();
    delete ll;
    return 0;
}