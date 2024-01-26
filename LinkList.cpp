#include <iostream>

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
        this->head = newNode;
        this->tail = newNode;
        this->length = 1;
    }

    ~LinkedList() {
        Node *temp = head;
        while(head) {
            head = head->next;
            delete  temp;
            temp = head;
            
        }
    }

    void printList()
    {
        using namespace std;
        ;
        Node *ptr = head;
        while (ptr)
        {
            cout << ptr->val << endl;
            ptr = ptr->next;
        }
    }

    void getData() {
        using namespace std;;
        cout << head->val << "\n"<< tail->val << "\n" << length << endl;
    }
};


int main() {
    LinkedList* ll = new LinkedList(6);

    ll->getData();
}