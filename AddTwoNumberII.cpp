//
// Created by Tao on 21/12/2016.
//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> nums1, nums2;
        while(l1){
            nums1.push_back(l1->val);
            l1 = l1->next;
        }

        while(l2){
            nums2.push_back(l2->val);
            l2 = l2->next;
        }

        ListNode *head = nullptr, *p = nullptr;
        int carry = 0;
        int sum = 0;

        for (int i = nums1.size()-1, j = nums2.size()-1; i>=0 || j >= 0 || carry >0;){
            sum = carry;
            if (i >= 0)
                sum += nums1[i--];
            if (j >= 0)
                sum += nums2[j--];

            carry = sum / 10;
            p = new ListNode(sum % 10);
            p->next = head;
            head = p;
        }
        return head;
    }
};
