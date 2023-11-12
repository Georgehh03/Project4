#ifndef EVENSTACK_H
#define EVENSTACK_H

#include <stack>

using namespace std;

class EvenStack
{
    public:
        EvenStack();

    bool empty() const;

    int size() const;
    int top() const;

    void push(int value);
    void pop();
    void getEvenNumbers(stack<int>& inputStack);
    void emptyStack();

    protected:

    private:
        stack<int> stack;
};

#endif // EVENSTACK_H
