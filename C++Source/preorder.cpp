// Test program for various preorder traversals of a binary tree.
// This includes two implementations for preorder traversal,
// and a traversal that counts the number of nodes in the tree.

#include "book.h"

#include "BSTNode.h"

// Stick these in to test the preorder routine
#define visit(X) (cout << X->element() << endl)

// This is the preferred structure for preorder traversal.
// It tests the pointer to the current node before visiting it,
// but does not test that children are NULL before calling a
// visit on them. This version does not rely on the caller
// to test the root for safety.
#include "preorder.book"

// Count the number of nodes in a binary tree
#include "count.book"

// Verify that this is a BST
#include "checkBST.book"

// This version of preorder does "look ahead" to test if
// a child should be visited before doing the visit.
// This requires an external test of the root to make it safe
// from calls on an empty tree.
#include "preorder2.book"

int main()
{
  BSTNode<int,Int>* root = new BSTNode<int,Int>(10,10);
  root->setLeft(new BSTNode<int,Int>(15,15));
  root->setRight(new BSTNode<int,Int>(20,20));
  preorder(root);
  cout << " Count is: " << count(root) << endl;
  preorder2(root);

  if (checkBST<int,Int>(root, -1, 1000))
    cout << "Yes, its a BST\n";
  else cout << "No, it is not a BST\n";

  BSTNode<int,int>* root2 = new BSTNode<int,int>(10,10);
  root2->setLeft(new BSTNode<int,int>(5,5));
  root2->setRight(new BSTNode<int,int>(20,20));
  preorder(root2);
  cout << " Count is: " << count(root2) << endl;
  preorder2(root2);

  if (checkBST<int,int>(root2, -1, 1000))
    cout << "Yes, its a BST\n";
  else cout << "No, it is not a BST\n";
}
