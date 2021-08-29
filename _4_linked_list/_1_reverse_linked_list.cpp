#include <bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void printList(struct Node *head) {
  struct Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

Node *reverseList(Node *head) {
  cout << "Befor calling :- ";
  printList(head);
  if (head == NULL || head->next == NULL) {
    return head;
  }
  Node *rest = reverseList(head->next);
  printList(head);
  head->next->next = head;
  head->next = NULL;
  cout << "After calling :- ";
  printList(rest);
  return rest;
}

int main() {

  struct Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  printList(head);
  head = reverseList(head);
  printList(head);

  return 0;
}
