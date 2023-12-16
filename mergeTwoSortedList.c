/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>
#include <stdlib.h>

 struct ListNode {
      int val;
      struct ListNode *next;
 };

 struct ListNode* newNode(int val)
 {
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val = val;
    temp->next = NULL;
    return temp;
 }

 // A utility function to print linked list 
void printList(struct ListNode* node) 
{ 
    while (node != NULL) { 
        printf("%d  ", node->val); 
        node = node->next; 
    } 
} 

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (!list1 && !list2)
        return NULL;
    else if(!list1)
        return list2;
    else if(!list2)
        return list1;
    
    if (list1->val < list2->val)
    {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    else
    {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}

int main() 
{ 
    struct ListNode* head1 = newNode(1); 
    head1->next = newNode(3); 
    head1->next->next = newNode(5); 
  
    // 1->3->5 LinkedList created 
  
    struct ListNode* head2 = newNode(0); 
    head2->next = newNode(2); 
    head2->next->next = newNode(4); 
  
    // 0->2->4 LinkedList created 
  
    struct ListNode* mergedhead = mergeTwoLists(head1, head2); 
  
    printList(mergedhead); 
    return 0; 
} 