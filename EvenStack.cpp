#include "EvenStack.h"
#include <stack>
#include <iostream>

using namespace std;

bool EvenStack::empty() const
{
    return stack.empty();
}

int EvenStack::size() const
{
    return stack.size();
}

int EvenStack::top() const
{
    return stack.top();
}

void EvenStack::push(int value)
{
    if (value % 2 == 0)
        {
        stack.push(value);
        }
    else
        {
        cerr << "Error - can only push even numbers Removing the following: ";
        while (!stack.empty())
        {
            cerr << stack.top() << " ";
            stack.pop();
        }
            cerr << endl;
        }
}

void EvenStack::pop()
{
    stack.pop();
}

void EvenStack::getEvenNumbers(stack<int>& inputStack)
{
    stack<int> tempStack;

    while (!inputStack.empty())
    {
        int value = inputStack.top();
        inputStack.pop();
        if (value % 2 == 0)
        {
            stack.push(value);
        }
        tempStack.push(value);
    }


    while (!tempStack.empty())
    {
        inputStack.push(tempStack.top());
        tempStack.pop();
    }
}

void EvenStack::emptyStack()
{
    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;
}
