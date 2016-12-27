//
// Created by botao on 16-11-21.
//

#ifndef LEETCODE_LINKEDLIST_H
#define LEETCODE_LINKEDLIST_H

#include <stdlib.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL){}
};

#endif //LEETCODE_LINKEDLIST_H
