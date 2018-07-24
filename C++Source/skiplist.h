// This file includes all of the pieces of the skiplist implementation
// NOTE: There is no implementation for delete, only insert and find.

// The maximum level of the skiplist is hard-coded. Ideally, it would
// grow dynamically
#define MAXLEVEL 9

#include "dictionary.h"

#include "Skiprand.book"

template <typename Key, typename E>
class SkipNode {
public:
  int myLevel;
  Key k;
  E it;
  SkipNode** forward;
  SkipNode() {
    myLevel = MAXLEVEL;
    forward = new SkipNode* [MAXLEVEL+1];
    for (int i=0; i<=MAXLEVEL; i++)
      forward[i] = NULL;
  }
  SkipNode(Key key, E r, int level) {
    myLevel = level;
    k = key;
    it = r;
    forward = new SkipNode* [level+1];
    for (int i=0; i<=level; i++)
      forward[i] = NULL;
  }
  ~SkipNode() { delete [] forward; }
};


template <typename Key, typename E>
class SkipList : public Dictionary<Key, E> {
private:
  SkipNode<Key,E>* head;
  int level;
  int reccount;
  void AdjustHead(int& level) {level = MAXLEVEL;}
public:

  SkipList() {
    head = new SkipNode<Key,E>;
    level = MAXLEVEL;
    reccount = 0;
  }

  void clear()
    { cout << "Clear not implemented\n"; }

#include "Skipsch.book"

#include "Skipins.book"

  E remove(const Key& K)
    { cout << "Remove not implemented\n"; return false;}

  E removeAny()
    { cout << "Removeany not implemented\n"; return false; }

  int size() { return reccount; }

  void print() const {
    cout << "Print a skiplist with " << reccount << " nodes\n";
    for (SkipNode<Key,E>* temp = head; temp!= NULL;
         temp = temp->forward[0]) {
      if (temp->it != NULL)
        cout << "temp->k is " << temp->k << "\n";
      else cout << "temp->k is NULL\n";
      for(int i=0; i<=temp->myLevel; i++)
        if (temp->forward[i] == NULL)
          cout << " point to NULL\n";
        else
          cout << " point to " << temp->forward[i]->it << "\n";
    }
  }
};

