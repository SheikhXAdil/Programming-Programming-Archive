#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class MinStack
{
private:
    stack<int> intStack, minNumStack;

public:
    MinStack()
    {
    }

    void push(int val)
    {
        if (this->intStack.empty())
        {
            minNumStack.push(val);
        }
        else if (val <= this->minNumStack.top())
        {
            minNumStack.push(val);
        }

        this->intStack.push(val);
    }

    void pop()
    {
        if (!this->minNumStack.empty() && this->intStack.top() == this->minNumStack.top())
        {
            this->minNumStack.pop();
            this->intStack.pop();
        }
        else
        {
            this->intStack.pop();
        }
    }

    int top()
    {
        return this->intStack.top();
    }

    int getMin()
    {
        return this->minNumStack.top();
    }
};

int main()
{

    MinStack minStack;

    minStack.push(1);
    minStack.push(2);
    minStack.push(0);
    minStack.getMin(); // return 0
    minStack.pop();
    minStack.top();    // return 2
    minStack.getMin(); // return 1

    return 0;
}