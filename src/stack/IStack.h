#ifndef ALGORITHMSANDDATASTRUCTURES_ISTACK_H
#define ALGORITHMSANDDATASTRUCTURES_ISTACK_H
#pragma once

template<typename T>

class IStack {
public:
    virtual void Push(T item) = 0;

    virtual T Pop() = 0;

    virtual bool IsEmpty() = 0;

    virtual int Size() = 0;
};


#endif //ALGORITHMSANDDATASTRUCTURES_ISTACK_H
