/** The bufferpool: Dummy implementation */
class BufferPool implements BufferPoolADT {
  /** Constructor:
      @param numbuff Number of buffers in pool
      @param buffsize size of a buffer in bytes */
  BufferPool(int numbuff, int buffsize) {}

  /** Relate a block to a buffer, returning a pointer to a
      buffer object */
  public Buffer acquireBuffer(int block) { return null; }
}
