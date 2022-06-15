#include "singleLinkedList.h"

namespace ds {

    template<typename T>
    SingleLinkedList<T>::Node::Node(T item)
            : next(nullptr), item(item) {
        //
    }

    template<typename T>
    SingleLinkedList<T>::SingleLinkedList()
            : head(nullptr), current(nullptr) {
        //
    }

    template<typename T>
    SingleLinkedList<T>::~SingleLinkedList() {
        if (head != nullptr) {
            delete head;
            head = nullptr;
        }

        if (current != nullptr) {
            delete current;
            current = nullptr;
        }
    }

    template<typename T>
    void SingleLinkedList<T>::print_all() {
        const auto *pos = head;
        while (pos != nullptr) {
            cout << pos->item << ' ';
            pos = pos->next;
        }

        cout << endl;
    }

    template<typename T>
    void SingleLinkedList<T>::push_back(T item) {
        if (current == nullptr) {
            head = current = new Node(item);
            return;
        }

        auto *newNode = new Node(item);
        current->next = newNode;
        current = current->next;
    }

    template<typename T>
    void SingleLinkedList<T>::pop_back(T item) {
    }

    template<typename T>
    void SingleLinkedList<T>::remove(T item) {
    }

    template<typename T>
    void SingleLinkedList<T>::remove(Node item) {
    }
}