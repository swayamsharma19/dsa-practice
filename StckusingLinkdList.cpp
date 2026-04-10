class myStack
{
private:
    int cnt;
    Node *top;

public:
    myStack()
    {
        top = NULL;
        cnt = 0;
    }

    bool isEmpty()
    {
        return (cnt == 0);
    }

    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = top;
        top = temp;
        cnt++;
    }

    void pop()
    {
        if (isEmpty())
        {
            return;
        }
        Node *temp = top;
        top = top->next;
        cnt--;
        delete temp;
    }

    int peek()
    {
        if (isEmpty())
        {
            return -1;
        }
        return top->data;
    }

    int size()
    {
        return cnt;
    }
};