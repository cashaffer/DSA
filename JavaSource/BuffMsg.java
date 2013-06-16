/** Dummy implementation for 
    ADT for buffer pools using the message-passing style */
class BufferPool implements BufferPoolADT {
  BufferPool() {}

  /** Copy "sz" bytes from "space" to position "pos" in the
      buffered storage */
  public void insert(byte[] space, int sz, int pos) {}

  /** Copy "sz" bytes from position "pos" of the buffered
      storage to "space". */
    public void getbytes(byte[] space, int sz, int pos) {}
}
