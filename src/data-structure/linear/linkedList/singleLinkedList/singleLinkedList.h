#ifndef C560CBF2_A5FE_4A36_8A79_22AAB5899305
#define C560CBF2_A5FE_4A36_8A79_22AAB5899305

#include <bits/stdc++.h>
using namespace std;

namespace ds
{
    template <typename T>
    class SingleLinkedList
    {
    public:
        SingleLinkedList() : head(nullptr), current(nullptr) {}
        ~SingleLinkedList()
        {
            if (head != nullptr)
            {
                delete head;
                head = nullptr;
            }

            if (current != nullptr)
            {
                delete current;
                current = nullptr;
            }
        }

    public:
        struct Node
        {
            Node *next;
            T item;

            Node(T item) : next(nullptr), item(item) {}
        };

    private:
        Node *head;
        Node *current;

    public:
        void print_all()
        {
            const auto *pos = head;
            while (pos != nullptr)
            {
                cout << pos->item << ' ';
                pos = pos->next;
            }

            cout << endl;
        }

        void push_back(T item)
        {
            if (current == nullptr)
            {
                head = current = new Node(item);
                return;
            }

            auto *newNode = new Node(item);
            current->next = newNode;
            current = current->next;
        }

        void pop_back(T item)
        {
        }

        void remove(T item)
        {
        }

        void remove(Node item)
        {
        }
    };
}

#endif /* C560CBF2_A5FE_4A36_8A79_22AAB5899305 */
