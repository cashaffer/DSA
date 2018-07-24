// The number of records (and keys) in a leaf node
const int maxrecs = 10;
// The number of pointers (and keys) in an internal node
const int maxpointers = 10;

#include "BPNode.book"

// Implementation for leaf node
template <typename Key, typename E>
class BPLeaf : public BPNode<Key, E> {
private:
  Key theKeys[maxrecs];
  E theRecs[maxrecs];
  int currecs; // The number of records now

public:
  BPLeaf() { currecs = 0; }  // constructor
  bool isLeaf() const { return true; }
  bool isFull() const { return (currecs == maxrecs); }
  int numrecs() const { return currecs; }
  Key* keys() { return theKeys; }
  E recs(int which) const { return theRecs[which]; }

  BPNode<Key,E>* del(int which) { return NULL; }
  BPNode<Key,E>* add(Key k, E e) { return NULL; }
};

// Implementation for leaf node
template <typename Key, typename E>
class BPInternal : public BPNode<Key, E> {
private:
  Key theKeys[maxpointers];
  BPNode<Key,E>* thePointers[maxpointers];
  int currecs; // The number of records now

public:
  BPInternal() { currecs = 0; }  // constructor
  bool isLeaf() const { return false; }
  bool isFull() const { return (currecs == maxrecs); }
  int numrecs() const { return currecs; }
  Key* keys() const { return theKeys; }
  BPNode<Key,E>* pointers(int which) const { return thePointers[which]; }

  // stubs
  BPInternal<Key,E>* add(Key k, BPInternal<Key,E>* ptr) { return NULL; }
  bool underflow(int which) { return false; }
};
