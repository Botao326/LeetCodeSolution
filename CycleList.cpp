//
// Created by botao on 16-11-21.
//
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* ptrStart = head;
        ListNode* ptrTest = head;

        while(ptrTest != NULL && ptrTest->next != NULL){
            ptrStart = ptrStart->next;
            ptrTest = ptrTest->next->next;

            if (ptrStart == ptrTest)
                break;
        }

        if (!ptrTest || !ptrTest->next) return NULL;

        ptrStart = head;
        while (ptrStart!=ptrTest){
            ptrStart=ptrStart->next;
            ptrTest=ptrTest->next;
        }

        return ptrStart;
    }

};