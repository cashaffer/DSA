class GTNode {   // General tree node for UNION/FIND
  private GTNode par;                    // Parent pointer
  public GTNode() { par = null; }        // Constuctor
  public GTNode parent() { return par; } // Return node's parent
  public GTNode setParent(GTNode newpar) // Set the parent pointer
  { return par = newpar; }
} // class GTNode
