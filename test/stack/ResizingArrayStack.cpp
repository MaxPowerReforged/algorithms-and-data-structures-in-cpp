#include <gtest/gtest.h>

#include "stack/ResizingArrayStack.h"

TEST(ResizingArrayStack, test_that_empty_stack_can_be_checked)
{
    auto stack = new ResizingArrayStack<int>();

    ASSERT_TRUE(stack->IsEmpty());
}

TEST(ResizingArrayStack, test_that_item_can_be_pushed)
{
    auto stack = new ResizingArrayStack<int>();
    stack->Push(2);

    ASSERT_FALSE(stack->IsEmpty());
}

TEST(ResizingArrayStack, test_that_array_is_resized_on_push)
{
    auto stack = new ResizingArrayStack<int>();
    stack->Push(2);
    stack->Push(2);
    stack->Push(2);

    ASSERT_EQ(stack->MaxSize(), 4);
}

TEST(ResizingArrayStack, test_that_item_can_be_popped)
{
    auto stack = new ResizingArrayStack<int>();
    const int new_item = 2;
    stack->Push(new_item);
    int popped_item = stack->Pop();

    ASSERT_EQ(new_item, popped_item);
    ASSERT_TRUE(stack->IsEmpty());
}

TEST(ResizingArrayStack, test_that_array_is_resized_on_pop)
{
    auto stack = new ResizingArrayStack<int>();
    stack->Push(2);
    stack->Push(2);
    stack->Push(2);

    stack->Pop();
    stack->Pop();
    stack->Pop();

    ASSERT_EQ(stack->MaxSize(), 2);
}

TEST(ResizingArrayStack, test_that_size_is_returned_correctly)
{
    auto stack = new ResizingArrayStack<int>();
    stack->Push(2);
    stack->Push(3);

    ASSERT_EQ(stack->Size(), 2);
}