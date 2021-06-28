#include "IStack.h"

template<typename T>
class ResizingArrayStack : public IStack<T>
{
public:
    void Push(T item) override
    {
        if (n == max_length) {
            max_length *= 2;
            Resize(max_length);
        }
        items[n++] = item;
    }

    T Pop() override
    {
        if (n > 0 && n == max_length / 4) {
            max_length /= 2;
            Resize(max_length);
        }
        T popped_item = items[--n];
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

    int MaxSize()
    {
        return max_length;
    }

private:
    void Resize(int new_capacity)
    {
        T* items_copy = new T[new_capacity];
        for (int i = 0; i < n; i++)
        {
            items_copy[i] = items[i];
        }
        items = items_copy;
    }

private:
    int n = 0;
    int max_length = 1;
    T* items = new T[1];
};