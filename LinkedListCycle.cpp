/*
 * Problem: Linked List Cycle
 * Difficulty: Easy
 * Topic: Linked List, Two Pointers
 * * Description:
 * Given head, the head of a linked list, determine if the linked list has a cycle in it.
 * There is a cycle in a linked list if there is some node in the list that can be 
 * reached again by continuously following the next pointer.
 * Return true if there is a cycle in the linked list. Otherwise, return false.
 * * Example:
 * Input: head = [3,2,0,-4], pos = 1
 * Output: true
 * Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
 */

#include <cstddef> // for NULL

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL) return false;

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;          // Move 1 step
            fast = fast->next->next;    // Move 2 steps

            // If they meet, there is a cycle
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};