#include "IStack.h"
#include "Node.h"

template<typename T>
class LinkedListStack : public IStack<T> {
public:
    void Push(T item) override
    {
        return;
    }

    T Pop() override
    {
        return firstNode->item;
    }

    bool IsEmpty() override
    {
        return firstNode == nullptr;
    }

    int Size() override
    {
        return 0;
    }

private:
    Node<T>* firstNode = nullptr;
};
