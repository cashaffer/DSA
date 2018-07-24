// Program for testing the syntax of the memory manager code

typedef int MemHandle;

#include "MemMan.h"

// Make the abstract class concrete so that the compiler will not complain
class MemConc: public MemManager {
public:
  MemHandle insert(void* space, int length) { return 0; }
  void release(MemHandle h) {}
  void get(void* space, MemHandle h, int size) {}
};

int main(int argc, char** argv) {

// example code from book
#include "garbage.book"

  return 0;
}
