#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* currNode = head;
    int counter = 0;
    int i;
    while(currNode != NULL) {
        currNode = currNode->next;
        counter++;
    }
    currNode = head;
    for(i = 1; i < (counter / 2 + 1); i++)
    {
        currNode = currNode->next;
    }
    
    return currNode;
}