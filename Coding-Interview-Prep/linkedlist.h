//
//  linkedlist.h
//  Coding-Interview-Prep
//
//  Created by Vishwanath Seshagiri on 12/05/18.
//  Copyright © 2018 MyName. All rights reserved.
//

#ifndef linkedlist_h
#define linkedlist_h

#include<iostream>
class Node{
    int value;
    class Node *next;
    
public:
    Node(int entered_value, class Node* entered_next){
        this->value = entered_value;
        this->next = entered_next;
        
        
    }
};
#endif /* linkedlist_h */
