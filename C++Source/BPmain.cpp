// This is an outline for a B+ tree implementation. Primarily,
// this code tests the syntax for the outline. It is not a working,
// concrete implementation.

#include "book.h"

#include "dictionary.h"

#include "BPnode.h"

template <typename Key, typename E>
class BPTree : public Dictionary<Key,E> {
private:
  BPNode<Key, E>* root;
  int reccount;
  E findhelp(BPNode<Key,E>* root, const Key k) const;
  BPNode<Key,E>* inserthelp(BPNode<Key,E>* root, const Key& k, const E& e);
  bool removehelp(BPNode<Key,E>* root, const Key& k);

  // Stub for a binary search on the key array
  int binaryle(Key keys[], int cnt, const Key k) const { return 0; }

public:
  BPTree() { root = NULL; reccount = 0; }
  ~BPTree() {};
  void clear() { root = NULL; reccount = 0; } // Memory leak

  void insert(const Key& k, const E& e) { // Insert node
    root = inserthelp(root, k, e);
    reccount++;
  }

  E remove(const Key& k) {
    E temp = findhelp(root, k);
    if (temp != NULL) {
      if (removehelp(root, k) && (root->numrecs() == 1)) // Collapse root
        if (!root->isLeaf()) root = ((BPInternal<Key,E>*)root)->pointers(0);
      reccount--;
    }
    return temp;
  }

  E removeAny() { return NULL; }

  E find(const Key& k) const
    { return findhelp(root, k); }

  int size() { return reccount; }
};

#include "BPfind.book"

#include "BPinsert.book"

#include "BPremove.book"

int main(int argc, char** argv) {
  BPTree<int, Int*>dum;
}
