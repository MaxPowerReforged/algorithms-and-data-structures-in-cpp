#include "IQueue.h"
#include "../stack/Node.h"

template<typename T>
class LinkedListQueue : public IQueue<T>
{
public:
    void Enqueue(T item) override
    {
        Node<T>* last = lastNode;
        lastNode = new Node<T>();
        lastNode->item = item;
        lastNode->next = nullptr;
        if (IsEmpty()) firstNode = lastNode;
        else last->next = lastNode;
    }

    T Dequeue() override
    {
        auto popped_item = firstNode->item;
        firstNode = firstNode->next;
        if (IsEmpty()) lastNode = nullptr;
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
    Node<T>* lastNode = nullptr;
};
