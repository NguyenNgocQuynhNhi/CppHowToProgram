

#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "ListNode.h"   // ListNode class definition

template<typename NODETYPE>
class List {
public: 
    // destructor
    ~List() {
        if (!isEmpty()) {   // List is not empty
            std::cout << "Destroying nodes... \n";
        }

        ListNode<NODETYPE>* currentPtr{firstPtr};
        ListNode<NODETYPE>* temPtr{nullptr};

        while (currentPtr != nullptr) {
            temPtr = currentPtr;
            std::cout << temPtr->data << '\n';
            currentPtr = currentPtr->nextPtr;
            delete tempPtr;
        }

        std::cout << "All nodes destroyed\n\n";
    }

    // insert node at front of list
    void insertAtFront(const NODETYPE& value) {
        ListNode<NODETYPE>* newPtr{getNewNode(value)}; //new node

        if (isEmpty()) {
            
        }
    }
};

#endif 