#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> linkedList;

    // Inserting elements into the linked list
    linkedList.push_back(10);
    linkedList.push_back(20);
    linkedList.push_back(30);

    // Traversing the linked list
    for (auto it = linkedList.begin(); it != linkedList.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;
    // Deleting an element from the linked list
    linkedList.remove(20);

    // Traversing the linked list after deletion
    for (auto it = linkedList.begin(); it != linkedList.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}