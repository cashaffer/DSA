// Node implementation for the 2-3+ tree with simple inheritance
// Note: Data members are made public since this will be a private class of the
// 2-3+ tree class.

// Abstract base class declaration
template <typename Elem, typename Key>
class TTPNode {   // Node abstract base class
public:
  TTPNode<Elem, Key> *prev, *next; // Pointers to the node's siblings
  virtual bool isLeaf() = 0;    // Subclasses must implement
};

// Leaf node implementation.
// Use an array for the children in preparation for the B+ tree project
template <typename Elem, typename Key>
class TTPLeafNode : public TTPNode<Elem, Key> {
public:
  Elem recs[2];           // Array of pointers to the data records
  int reccount;

  // Basic constructor. We are assuming the Elem type is a pointer.
  TTPLeafNode() {
    recs[0] = recs[1] = NULL;
    reccount = 0;
    this->next = this->prev = NULL;
  }

  // When we make a new leaf node on insert,
  // its with a split and we fill it with one child.
  TTPLeafNode(Elem* it) {
    recs[0] = it;
    recs[1] = NULL;
    reccount = 1;
    this->next = this->prev = NULL;
  }

  // Destructor
  ~TTPLeafNode() {}

  // Implement the virtual function
  bool isLeaf() { return true; }     // Version for LeafNode
};

// Internal node implementation
template <typename Elem, typename Key>
class TTPIntlNode : public TTPNode<Elem, Key> { // Internal node
public:
  Key keys[2];         // Keys stored in this node
  TTPNode<Elem, Key>* children[3]; // Pointers to the children
  int keycount;

  // Constructor
  TTPIntlNode() {
    children[0] = children[1] = children[2] = NULL;
    keycount = 0;
    this->next = this->prev = NULL;
  }

  // Cestructor
  ~TTPIntlNode() {}

  // Implement virtual function
  bool isLeaf() { return false; }
};
