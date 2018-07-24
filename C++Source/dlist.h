// This is the file to include in your code if you want access to the
// complete DList template class

// First, get the declaration for the base list class
#include "list.h"

// This is the declaration for DList. It is broken up because the
// methods that appear in the book are in a separate file.
// Linked list implementation
template <typename E> class LList: public List<E> {
private:
  Link<E>* head;       // Pointer to list header
  Link<E>* tail;       // Pointer to list tailer
  Link<E>* curr;       // Pointer ahead of current element
  int listSize;        // Size of list

  void init() {        // Intialization helper method
    curr = tail = new Link<E>;
    head = new Link<E>(NULL, tail);
    tail->prev = head;
    listSize = 0;
  }

  void removeall() {   // Return link nodes to free store
    while(head != NULL) {
      curr = head;
      head = head->next;
      delete curr;
    }
  }

public:
  LList(int size=defaultSize) { init(); } // Constructor
  ~LList() { removeall(); }  // Destructor    // Destructor
  void clear() { removeall(); init(); }       // Clear list

  void moveToStart() // Place curr at list start
    { curr = head->next; }

  void moveToEnd()   // Place curr at list end
    { curr = tail; }

  // Move fence one step right; no change if right is empty
  void next()
    { if (curr != tail) curr = curr->next; }

  int length() const  { return listSize; }

  // Return the position of the current element
  int currPos() const {
    Link<E>* temp = head->next;
    int i;
    for (i=0; curr != temp; i++)
      temp = temp->next;
    return i;
  }

  // Move down list to "pos" position
  void moveToPos(int pos) {
    Assert ((pos>=0)&&(pos<=listSize), "Position out of range");
    curr = head->next;
    for(int i=0; i<pos; i++) curr = curr->next;
  }

  const E& getValue() const { // Return current element
    if(curr == tail) return NULL;
    return curr->element;
  }

// Include those  methods that are different from singly linked list
#include "Dlist.book"
};
