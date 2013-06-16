public class MemHandle { // An access handle for the
	                     //  memory manager
  int pos;               // Position of data in memory

  MemHandle(int inpos) { pos = inpos; }

  int getPos() { return pos; }
}
