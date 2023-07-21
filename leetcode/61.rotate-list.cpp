/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
 */

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    int getLength(ListNode *head)
    {
        ListNode *temp = head;
        int cnt = 0;
        while (temp)
        {
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head)
            return head;
        int len = getLength(head);
        k = k % len;
        if (k == 0)
            return head;
        ListNode *temp = head;
        for (int i = 0; i < len - k - 1; i++)
        {
            temp = temp->next;
        }
        ListNode *newHead = temp->next;
        temp->next = nullptr;
        temp = newHead;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = head;
        return newHead;
    }
};
// @lc code=end
