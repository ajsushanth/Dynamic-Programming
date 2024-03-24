#include <iostream>
#include <vector>
using namespace std;

/**
 * Finds the duplicate number in a given vector of integers.
 * This function uses Floyd's cycle-finding algorithm, also known as 
 * the "tortoise and the hare" algorithm.
 *
 * @param nums A vector of integers containing at least one duplicate number.
 * @return The duplicate number found in the input vector.
 */
int findDuplicate(vector<int>& nums) {
    // Initialize the slow and fast pointers to the first element in the vector.
    int slow = nums[0];
    int fast = nums[nums[0]];

    // Move the slow pointer step by step and the fast pointer two steps at a time.
    while (slow != fast) {
        // Update the slow pointer to the next element in the vector.
        slow = nums[slow];

        // Update the fast pointer to the next element in the vector, 
        // following the value of the current element.
        fast = nums[nums[fast]];
    }

    // The while loop ensures that the slow and fast pointers meet at the same position.
    // If we have a loop, the slow pointer will be in the middle of the loop, 
    // and the fast pointer will be at the end of the loop.

    // Reset the slow pointer to the start of the loop.
    slow = nums[slow];

    // Initialize the finder pointer to the first element in the vector.
    int finder = nums[0];

    // Keep updating the slow pointer and the finder pointer until they meet inside the loop.
    while (slow != finder) {
        // Move the slow pointer to the next element in the vector.
        slow = nums[slow];

        // Do the same for the finder pointer.
        finder = nums[finder];
    }

    // Now the slow pointer and finder pointer are at the same position - the beginning of the loop.
    // Return the duplicate number by moving the finder pointer.
    return finder;
}