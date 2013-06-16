/** Dummy implementation for
    ADT for buffer pools using the buffer-passing style */
class BufferPool implements BufferPoolADT {
  BufferPool() {}

  /** Return pointer to the requested block */
  public byte[] getblock(int block) {
    return null;
  }

  /** Set the dirty bit for the buffer holding "block" */
  public void dirtyblock(int block) {}

  // Tell the size of a buffer
  public int blocksize() { return 0; }
};
