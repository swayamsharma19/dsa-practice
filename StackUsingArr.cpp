class myStack
{
    int capacity;
    int *arr; // FIX: pointer banana padega
    int top;

public:
    myStack(int n)
    {
        arr = new int[n];
        capacity = n;
        top = -1;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }

    bool isFull()
    {
        if (top == capacity - 1)
        {
            return true;
        }
        return false;
    }

    void push(int x)
    {
        if (!isFull())
        {
            top++;
            arr[top] = x;
        }
    }

    void pop()
    {
        if (!isEmpty())
        {
            top--;
        }
    }

    int peek()
    {
        if (isEmpty())
        {
            return -1;
        }
        return arr[top];
    }
};