// Partial implementation for 2-3 Trees

#include "book.h"

#include "tt.h"

// Warning: This has horrible memory leaks.
// Everytime it does a remove to "it",
// the next time "it" gets used, that previous
// Int object gets clobbered.
int main()
{
  TTTree<int, Int*> tree;
  Int* it;

  tree.insert(10, new Int(10));
  tree.insert(18, new Int(18));
  tree.insert(19, new Int(19));
  tree.print();
  tree.clear();

  cout << "Size: " << tree.size() << "\n";
  tree.insert(100, new Int(100));
  tree.print();
  cout << "Size: " << tree.size() << "\n";
  it = tree.remove(10);
  tree.print();
  cout << "Size: " << tree.size() << "\n";
  tree.clear();
  cout << "Size: " << tree.size() << "\n";
  tree.insert(15, new Int(15));
  cout << "Size: " << tree.size() << "\n";
  if ((it = tree.find(20)) != NULL)
    cout << "Found " << it << endl;
  else cout << "No key 20\n";
  if ((it = tree.find(15)) != NULL)
    cout << "Found " << it << endl;
  else cout << "No key 15\n";
  tree.print();
  if ((it = tree.remove(20)) != NULL)
    cout << "Removed " << it << endl;
  else cout << "No key 20\n";
  cout << "Now, insert 20\n";
  tree.insert(20, new Int(20));
  tree.print();
  if ((it = tree.remove(20)) != NULL)
    cout << "Removed " << it << endl;
  else cout << "No key 20\n";
  tree.print();
  tree.insert(700, new Int(700));
  cout << "Size: " << tree.size() << "\n";
  tree.insert(350, new Int(350));
  tree.insert(201, new Int(201));
  tree.insert(170, new Int(170));
  tree.insert(151, new Int(151));
  tree.insert(190, new Int(190));
  tree.insert(1000, new Int(1000));
  tree.insert(900, new Int(900));
  tree.insert(950, new Int(950));
  tree.insert(10, new Int(10));
  tree.print();
  if ((it = tree.find(1000)) != NULL)
    cout << "Found " << it << endl;
  else cout << "No key 1000\n";
  if ((it = tree.find(999)) != NULL)
    cout << "Found " << it << endl;
  else cout << "No key 999\n";
  if ((it = tree.find(20)) != NULL)
    cout << "Found " << it << endl;
  else cout << "No key 20\n";
  cout << "Now do some delete tests.\n";
  if ((it = tree.remove(15)) != NULL)
    cout << "Removed " << it << endl;
  else cout << "No key 15\n";
  tree.print();
  if ((it = tree.remove(151)) != NULL)
    cout << "Removed " << it << endl;
  else cout << "No key 151\n";
  tree.print();
  if ((it = tree.remove(151)) != NULL)
    cout << "Removed " << it << endl;
  else cout << "No key 151\n";
  if ((it = tree.remove(700)) != NULL)
    cout << "Removed " << it << endl;
  else cout << "No key 700\n";
  tree.print();
  tree.clear();
  tree.print();
  cout << "Size: " << tree.size() << "\n";

  cout << "Finally, test iterator\n";
  tree.insert(3500, new Int(3500));
  tree.insert(2010, new Int(2010));
  tree.insert(1700, new Int(1700));
  tree.insert(1510, new Int(1510));
  tree.insert(1900, new Int(1900));
  tree.insert(10000, new Int(10000));
  tree.insert(9000, new Int(9000));
  tree.insert(9500, new Int(9500));
  tree.insert(100, new Int(100));
  tree.print();
  //  while (tree.size() > 0)
  //    cout << tree.removeAny() << " ";
  cout << "\n";
  return 0;
}
