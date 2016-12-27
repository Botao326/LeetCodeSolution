//
// Created by botao on 16-11-21.
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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
/*        ListNode **pivot = &head, **prev;
        for (int i=0; i<m; i++)
            pivot = &(*(prev=pivot))->next;
        for (int i=m; i<n; i++) {
            swap(*prev, (*pivot)->next);
            swap(*prev, *pivot);
        }
        return head;
        */
        if (!head || !head->next) return head;

        ListNode* tmpHead = new ListNode(0);
        tmpHead->next = head;
        int cnt = 1;

        ListNode* prev = tmpHead;
        while(cnt != m){
            prev = prev->next;
            cnt++;
        }

        ListNode *cur = prev->next, *next = prev->next->next;
        while(cnt != n){
            ListNode *tmp = next->next;
            next->next = cur;
            cur = next;
            next = tmp;
            cnt++;
        }

        prev->next->next = next;
        prev->next = cur;
        return tmpHead->next;
    }
};