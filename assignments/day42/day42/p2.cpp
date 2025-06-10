#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* d = new ListNode(0);
    ListNode* cur = d;
    int c = 0;

    while (l1 || l2 || c) {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + c;
        c = sum / 10;
        cur->next = new ListNode(sum % 10);
        cur = cur->next;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    return d->next;
}

void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
}

int main() {
  
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(0);
    l1->next->next = new ListNode(2);

    ListNode* l2 = new ListNode(4);
    l2->next = new ListNode(1);
    l2->next->next = new ListNode(8);
    ListNode* result = addTwoNumbers(l1, l2);

   
    printList(result);

  

    return 0;
}

