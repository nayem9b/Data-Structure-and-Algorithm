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
int findIndex(Node *head, int target)
{
    int index = 0;
    while (head != NULL)
    {
        if (head->val == target)
        {
            return index;
        }
        head = head->next;
        index++;
    }
    return -1;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int value;
        while (true)
        {
            cin >> value;
            if (value == -1)
            {
                break;
            }
            Node *newNode = new Node(value);
            if (head == NULL)
            {
                head = tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }
        int X;
        cin >> X;
        int index = findIndex(head, X);
        cout << index << endl;
        while (head != NULL)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    return 0;
}
