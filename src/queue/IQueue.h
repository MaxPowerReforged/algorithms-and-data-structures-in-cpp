#pragma once

template<typename T>

class IQueue {
public:
    virtual void Enqueue(T item) = 0;

    virtual T Dequeue() = 0;

    virtual bool IsEmpty() = 0;

    virtual int Size() = 0;
};
