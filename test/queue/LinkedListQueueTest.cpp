#include <gtest/gtest.h>

#include "queue/LinkedListQueue.h"

TEST(LinkedListQueue, test_that_empty_queue_can_be_checked)
{
    auto queue = new LinkedListQueue<int>();

    ASSERT_TRUE(queue->IsEmpty());
}

TEST(LinkedListQueue, test_that_we_can_enqueue_new_item)
{
    auto queue = new LinkedListQueue<int>();
    const int new_item = 1;
    queue->Enqueue(new_item);

    ASSERT_FALSE(queue->IsEmpty());
}

TEST(LinkedListQueue, test_that_item_can_be_dequeued_in_proper_order)
{
    auto queue = new LinkedListQueue<int>();
    const int first_item = 1;
    const int second_item = 4;
    queue->Enqueue(first_item);
    queue->Enqueue(second_item);

    ASSERT_EQ(queue->Dequeue(), first_item);
}

TEST(LinkedListQueue, test_that_size_is_returned_correctly)
{
    auto queue = new LinkedListQueue<int>();
    queue->Enqueue(1);
    queue->Enqueue(2);

    ASSERT_EQ(queue->Size(), 2);
}

