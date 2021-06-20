#include "IStack.h"
#include "Node.h"

template<typename T>
class LinkedListStack : public IStack<T>
{
public:
    void Push(T item) override
    {
        auto new_node = new Node<T>();
        new_node->item = item;
        new_node->next = firstNode;
        firstNode = new_node;
    }

    T Pop() override
    {
        auto popped_item = firstNode->item;
        firstNode = firstNode->next;
        return popped_item;
    }

    bool IsEmpty() override
    {
        return firstNode == nullptr;
    }

    int Size() override
    {
        int count = 0;
        Node<int>* current_node = firstNode;
        while(current_node != nullptr)
        {
            count++;
            current_node = current_node->next;
        }
        return count;
    }

private:
    Node<T>* firstNode = nullptr;
};
