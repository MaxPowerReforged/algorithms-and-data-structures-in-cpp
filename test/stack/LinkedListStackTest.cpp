#include <gtest/gtest.h>

#include "stack/LinkedListStack.h"

TEST(LinkedListStack, test_that_empty_stack_can_be_checked) {
    auto stack = new LinkedListStack<int>();

    ASSERT_TRUE(stack->IsEmpty());
}

