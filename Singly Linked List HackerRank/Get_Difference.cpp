#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    };
};

int findDifference(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    while (head != NULL)
    {
        minVal = min(minVal, head->val);
        maxVal = max(maxVal, head->val);
        head = head->next;
    }
    return maxVal - minVal;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        Node *newNode = new Node(val);
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
    int difference = findDifference(head);
    cout << difference << endl;
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
