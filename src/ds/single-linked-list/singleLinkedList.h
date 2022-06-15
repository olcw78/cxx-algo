#ifndef C560CBF2_A5FE_4A36_8A79_22AAB5899305
#define C560CBF2_A5FE_4A36_8A79_22AAB5899305

#include <bits/stdc++.h>

using namespace std;

namespace ds {
    template<typename T>
    class SingleLinkedList {
    public:
        SingleLinkedList();

        ~SingleLinkedList();

    public:
        struct Node {
            Node *next;
            T item;

            Node(T item);
        };

    private:
        Node *head;
        Node *current;

    public:
        void print_all();

        void push_back(T item);

        void pop_back(T item);

        void remove(T item);

        void remove(Node item);
    };
}

#include "singleLinkedList.inl"

#endif /* C560CBF2_A5FE_4A36_8A79_22AAB5899305 */
