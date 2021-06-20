#include <gtest/gtest.h>

#include "stack/LinkedListStack.h"

TEST(LinkedListStack, test_that_empty_stack_can_be_checked)
{
    auto stack = new LinkedListStack<int>();

    ASSERT_TRUE(stack->IsEmpty());
}

TEST(LinkedListStack, test_that_we_can_push_new_item)
{
    auto stack = new LinkedListStack<int>();
    const int new_item = 1;
    stack->Push(new_item);

    ASSERT_FALSE(stack->IsEmpty());
}

TEST(LinkedListStack, test_that_item_can_be_popped)
{
    auto stack = new LinkedListStack<int>();
    const int new_item = 1;
    stack->Push(new_item);

    ASSERT_EQ(stack->Pop(), new_item);
    ASSERT_TRUE(stack->IsEmpty());
}

TEST(LinkedListStack, test_that_size_is_returned_correctly)
{
    auto stack = new LinkedListStack<int>();
    stack->Push(1);
    stack->Push(2);

    ASSERT_EQ(stack->Size(), 2);
}

