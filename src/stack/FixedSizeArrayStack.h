#include "IStack.h"

template<typename T>
class FixedSizeArrayStack : public IStack<T>
{
public:
    void Push(T item) override
    {
        items[n++] = item;
    }

    T Pop() override
    {
        T popped_item = items[n-1];
        n--;
        return popped_item;
    }

    bool IsEmpty() override
    {
        return n == 0;
    }

    int Size() override
    {
        return n;
    }

private:
    int n = 0;
    T items[5] = { 0, 0, 0, 0, 0};
};