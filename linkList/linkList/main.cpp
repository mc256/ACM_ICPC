//
//  main.cpp
//  linkList
//
//  Created by Michael Chan on 16/9/17.
//  Copyright © 2016年 masterchan.me. All rights reserved.
//

#include <iostream>
using namespace std;

struct Node {
    int number;
    Node *next = NULL;
};

Node *addNode(Node *head, int number){
    if (head == NULL){
        Node *n =(Node *)malloc(sizeof(Node));
        n->number = number;
        n->next = NULL;
        return n;
    }else{
        head->next = addNode(head->next, number);
        return head;
    }
}

void toString(Node *head){
    if (head == NULL) {
        cout << endl;
    }else{
        cout << head->number << ",";
        toString(head->next);
    }
}

int main(int argc, const char * argv[]) {
    
    Node *head = NULL;
    
    head = addNode(head, 88);
    head = addNode(head, 87);
    head = addNode(head, 899);
    
    toString(head);
    return 0;
}
