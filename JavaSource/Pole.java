class Pole {
  int poleNum;
  
  Pole(int value) {
    poleNum = value;
  }

  // Override Object.toString
  public String toString() {
    return Integer.toString(poleNum);
  }
}
