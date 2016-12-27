//
// Created by botao on 16-11-21.
//
#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"

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
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL || head->next == NULL || head->next->next == NULL)
            return head;

        ListNode* ptrCur = head;
        ListNode* pStart = ptrCur->next;
        ListNode* pEnd = ptrCur->next;

        while(pEnd!=NULL && pEnd->next!=NULL){
            ptrCur->next = pEnd->next;
            pEnd->next = ptrCur->next->next;
            pEnd = ptrCur->next->next;
            ptrCur->next->next = pStart;
            ptrCur = ptrCur->next;
        }

        return head;
    }
};