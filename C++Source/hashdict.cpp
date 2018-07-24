// Test program for checking syntax of a hash table-based dictionary

#include "book.h"

#include "hashdict.h"

int main(int argc, char** argv) {
  hashdict<int, Int*> dict(100, -1);
  Int* val;

  dict.insert(10, new Int(10));
  if ((val = dict.find(10)) != NULL)
    cout << "Found value " << val << " to match key value 10\n";
  else
    cout << "Nothing found to match key value 10\n";

  hashdict<char*, char*> Strdict(100, "");
  char* str;

  Strdict.insert("hello", "hello");
  if ((str = Strdict.find("hello")) != NULL)
    cout << "Found value " << str << " to match key value hello\n";
  else
    cout << "Nothing found to match key value hello\n";
}
