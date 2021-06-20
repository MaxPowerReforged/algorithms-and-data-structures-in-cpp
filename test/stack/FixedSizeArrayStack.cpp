#include <gtest/gtest.h>

#include "stack/FixedSizeArrayStack.h"

TEST(FixedSizeArrayStack, test_that_empty_stack_can_be_checked)
{
    auto stack = new FixedSizeArrayStack<int>();

    ASSERT_TRUE(stack->IsEmpty());
}

TEST(FixedSizeArrayStack, test_that_item_can_be_pushed)
{
    auto stack = new FixedSizeArrayStack<int>();
    stack->Push(2);

    ASSERT_FALSE(stack->IsEmpty());
}

TEST(FixedSizeArrayStack, test_that_item_can_be_popped)
{
    auto stack = new FixedSizeArrayStack<int>();
    const int new_item = 2;
    stack->Push(new_item);
    int popped_item = stack->Pop();

    ASSERT_EQ(new_item, popped_item);
    ASSERT_TRUE(stack->IsEmpty());
}

TEST(FixedSizeArrayStack, test_that_size_is_returned_correctly)
{
    auto stack = new FixedSizeArrayStack<int>();
    stack->Push(2);
    stack->Push(3);

    ASSERT_EQ(stack->Size(), 2);
}