// Test for variable nodes implemented with simple inheritance
// The test vehicle is an expression tree.
// The program builds and traverses a simple tree.

#include "book.h"

typedef char Operator;
typedef string Operand;

#include "VarBinNode.book"
#include "VarLeafNode.book"
#include "VarIntlNode.book"
#include "traverse.book"

int main()
{
  VarBinNode* temp1;
  VarBinNode* temp2;
  VarBinNode* root;
  string string1 = "Hello1";
  string string2 = "Another string";

  temp1 = new LeafNode(string1);
  temp2 = new LeafNode(string2);
  root = new IntlNode('+', temp1, temp2);
  traverse(root);
  return 0;
}
