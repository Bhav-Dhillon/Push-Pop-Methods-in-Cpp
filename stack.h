#include <iostream>
#include "node.h"

class Stack {
    Node * root;

    public:
        void print()
        {
            Node * iter = root;
            std::cout << "[ ";
            while (iter != nullptr)
            {
                std::cout << iter->getValue();
                iter = iter->getNext();
                if (iter != nullptr)
                    std::cout << ",";
            }
            std::cout << " ]" << std::endl;
        }

        void push(int val)
        {
            Node * newNode = new Node(val, root);
            root = newNode;
        }

        int pop()
        {
            if (root != nullptr)
            {
                int val = root->getValue();
                Node * next = root->getNext();
                delete root;
                root = next;
                return val;
            }
            else
                return 0;
        }
};