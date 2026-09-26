#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1,
                               struct ListNode* list2) {
    struct ListNode dummy;
    struct ListNode* current = &dummy;

    dummy.next = NULL;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            current->next = list1;
            list1 = list1->next;
        }
        else {
            current->next = list2;
            list2 = list2->next;
        }

        current = current->next;
    }

    if (list1 != NULL) {
        current->next = list1;
    }
    else {
        current->next = list2;
    }

    return dummy.next;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d", head->val);

        if (head->next != NULL) {
            printf(" -> ");
        }

        head = head->next;
    }

    printf("\n");
}

int main() {
    struct ListNode a1 = {1, NULL};
    struct ListNode a2 = {2, NULL};
    struct ListNode a3 = {4, NULL};

    struct ListNode b1 = {1, NULL};
    struct ListNode b2 = {3, NULL};
    struct ListNode b3 = {4, NULL};

    a1.next = &a2;
    a2.next = &a3;

    b1.next = &b2;
    b2.next = &b3;

    struct ListNode* merged = mergeTwoLists(&a1, &b1);

    printf("Merged: ");
    printList(merged);

    return 0;
}