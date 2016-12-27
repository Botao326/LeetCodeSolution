//
// Created by botao on 16-11-22.
//

#include <stdio.h>
#include <stdlib.h>
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
    void reorderList(ListNode* head) {
        if (NULL == head || NULL == head->next){
            return;
        }
        ListNode* ptrSlow = head;
        ListNode* ptrFast = head;

        while(ptrFast->next) {
            ptrFast = ptrFast->next;
            if (ptrFast->next){
                ptrFast = ptrFast->next;
                ptrSlow = ptrSlow->next;
            }
        }

        ptrFast = ptrSlow->next;
        ptrSlow->next = NULL;

        ReverseList(ptrFast);

        ptrSlow = head;

        while(ptrFast){
            ListNode* t1 = ptrSlow;
            ListNode* t2 = ptrFast;
            ptrSlow = ptrSlow->next;
            ptrFast = ptrFast->next;
            t1->next = t2;
            t2->next = ptrSlow;
        }
    }

    void ReverseList(ListNode*& head){
        ListNode* prev = NULL;
        ListNode* next = head;
        while(next){
            ListNode* tmp = next->next;
            next->next = prev;
            prev = next;
            next = tmp;
        }
        head = prev;
    }
};