#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
Node *insertAtHead(Node *head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    return newNode;
}
Node *insertAtTail(Node *head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        return newNode;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
Node *deleteAtIndex(Node *head, int index)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node *temp = head;
    for (int i = 0; i < index - 1 && temp != NULL; i)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        return head;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
    return head;
}
void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    int Q;
    cin >> Q;
    Node *head = NULL;
    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            head = insertAtHead(head, V);
        }
        else if (X == 1)
        {
            head = insertAtTail(head, V);
        }
        else if (X == 2)
        {
            head = deleteAtIndex(head, V);
        }
        printLinkedList(head);
    }
    return 0;
}
