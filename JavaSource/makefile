TARGET= ../DSJAVA
CFLAGS= -Xlint -cp .:../junit-4.5.jar
RFLAGS= -ea -cp .:../junit-4.5.jar org.junit.runner.JUnitCore

#### Compile the code by chapters ##########################################

all: c2 c3 c4 c5 c6 c7 c8 c9 c10 c11 c12 c13 c14 c15

c2: Rfact Permute Largest ToH Fib Terminate

c3: Flag Ch3 Bsearch Collatz Binsimp

c4: Alist Llist Flist Dlist Astack Lstack Aqueue Lqueue Ch4 Sfact TOHstack UALdict Payroll SAlist GenericTest

c5: Preorder Var VarC Huffman BST MaxHeap MinHeap

c6: GenTree Equiv Equivpc

c7: Inssort Inssortopt Bubsort Selsort Shsort Qsort1 Qsortsimp Qsort4 Mrgsort1 Mrgsort2 Heapsort Radix 

c8: Genfile Genfile2 Test Test2 Test3 Exmrg1 Exmrg2 Exmrg3 BuffMsg BuffBuff BuffBuff2

c9: HashSim Hash Hashdict

c10: TTTree BPTree

c11: Grtestm Grtestl Grdfsm Grdfsl Grbfsm Grbfsl Grtopdm Grtopdl Grtopbm Grtopbl Grdijk1m Grdijk1l Grdijk2m Grdijk2l Grprim1m Grprim1l Grprim2m Grprim2l Grkrusm Grkrusl

c12: Mem

c13: KDtree

c14: Grcon Ch14

c15: MinMax

c16: GrFloydm GrFloydl Skiplist

#### Make a software distribution ##########################################
distrib: clean d2 d3 d4 d5 d6 d7 d8 d9 d10 d11 d12 d13 d14 d15 d16
	cd $(TARGET); \
        rm *.zip; \
	zip -r DSdistrib.zip *

d2:
	-mkdir $(TARGET)/Rfact
	cat Copyright.txt fact1.txt rfact.book fact2.txt > $(TARGET)/Rfact/FactTest.java
	-mkdir $(TARGET)/Permute
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Permute/DSutil.java
	cat Copyright.txt PermuteTest.java > $(TARGET)/Permute/PermuteTest.java
	-mkdir $(TARGET)/Largest
	cat Copyright.txt large1.txt largest.book large2.txt > $(TARGET)/Largest/LargeTest.java
	-mkdir $(TARGET)/ToH
	cat Copyright.txt TOH1.txt TOH.book TOH2.txt > $(TARGET)/ToH/ToHTest.java
	cat Copyright.txt Pole.java > $(TARGET)/ToH/Pole.java
	-mkdir $(TARGET)/Fib
	cat Copyright.txt fib1.txt fibi.book fibr.book fib2.txt > $(TARGET)/Fib/FibTest.java
	-mkdir $(TARGET)/Terminate
	cat Copyright.txt term1.txt terminate.book term2.txt > $(TARGET)/Terminate/TerminateTest.java

d3:
	-mkdir $(TARGET)/Flag
	cat Copyright.txt Flag.java > $(TARGET)/Flag/Flag.java
	-mkdir $(TARGET)/Ch3
	cat Copyright.txt ch3a.txt c3p1.book ch3b.txt c3p2.book ch3c.txt c3p3.book ch3d.txt c3p4.book ch3e.txt c3p5.book ch3f.txt c3p6.book ch3n.txt c3p16.book ch3g.txt c3p7.book ch3h.txt c3p8.book ch3i.txt c3p9.book ch3j.txt c3p10.book ch3k.txt c3p11.book ch3l.txt c3p12.book c3p13.book ch3o.txt c3p14.book c3p15.book c3p16.book ch3m.txt > $(TARGET)/Ch3/Ch3.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Ch3/DSutil.java
	-mkdir $(TARGET)/Bsearch
	cat Copyright.txt bsearch1.txt bsearch.book bsearch2.txt > $(TARGET)/Bsearch/BsearchTest.java
	-mkdir $(TARGET)/Collatz
	cat Copyright.txt collatz1.txt collatz.book collatz2.txt > $(TARGET)/Collatz/Collatz.java
	-mkdir $(TARGET)/Binsimp
	cat Copyright.txt binsimpstart.txt binsort.book binsimpa.txt binsimp1.book binsimpb.txt binsimp2.book binsimpc.txt > $(TARGET)/Binsimp/Binsimp.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Binsimp/DSutil.java
	cat Copyright.txt List.book > $(TARGET)/Binsimp/List.java
	cat Copyright.txt Link.book > $(TARGET)/Binsimp/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Binsimp/LList.java

d4:
	-mkdir $(TARGET)/Alist
	cat Copyright.txt Lmain1.txt listfind.book ALmain.txt Lmain2.txt > $(TARGET)/Alist/ListTest.java
	cat Copyright.txt List.book > $(TARGET)/Alist/List.java
	cat Copyright.txt AList1.book AList2.book Alist3.txt > $(TARGET)/Alist/AList.java
	cat Copyright.txt KVpair.book > $(TARGET)/Alist/KVpair.java
	cat Copyright.txt Payroll.book > $(TARGET)/Alist/Payroll.java
	-mkdir $(TARGET)/Llist
	cat Copyright.txt Lmain1.txt listfind.book LLmain.txt Lmain2.txt > $(TARGET)/Llist/ListTest.java
	cat Copyright.txt List.book > $(TARGET)/Llist/List.java
	cat Copyright.txt Link.book > $(TARGET)/Llist/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Llist/LList.java
	-mkdir $(TARGET)/Flist
	cat Copyright.txt Lmain1.txt listfind.book LLmain.txt Lmain2.txt > $(TARGET)/Flist/ListTest.java
	cat Copyright.txt List.book > $(TARGET)/Flist/List.java
	cat Copyright.txt Flink.book > $(TARGET)/Flist/Link.java
	cat Copyright.txt Flist1.txt Flist.book Flist2.txt Alist3.txt > $(TARGET)/Flist/LList.java
	-mkdir $(TARGET)/Dlist
	cat Lmain1.txt listfind.book DLmain.txt Lmain2.txt > $(TARGET)/Dlist/ListTest.java
	cat Copyright.txt List.book > $(TARGET)/Dlist/List.java
	cat Copyright.txt DLink.book > $(TARGET)/Dlist/DLink.java
	cat Copyright.txt Dlist1.txt Dlist.book Dlist2.txt Alist3.txt > $(TARGET)/Dlist/LList.java
	-mkdir $(TARGET)/Astack
	cat Copyright.txt Stack.book > $(TARGET)/Astack/Stack.java
	cat Copyright.txt AStack.book AStack.txt > $(TARGET)/Astack/AStack.java
	cat Copyright.txt Stkmain1.txt ASmain.txt Stkmain2.txt > $(TARGET)/Astack/StackTest.java
	-mkdir $(TARGET)/Lstack
	cat Copyright.txt Stack.book > $(TARGET)/Lstack/Stack.java
	cat Copyright.txt Link.book > $(TARGET)/Lstack/Link.java
	cat Copyright.txt LStack.book LStack.txt > $(TARGET)/Lstack/LStack.java
	cat Stkmain1.txt LSmain.txt Stkmain2.txt > $(TARGET)/Lstack/StackTest.java
	-mkdir $(TARGET)/Aqueue
	cat Copyright.txt Queue.book > $(TARGET)/Aqueue/Queue.java
	cat Copyright.txt AQueue.book AQueue.txt > $(TARGET)/Aqueue/AQueue.java
	cat Copyright.txt Qmain1.txt AQmain.txt Qmain2.txt > $(TARGET)/Aqueue/QueueTest.java
	-mkdir $(TARGET)/Lqueue
	cat Copyright.txt Link.book > $(TARGET)/Lqueue/Link.java
	cat Copyright.txt Queue.book > $(TARGET)/Lqueue/Queue.java
	cat Copyright.txt LQueue.book LQueue.txt> $(TARGET)/Lqueue/LQueue.java
	cat Qmain1.txt LQmain.txt Qmain2.txt > $(TARGET)/Lqueue/QueueTest.java
	-mkdir $(TARGET)/Sfact
	cat Copyright.txt fact1.txt sfact.book fact2.txt > $(TARGET)/Sfact/FactTest.java
	cat Copyright.txt Stack.book > $(TARGET)/Sfact/Stack.java
	cat Copyright.txt AStack.book AStack.txt > $(TARGET)/Sfact/AStack.java
	-mkdir $(TARGET)/GenericTest
	cat Copyright.txt KVpair.book > $(TARGET)/GenericTest/KVpair.java
	cat Copyright.txt GenericTest.java >  $(TARGET)/GenericTest/GenericTest.java
	-mkdir $(TARGET)/ToHstack
	cat Copyright.txt operation.book > $(TARGET)/ToHstack/operation.java
	cat Copyright.txt Pole.java > $(TARGET)/ToHstack/Pole.java
	cat Copyright.txt TOHobj.book > $(TARGET)/ToHstack/TOHobj.java
	cat Copyright.txt TOH1.txt TOHstack.book TOH2.txt > $(TARGET)/ToHstack/ToHTest.java
	cat Copyright.txt Stack.book > $(TARGET)/ToHstack/Stack.java
	cat Copyright.txt AStack.book AStack.txt > $(TARGET)/ToHstack/AStack.java
	-mkdir $(TARGET)/UALdict
	cat Copyright.txt Dictionary.book > $(TARGET)/UALdict/Dictionary.java
	cat Copyright.txt UALdict1.book UALdict2.book> $(TARGET)/UALdict/UALdictionary.java
	cat Copyright.txt KVpair.book > $(TARGET)/UALdict/KVpair.java
	cat Copyright.txt UALdictTest.java > $(TARGET)/UALdict/DictTest.java
	cat Copyright.txt List.book > $(TARGET)/UALdict/List.java
	cat Copyright.txt AList1.book AList2.book Alist3.txt> $(TARGET)/UALdict/AList.java
	-mkdir $(TARGET)/Payroll
	cat Copyright.txt Dictionary.book > $(TARGET)/Payroll/Dictionary.java
	cat Copyright.txt UALdict1.book UALdict2.book> $(TARGET)/Payroll/UALdictionary.java
	cat Copyright.txt KVpair.book > $(TARGET)/Payroll/KVpair.java
	cat Copyright.txt List.book > $(TARGET)/Payroll/List.java
	cat Copyright.txt Payroll.book > $(TARGET)/Payroll/Payroll.java
	cat Copyright.txt PayrollMain1.txt PayrollMain.book PayrollMain2.txt > $(TARGET)/Payroll/PayrollTest.java
	cat Copyright.txt AList1.book AList2.book Alist3.txt > $(TARGET)/Payroll/AList.java
	-mkdir $(TARGET)/Ch4
	cat Copyright.txt Ch4a.txt ch4p2.book ch4p3.book listiter.book ch4p1.book ch4p4.book Ch4fin.txt > $(TARGET)/Ch4/Ch4.java
	cat Copyright.txt List.book > $(TARGET)/Ch4/List.java
	cat Copyright.txt AList1.book AList2.book Alist3.txt > $(TARGET)/Ch4/AList.java
	cat Copyright.txt Dictionary.book > $(TARGET)/Ch4/Dictionary.java
	cat Copyright.txt UALdict1.book UALdict2.book> $(TARGET)/Ch4/UALdictionary.java
	cat Copyright.txt KVpair.book > $(TARGET)/Ch4/KVpair.java
	-mkdir $(TARGET)/SAlist
	cat Copyright.txt SLmain.java > $(TARGET)/SAlist/SortedTest.java
	cat Copyright.txt KVpair.book > $(TARGET)/SAlist/KVpair.java
	cat Copyright.txt Payroll.book > $(TARGET)/SAlist/Payroll.java
	cat Copyright.txt SortedList.book > $(TARGET)/SAlist/SortedList.java
	cat Copyright.txt SAlist.book > $(TARGET)/SAlist/SAList.java
	-mkdir $(TARGET)/SALdict
	cat Copyright.txt Dictionary.book > $(TARGET)/SALdict/Dictionary.java
	cat Copyright.txt SortedList.book > $(TARGET)/SALdict/SortedList.java
	cat Copyright.txt SAlist.book > $(TARGET)/SALdict/SAList.java
	cat Copyright.txt SALdictionary.java > $(TARGET)/SALdict/SALdictionary.java
	cat Copyright.txt KVpair.book > $(TARGET)/SALdict/KVpair.java
	cat Copyright.txt SALdictTest.java > $(TARGET)/SALdict/DictTest.java

d5:
	-mkdir $(TARGET)/Preorder
	cat Copyright.txt preorder1.txt preorder.book preorder2.book count.book checkBST.book preorder2.txt > $(TARGET)/Preorder/PreorderTest.java
	cat Copyright.txt BinNode.book > $(TARGET)/Preorder/BinNode.java
	cat Copyright.txt BSTNode.book > $(TARGET)/Preorder/BSTNode.java
	-mkdir $(TARGET)/Var
	cat Copyright.txt Visit.java > $(TARGET)/Var/Visit.java
	cat Copyright.txt VarBinNode.book> $(TARGET)/Var/VarBinNode.java
	cat Copyright.txt VarLeafNode.book > $(TARGET)/Var/VarLeafNode.java
	cat Copyright.txt VarIntlNode.book > $(TARGET)/Var/VarIntlNode.java
	cat Copyright.txt VarMain1.txt traverse.book VarMain2.txt > $(TARGET)/Var/VarTest.java
	-mkdir $(TARGET)/VarC
	cat Copyright.txt Visit.java > $(TARGET)/VarC/Visit.java
	cat Copyright.txt VarBinNodeC.book > $(TARGET)/VarC/VarBinNode.java
	cat Copyright.txt VarLeafNodeC.book > $(TARGET)/VarC/VarLeafNode.java
	cat Copyright.txt VarIntlNodeC.book > $(TARGET)/VarC/VarIntlNode.java
	cat Copyright.txt VarMain1.txt traverseC.book VarMain2.txt > $(TARGET)/VarC/VarTest.java
	-mkdir $(TARGET)/BST
	cat Copyright.txt Dictionary.book > $(TARGET)/BST/Dictionary.java
	cat Copyright.txt BinNode.book > $(TARGET)/BST/BinNode.java
	cat Copyright.txt BSTNode.book > $(TARGET)/BST/BSTNode.java
	cat Copyright.txt Comparable.txt BST1.book BSTfind.book BSTinsert.book BSTremove.book BSTgetmin.book BSTdeletemin.book BSTprint.book BST.txt BST2.book > $(TARGET)/BST/BST.java
	cat Copyright.txt BSTTest.java > $(TARGET)/BST/BSTTest.java
	-mkdir $(TARGET)/MaxHeap
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/MaxHeap/DSutil.java
	cat Copyright.txt MaxHeapTest.java > $(TARGET)/MaxHeap/MaxHeapTest.java
	cat Copyright.txt Comparable.txt Heap1.book Heap2.book > $(TARGET)/MaxHeap/MaxHeap.java
	-mkdir $(TARGET)/MinHeap
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/MinHeap/DSutil.java
	cat Copyright.txt MinHeapTest.java > $(TARGET)/MinHeap/MinHeapTest.java
	cat Copyright.txt MinHeap.java > $(TARGET)/MinHeap/MinHeap.java
	-mkdir $(TARGET)/Huffman
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Huffman/DSutil.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Huffman/MinHeap.java
	cat Copyright.txt Code.java > $(TARGET)/Huffman/Code.java
	cat Copyright.txt HuffBaseNode.book > $(TARGET)/Huffman/HuffBaseNode.java
	cat Copyright.txt HuffLeafNode.book > $(TARGET)/Huffman/HuffLeafNode.java
	cat Copyright.txt HuffInternalNode.book > $(TARGET)/Huffman/HuffInternalNode.java
	cat Copyright.txt HuffTree.book > $(TARGET)/Huffman/HuffTree.java
	cp huffex.dat hufftest.dat huffbook.dat $(TARGET)/Huffman
	cat Huffm1.txt Huffbld.book Huffm2.txt > $(TARGET)/Huffman/Huffman.java

d6:
	-mkdir $(TARGET)/GenTree
	cat Copyright.txt GTNode.book > $(TARGET)/GenTree/GTNode.java
	cat Copyright.txt GTNodeImpl.java > $(TARGET)/GenTree/GTNodeImpl.java
	cat Copyright.txt GenTree.book > $(TARGET)/GenTree/GenTree.java
	cat Copyright.txt GenTreeImpl.java > $(TARGET)/GenTree/GenTreeImpl.java
	cat GTmain1.txt GTprint.book GTmain2.txt > $(TARGET)/GenTree/GenTreeTest.java
	-mkdir $(TARGET)/Equiv
	cat Copyright.txt UFgtree.book UFfind.book UFgtree2.txt > $(TARGET)/Equiv/ParPtrTree.java
	cat Copyright.txt UFTest.java > $(TARGET)/Equiv/UFTest.java
	-mkdir $(TARGET)/Equivpc
	cat Copyright.txt UFgtree.book UFpcfind.book UFgtree2.txt > $(TARGET)/Equivpc/ParPtrTree.java
	cat Copyright.txt UFTest.java > $(TARGET)/Equivpc/UFTest.java

d7:
	-mkdir $(TARGET)/Inssort
	cat Copyright.txt SortTest1.txt Inssort.txt Inssort.book SortTest2.txt > $(TARGET)/Inssort/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Inssort/DSutil.java
	cat Copyright.txt Smain1.txt Inssort.txt Inssort.book Smain2.txt > $(TARGET)/Inssort/Sortmain.java
	-mkdir $(TARGET)/Bubsort
	cat Copyright.txt SortTest1.txt Bubsort.txt Bubsort.book SortTest2.txt > $(TARGET)/Bubsort/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Bubsort/DSutil.java
	cat Copyright.txt Smain1.txt Bubsort.txt Bubsort.book Smain2.txt > $(TARGET)/Bubsort/Sortmain.java
	-mkdir $(TARGET)/Selsort
	cat Copyright.txt SortTest1.txt Selsort.txt Selsort.book SortTest2.txt > $(TARGET)/Selsort/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Selsort/DSutil.java
	cat Copyright.txt Smain1.txt Selsort.txt Selsort.book Smain2.txt > $(TARGET)/Selsort/Sortmain.java
	-mkdir $(TARGET)/Shsort
	cat Copyright.txt SortTest1.txt Shsort.txt Shsort.book SortTest2.txt > $(TARGET)/Shsort/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Shsort/DSutil.java
	cat Copyright.txt Smain1.txt Shsort.txt Shsort.book Smain2.txt > $(TARGET)/Shsort/Sortmain.java
	-mkdir $(TARGET)/Qsort1
	cat Copyright.txt SortTest1.txt Qsort.txt Qsort1.book Partit.book Findpiv.book SortTest2.txt > $(TARGET)/Qsort1/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Qsort1/DSutil.java
	cat Copyright.txt Smain1.txt Qsort.txt Qsort1.book Partit.book Findpiv.book Smain2.txt > $(TARGET)/Qsort1/Sortmain.java
	-mkdir $(TARGET)/Qsort4
	cat Copyright.txt SortTest1.txt Qsort.txt Inssort3.txt Qsort4.book SortTest2.txt > $(TARGET)/Qsort4/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Qsort4/DSutil.java
	cat Copyright.txt Smain1.txt Qsort.txt Inssort3.txt Qsort4.book Smain2.txt > $(TARGET)/Qsort4/Sortmain.java
	-mkdir $(TARGET)/Mrgsort1
	cat Copyright.txt SortTest1.txt Mrgsort.txt Mrgsort1.book SortTest2.txt > $(TARGET)/Mrgsort1/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Mrgsort1/DSutil.java
	cat Copyright.txt Smain1.txt Mrgsort.txt Mrgsort1.book Smain2.txt > $(TARGET)/Mrgsort1/Sortmain.java
	-mkdir $(TARGET)/Mrgsort2
	cat Copyright.txt SortTest1.txt Mrgsort.txt Inssortt.txt Mrgsort3.book SortTest2.txt > $(TARGET)/Mrgsort2/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Mrgsort2/DSutil.java
	cat Copyright.txt Smain1.txt Mrgsort.txt Inssortt.txt Mrgsort3.book Smain2.txt > $(TARGET)/Mrgsort2/Sortmain.java
	-mkdir $(TARGET)/Heapsort
	cat Copyright.txt SortTest1.txt Heapsort.txt Heapsort.book SortTest2.txt > $(TARGET)/Heapsort/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Heapsort/DSutil.java
	cat Copyright.txt Comparable.txt Heap1.book Heap2.book > $(TARGET)/Heapsort/MaxHeap.java
	cat Copyright.txt Smain1.txt Heapsort.txt Heapsort.book Smain2.txt > $(TARGET)/Heapsort/Sortmain.java
	-mkdir $(TARGET)/Radix
	cat Copyright.txt SortTest1.txt Radix.txt Radix.book SortTest2.txt > $(TARGET)/Radix/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Radix/DSutil.java
	cat Copyright.txt Smain1.txt Radix.txt Radix.book Smain2.txt > $(TARGET)/Radix/Sortmain.java

d8:
	-mkdir $(TARGET)/Genfile
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Genfile/DSutil.java
	cat Copyright.txt Genfile.java > $(TARGET)/Genfile/Genfile.java
	-mkdir $(TARGET)/Genfile2
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Genfile2/DSutil.java
	cat Copyright.txt Genfile2.java > $(TARGET)/Genfile2/Genfile2.java
	-mkdir $(TARGET)/Test
	cat Copyright.txt Test.java > $(TARGET)/Test/Test.java
	-mkdir $(TARGET)/Test2
	cat Copyright.txt Test2.java > $(TARGET)/Test2/Test2.java
	-mkdir $(TARGET)/Test3
	cat Copyright.txt Test3.java > $(TARGET)/Test3/Test3.java
	-mkdir $(TARGET)/Exmrg1
	cat Copyright.txt Exmrg1.java > $(TARGET)/Exmrg1/Exmrg1.java
	-mkdir $(TARGET)/Exmrg2
	cat Copyright.txt Exmrg2.java > $(TARGET)/Exmrg2/Exmrg2.java
	-mkdir $(TARGET)/Exmrg3
	cat Copyright.txt Exmrg3.java > $(TARGET)/Exmrg3/Exmrg3.java
	-mkdir $(TARGET)/BuffMsg
	cat Copyright.txt BufferTest.java > $(TARGET)/BuffMsg/BufferTest.java
	cat Copyright.txt BuffMsgADT.book > $(TARGET)/BuffMsg/BufferPoolADT.java
	cat Copyright.txt BuffMsg.java > $(TARGET)/BuffMsg/BufferPool.java
	-mkdir $(TARGET)/BuffBuff
	cat Copyright.txt BufferTest.java > $(TARGET)/BuffBuff/BufferTest.java
	cat Copyright.txt BuffBuffADT.book > $(TARGET)/BuffBuff/BufferPoolADT.java
	cat Copyright.txt BuffBuff.java > $(TARGET)/BuffBuff/BufferPool.java
	-mkdir $(TARGET)/BuffBuff2
	cat Copyright.txt BufferTest2.java > $(TARGET)/BuffBuff2/BufferTest.java
	cat Copyright.txt BufferPoolADT.book > $(TARGET)/BuffBuff2/BufferPoolADT.java
	cat Copyright.txt BufferPool.java > $(TARGET)/BuffBuff2/BufferPool.java
	cat Copyright.txt BufferADT.book > $(TARGET)/BuffBuff2/BufferADT.java
	cat Copyright.txt Buffer.java > $(TARGET)/BuffBuff2/Buffer.java

d9: 
	-mkdir $(TARGET)/HashSim
	cat Copyright.txt HashSim.java > $(TARGET)/HashSim/HashSim.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/HashSim/DSutil.java
	-mkdir $(TARGET)/Hash
	cat Copyright.txt KVpair.book > $(TARGET)/Hash/KVpair.java
	cat Copyright.txt Hashtab1.txt HashIns.book HashSch.book Hashtab2.txt > $(TARGET)/Hash/HashTable.java
	cat Copyright.txt Hash1.txt Sfold.book Hchar.book Hint.book Hash2.txt > $(TARGET)/Hash/HashTest.java
	-mkdir $(TARGET)/Hashdict
	cat Copyright.txt KVpair.book > $(TARGET)/Hashdict/KVpair.java
	cat Copyright.txt Dictionary.book > $(TARGET)/Hashdict/Dictionary.java
	cat Copyright.txt HashTable.java > $(TARGET)/Hashdict/HashTable.java
	cat Copyright.txt hashdict1.book > $(TARGET)/Hashdict/HashDictionary.java
	cat Copyright.txt HashdictTest.java > $(TARGET)/Hashdict/HashdictTest.java

d10:
	-mkdir $(TARGET)/TTTree
	cat Copyright.txt TTTest.java > $(TARGET)/TTTree/TTTest.java
	cat Copyright.txt Dictionary.book > $(TARGET)/TTTree/Dictionary.java
	cat Copyright.txt TTNode.book TTNodeAdd.book TTNode.txt > $(TARGET)/TTTree/TTNode.java
	cat Copyright.txt TTTree.txt TTins.book TTfind.book close.txt > $(TARGET)/TTTree/TTTree.java
	-mkdir $(TARGET)/BPTree
	cat Copyright.txt BPTest.java > $(TARGET)/BPTree/BPTest.java
	cat Copyright.txt Dictionary.book > $(TARGET)/BPTree/Dictionary.java
	cat Copyright.txt BPNode.book > $(TARGET)/BPTree/BPNode.java
	cat Copyright.txt BPLeaf.java > $(TARGET)/BPTree/BPLeaf.java
	cat Copyright.txt BPInternal.java > $(TARGET)/BPTree/BPInternal.java
	cat Copyright.txt BPTree.txt BPinsert.book BPfind.book BPremove.book close.txt> $(TARGET)/BPTree/BPTree.java


d11:
	-mkdir $(TARGET)/Grtestm
	cat Copyright.txt Graph.book > $(TARGET)/Grtestm/Graph.java
	cp Bkexamp.gph $(TARGET)/Grtestm/testfile.gph
	cat Copyright.txt GraphTest1.txt Grtestm.txt > $(TARGET)/Grtestm/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grtestm/Graphm.java
	-mkdir $(TARGET)/Grtestl
	cat Copyright.txt Graph.book > $(TARGET)/Grtestl/Graph.java
	cat Copyright.txt Edge.book > $(TARGET)/Grtestl/Edge.java
	cp Bkexamp.gph $(TARGET)/Grtestl/testfile.gph
	cat Copyright.txt GraphTest1.txt Grtestl.txt > $(TARGET)/Grtestl/GraphTest.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grtestl/Graphl.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grtestl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grtestl/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grtestl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grtestl/LList.java
	-mkdir $(TARGET)/Grdfsm
	cat Copyright.txt Graph.book > $(TARGET)/Grdfsm/Graph.java
	cp Bkexamp.gph $(TARGET)/Grdfsm/testfile.gph
	cat Copyright.txt GraphTest1.txt Grdfs.txt Grgentrav.book Grdfs.book GrdfsTestm.txt > $(TARGET)/Grdfsm/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grdfsm/Graphm.java
	-mkdir $(TARGET)/Grdfsl
	cat Copyright.txt Graph.book > $(TARGET)/Grdfsl/Graph.java
	cat Copyright.txt Edge.book > $(TARGET)/Grdfsl/Edge.java
	cp Bkexamp.gph $(TARGET)/Grdfsl/testfile.gph
	cat Copyright.txt GraphTest1.txt Grdfs.txt Grdfs.book GrdfsTestl.txt > $(TARGET)/Grdfsl/GraphTest.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grdfsl/Graphl.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grdfsl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grdfsl/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grdfsl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grdfsl/LList.java
	-mkdir $(TARGET)/Grbfsm
	cat Copyright.txt Graph.book > $(TARGET)/Grbfsm/Graph.java
	cp Bkexamp.gph $(TARGET)/Grbfsm/testfile.gph
	cat Copyright.txt GraphTest1.txt Grbfs.txt Grbfs.book GrbfsTestm.txt > $(TARGET)/Grbfsm/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grbfsm/Graphm.java
	cat Copyright.txt Queue.book > $(TARGET)/Grbfsm/Queue.java
	cat Copyright.txt AQueue.book AQueue.txt > $(TARGET)/Grbfsm/AQueue.java
	-mkdir $(TARGET)/Grbfsl
	cat Copyright.txt Graph.book > $(TARGET)/Grbfsl/Graph.java
	cp Bkexamp.gph $(TARGET)/Grbfsl/testfile.gph
	cat Copyright.txt GraphTest1.txt Grbfs.txt Grbfs.book GrbfsTestl.txt > $(TARGET)/Grbfsl/GraphTest.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grbfsl/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grbfsl/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grbfsl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grbfsl/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grbfsl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grbfsl/LList.java
	cat Copyright.txt Queue.book > $(TARGET)/Grbfsl/Queue.java
	cat Copyright.txt AQueue.book AQueue.txt > $(TARGET)/Grbfsl/AQueue.java
	-mkdir $(TARGET)/Grtopdm
	cat Copyright.txt Graph.book > $(TARGET)/Grtopdm/Graph.java
	cp Bktsort.gph $(TARGET)/Grtopdm/testfile.gph
	cat Copyright.txt GraphTest1.txt Grtop.txt Grtopd.book GrtopdTestm.txt > $(TARGET)/Grtopdm/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grtopdm/Graphm.java
	-mkdir $(TARGET)/Grtopdl
	cat Copyright.txt Graph.book > $(TARGET)/Grtopdl/Graph.java
	cp Bktsort.gph $(TARGET)/Grtopdl/testfile.gph
	cat Copyright.txt GraphTest1.txt Grtop.txt Grtopd.book GrtopdTestl.txt > $(TARGET)/Grtopdl/GraphTest.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grtopdl/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grtopdl/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grtopdl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grtopdl/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grtopdl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grtopdl/LList.java
	-mkdir $(TARGET)/Grtopbm
	cat Copyright.txt Graph.book > $(TARGET)/Grtopbm/Graph.java
	cp Bktsort.gph $(TARGET)/Grtopbm/testfile.gph
	cat Copyright.txt GraphTest1.txt Grtop.txt Grtopb.book GrtopbTestm.txt > $(TARGET)/Grtopbm/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grtopbm/Graphm.java
	cat Copyright.txt Queue.book > $(TARGET)/Grtopbm/Queue.java
	cat Copyright.txt AQueue.book AQueue.txt > $(TARGET)/Grtopbm/AQueue.java
	-mkdir $(TARGET)/Grtopbl
	cat Copyright.txt Graph.book > $(TARGET)/Grtopbl/Graph.java
	cp Bktsort.gph $(TARGET)/Grtopbl/testfile.gph
	cat Copyright.txt GraphTest1.txt Grtop.txt Grtopb.book GrtopbTestl.txt > $(TARGET)/Grtopbl/GraphTest.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grtopbl/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grtopbl/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grtopbl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grtopbl/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grtopbl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grtopbl/LList.java
	cat Copyright.txt Queue.book > $(TARGET)/Grtopbl/Queue.java
	cat Copyright.txt AQueue.book AQueue.txt > $(TARGET)/Grtopbl/AQueue.java
	-mkdir $(TARGET)/Grdijk1m
	cat Copyright.txt Graph.book > $(TARGET)/Grdijk1m/Graph.java
	cp Bkdijk.gph $(TARGET)/Grdijk1m/testfile.gph
	cat Copyright.txt GraphTest1.txt Grdijk.txt MinVert.book Grdijk1.book GrdijkTestm.txt > $(TARGET)/Grdijk1m/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grdijk1m/Graphm.java
	-mkdir $(TARGET)/Grdijk1l
	cat Copyright.txt Graph.book > $(TARGET)/Grdijk1l/Graph.java
	cp Bkdijk.gph $(TARGET)/Grdijk1l/testfile.gph
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grdijk1l/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grdijk1l/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grdijk1l/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grdijk1l/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grdijk1l/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grdijk1l/LList.java
	cat Copyright.txt GraphTest1.txt Grdijk.txt MinVert.book Grdijk1.book GrdijkTestl.txt > $(TARGET)/Grdijk1l/GraphTest.java
	-mkdir $(TARGET)/Grdijk2m
	cat Copyright.txt Graph.book > $(TARGET)/Grdijk2m/Graph.java
	cp Bkdijk.gph $(TARGET)/Grdijk2m/testfile.gph
	cat Copyright.txt GraphTest1.txt Grdijk.txt Grdijk2.book GrdijkTestm.txt > $(TARGET)/Grdijk2m/GraphTest.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Grdijk2m/MinHeap.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Grdijk2m/DSutil.java
	cat Copyright.txt Comparable.txt DijkElem.book > $(TARGET)/Grdijk2m/DijkElem.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grdijk2m/Graphm.java
	-mkdir $(TARGET)/Grdijk2l
	cat Copyright.txt Graph.book > $(TARGET)/Grdijk2l/Graph.java
	cp Bkdijk.gph $(TARGET)/Grdijk2l/testfile.gph
	cat Copyright.txt GraphTest1.txt Grdijk.txt Grdijk2.book GrdijkTestl.txt > $(TARGET)/Grdijk2l/GraphTest.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Grdijk2l/MinHeap.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Grdijk2l/DSutil.java
	cat Copyright.txt DijkElem.book > $(TARGET)/Grdijk2l/DijkElem.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grdijk2l/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grdijk2l/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grdijk2l/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grdijk2l/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grdijk2l/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grdijk2l/LList.java
	-mkdir $(TARGET)/Grprim1m
	cat Copyright.txt Graph.book > $(TARGET)/Grprim1m/Graph.java
	cp Bkexamp.gph $(TARGET)/Grprim1m/testfile.gph
	cat Copyright.txt GraphTest1.txt Grprim.txt MinVert.book Grprim1.book GrprimTestm.txt > $(TARGET)/Grprim1m/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grprim1m/Graphm.java
	-mkdir $(TARGET)/Grprim1l
	cat Copyright.txt Graph.book > $(TARGET)/Grprim1l/Graph.java
	cp Bkexamp.gph $(TARGET)/Grprim1l/testfile.gph
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grprim1l/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grprim1l/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grprim1l/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grprim1l/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grprim1l/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grprim1l/LList.java
	cat Copyright.txt GraphTest1.txt Grprim.txt MinVert.book Grprim1.book GrprimTestl.txt > $(TARGET)/Grprim1l/GraphTest.java
	-mkdir $(TARGET)/Grprim2m
	cat Copyright.txt Graph.book > $(TARGET)/Grprim2m/Graph.java
	cp Bkexamp.gph $(TARGET)/Grprim2m/testfile.gph
	cat Copyright.txt GraphTest1.txt Grprim.txt Grprim2.book GrprimTestm.txt > $(TARGET)/Grprim2m/GraphTest.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Grprim2m/MinHeap.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Grprim2m/DSutil.java
	cat Copyright.txt DijkElem.book > $(TARGET)/Grprim2m/DijkElem.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grprim2m/Graphm.java
	-mkdir $(TARGET)/Grprim2l
	cat Copyright.txt Graph.book > $(TARGET)/Grprim2l/Graph.java
	cp Bkexamp.gph $(TARGET)/Grprim2l/testfile.gph
	cat Copyright.txt GraphTest1.txt Grprim.txt Grprim2.book GrprimTestl.txt > $(TARGET)/Grprim2l/GraphTest.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Grprim2l/MinHeap.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Grprim2l/DSutil.java
	cat Copyright.txt DijkElem.book > $(TARGET)/Grprim2l/DijkElem.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grprim2l/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grprim2l/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grprim2l/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grprim2l/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grprim2l/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grprim2l/LList.java
	-mkdir $(TARGET)/Grkrusm
	cat Copyright.txt Graph.book > $(TARGET)/Grkrusm/Graph.java
	cp Bkexamp.gph $(TARGET)/Grkrusm/testfile.gph
	cat Copyright.txt GraphTest1.txt Grkruskal.txt Grkruskal.book GrkruskalTestm.txt > $(TARGET)/Grkrusm/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grkrusm/Graphm.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Grkrusm/MinHeap.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Grkrusm/DSutil.java
	cat Copyright.txt KruskalElem.book > $(TARGET)/Grkrusm/KruskalElem.java
	cat Copyright.txt UFgtree.book UFpcfind.book UFgtree2.txt > $(TARGET)/Grkrusm/ParPtrTree.java
	-mkdir $(TARGET)/Grkrusl
	cat Copyright.txt Graph.book > $(TARGET)/Grkrusl/Graph.java
	cp Bkexamp.gph $(TARGET)/Grkrusl/testfile.gph
	cat Copyright.txt GraphTest1.txt Grkruskal.txt Grkruskal.book GrkruskalTestl.txt > $(TARGET)/Grkrusl/GraphTest.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Grkrusl/MinHeap.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Grkrusl/DSutil.java
	cat Copyright.txt KruskalElem.book > $(TARGET)/Grkrusl/KruskalElem.java
	cat Copyright.txt UFgtree.book UFpcfind.book UFgtree2.txt > $(TARGET)/Grkrusl/ParPtrTree.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grkrusl/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grkrusl/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grkrusl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grkrusl/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grkrusl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grkrusl/LList.java

d12:
	-mkdir $(TARGET)/Mem
	cat Copyright.txt MemManager.java > $(TARGET)/Mem/MemManager.java
	cat Copyright.txt MemManADT.book > $(TARGET)/Mem/MemManADT.java
	cat Copyright.txt MemMain.java > $(TARGET)/Mem/MemMain.java
	cat Copyright.txt MemHandle.java > $(TARGET)/Mem/MemHandle.java

d13:
	-mkdir $(TARGET)/KDtree
	cat Copyright.txt KDtree1.txt KDfind.book KDfindmin.book KDrshelp.book KDtree2.txt > $(TARGET)/KDtree/KDtree.java
	cat Copyright.txt BinNode.book > $(TARGET)/KDtree/BinNode.java
	cat Copyright.txt KDNode.java > $(TARGET)/KDtree/KDNode.java
	cat Copyright.txt Dictionary.book > $(TARGET)/KDtree/Dictionary.java
	cat Copyright.txt SpatialDictionary.book > $(TARGET)/KDtree/SpatialDictionary.java
	cat Copyright.txt KDmain.java > $(TARGET)/KDtree/KDmain.java

d14:
	-mkdir $(TARGET)/Grcon
	cat Copyright.txt Graph.book > $(TARGET)/Grcon/Graph.java
	cp Bkconcom.gph $(TARGET)/Grcon/testfile.gph
	cat Copyright.txt GraphTest1.txt Grconcom.txt Grconcom.book GrconcomTest.txt > $(TARGET)/Grcon/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grcon/Graphm.java
	-mkdir $(TARGET)/Ch14
	cat Copyright.txt ch14.txt incr.book ch14p2.book ch14b.txt > $(TARGET)/Ch14/Ch14.java

d15:
	-mkdir $(TARGET)/MinMax
	cat Copyright.txt DSutil1.txt permute.book minmax.book DSutil2.txt > $(TARGET)/MinMax/DSutil.java
	cat Copyright.txt MinMaxTest.java > $(TARGET)/MinMax/MinMaxTest.java


d16:
	-mkdir $(TARGET)/GrFloydm
	cat Copyright.txt Graph.book > $(TARGET)/GrFloydm/Graph.java
	cp Bkfloyd.gph $(TARGET)/GrFloydm/testfile.gph
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/GrFloydm/Graphm.java
	cat Copyright.txt GraphTest1.txt GrFloyd.txt GrFloyd.book GrFloydTestm.txt > $(TARGET)/GrFloydm/GraphTest.java
	-mkdir $(TARGET)/GrFloydl
	cat Copyright.txt Graph.book > $(TARGET)/GrFloydl/Graph.java
	cp Bkfloyd.gph $(TARGET)/GrFloydl/testfile.gph
	cat Copyright.txt GraphTest1.txt GrFloyd.txt GrFloyd.book GrFloydTestl.txt > $(TARGET)/GrFloydl/GraphTest.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/GrFloydl/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/GrFloydl/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/GrFloydl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/GrFloydl/List.java
	cat Copyright.txt Link.book > $(TARGET)/GrFloydl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/GrFloydl/LList.java
	-mkdir $(TARGET)/Skiplist
	cat Copyright.txt Skipl1.txt Skiprand.book Skipins.book Skipsch.book Skipl2.txt > $(TARGET)/Skiplist/SkipList.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Skiplist/DSutil.java
	cat Copyright.txt Dictionary.book > $(TARGET)/Skiplist/Dictionary.java
	cat Copyright.txt SkipNode.java > $(TARGET)/Skiplist/SkipNode.java
	cat Copyright.txt Skipmain.java > $(TARGET)/Skiplist/Skipmain.java

### Cleanup Section ########################################################

clean: cleandist clean2 clean3 clean4 clean5 clean6 clean7 clean8 clean9 clean10 clean11 clean12 clean13 clean14  clean15 clean16
	-rm *~ *.class

cleandist:
	cd $(TARGET); \
	rm -rf DSdistrib.zip

clean2:
	cd $(TARGET); \
	rm -rf Rfact Permute Largest ToH Fib Terminate

clean3:
	cd $(TARGET); \
	rm -rf Flag Ch3 Bsearch Collatz Binsimp

clean4:
	cd $(TARGET); \
	rm -rf Alist Llist Flist Dlist Astack Lstack Aqueue Lqueue Ch4 Sfact ToHstack UALdict Payroll SAlist GenericTest SALdict

clean5:
	cd $(TARGET); \
	rm -rf Preorder Var VarC Huffman BST MaxHeap MinHeap

clean6:
	cd $(TARGET); \
	rm -rf GenTree Equiv Equivpc

clean7:
	cd $(TARGET); \
	rm -rf Inssort Inssortopt Bubsort Selsort Shsort Qsort1 Qsortsimp Qsort4 Mrgsort1 Mrgsort2 Heapsort Radix

clean8:
	cd $(TARGET); \
	rm -rf Genfile Genfile2 Test Test2 Test3 Exmrg1 Exmrg2 Exmrg3 BuffMsg BuffBuff BuffBuff2

clean9:
	cd $(TARGET); \
	rm -rf HashSim Hash Hashdict

clean10:
	cd $(TARGET); \
	rm -rf  TTTree BPTree

clean11:
	cd $(TARGET); \
	rm -rf Grtestm Grtestl Grdfsm Grdfsl Grbfsm Grbfsl Grtopdm Grtopdl Grtopbm Grtopbl Grdijk1m Grdijk1l Grdijk2m Grdijk2l GrFloydm GrFloydl Grprim1m Grprim1l Grprim2m Grprim2l Grkrusm Grkrusl

clean12:
	cd $(TARGET); \
	rm -rf Mem

clean13:
	cd $(TARGET); \
	rm -rf KDtree

clean14:
	cd $(TARGET); \
	rm -rf Grcon Ch14

clean15:
	cd $(TARGET); \
	rm -rf MinMax

clean16:
	cd $(TARGET); \
	rm -rf GrFloydm GrFloydl Skiplist

#### Do the actual code compilations here ##################################

#### Chapter 2 #############################################################

Rfact: $(TARGET)/Rfact/FactTest.class

$(TARGET)/Rfact/FactTest.class: fact1.txt rfact.book fact2.txt
	-mkdir $(TARGET)/Rfact
	cat Copyright.txt fact1.txt rfact.book fact2.txt > $(TARGET)/Rfact/FactTest.java
	cd $(TARGET)/Rfact; \
	javac $(CFLAGS) FactTest.java; \
	java $(RFLAGS) FactTest

Permute: $(TARGET)/Permute/PermuteTest.class

$(TARGET)/Permute/PermuteTest.class: DSutil1.txt permute.book DSutil2.txt PermuteTest.java
	-mkdir $(TARGET)/Permute
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Permute/DSutil.java
	cat Copyright.txt PermuteTest.java > $(TARGET)/Permute/PermuteTest.java
	cd $(TARGET)/Permute; \
	javac $(CFLAGS) PermuteTest.java; \
	java $(RFLAGS) PermuteTest

Largest: $(TARGET)/Largest/LargeTest.class

$(TARGET)/Largest/LargeTest.class: large1.txt largest.book large2.txt
	-mkdir $(TARGET)/Largest
	cat Copyright.txt large1.txt largest.book large2.txt > $(TARGET)/Largest/LargeTest.java
	cd $(TARGET)/Largest; \
	javac $(CFLAGS) LargeTest.java; \
	java $(RFLAGS) LargeTest

ToH: $(TARGET)/ToH/ToHTest.class

$(TARGET)/ToH/ToHTest.class: TOH1.txt TOH.book TOH2.txt Pole.java
	-mkdir $(TARGET)/ToH
	cat Copyright.txt TOH1.txt TOH.book TOH2.txt > $(TARGET)/ToH/ToHTest.java
	cat Copyright.txt Pole.java > $(TARGET)/ToH/Pole.java
	cd $(TARGET)/ToH; \
	javac $(CFLAGS) ToHTest.java; \
	java $(RFLAGS) ToHTest

Fib: $(TARGET)/Fib/FibTest.class

$(TARGET)/Fib/FibTest.class: fib1.txt fibi.book fibr.book fib2.txt
	-mkdir $(TARGET)/Fib
	cat Copyright.txt fib1.txt fibi.book fibr.book fib2.txt > $(TARGET)/Fib/FibTest.java
	cd $(TARGET)/Fib; \
	javac $(CFLAGS) FibTest.java; \
	java $(RFLAGS) FibTest

Terminate: $(TARGET)/Terminate/TerminateTest.class

$(TARGET)/Terminate/TerminateTest.class: term1.txt terminate.book term2.txt
	-mkdir $(TARGET)/Terminate
	cat Copyright.txt term1.txt terminate.book term2.txt > $(TARGET)/Terminate/TerminateTest.java
	cd $(TARGET)/Terminate; \
	javac $(CFLAGS) TerminateTest.java; \
	java $(RFLAGS) TerminateTest


#### Chapter 3 #############################################################

Flag: $(TARGET)/Flag/Flag.class

$(TARGET)/Flag/Flag.class: Flag.java
	-mkdir $(TARGET)/Flag
	cat Copyright.txt Flag.java > $(TARGET)/Flag/Flag.java
	cd $(TARGET)/Flag; \
	javac Flag.java;

Ch3: $(TARGET)/Ch3/Ch3.class

$(TARGET)/Ch3/Ch3.class: ch3a.txt c3p1.book ch3b.txt c3p2.book ch3c.txt c3p3.book ch3d.txt c3p4.book ch3e.txt c3p5.book ch3f.txt c3p6.book ch3n.txt c3p16.book ch3g.txt c3p7.book ch3h.txt c3p8.book ch3i.txt c3p9.book ch3j.txt c3p10.book ch3k.txt c3p11.book ch3l.txt c3p12.book c3p13.book ch3o.txt c3p14.book c3p15.book c3p16.book ch3m.txt DSutil1.txt permute.book DSutil2.txt
	-mkdir $(TARGET)/Ch3
	cat Copyright.txt ch3a.txt c3p1.book ch3b.txt c3p2.book ch3c.txt c3p3.book ch3d.txt c3p4.book ch3e.txt c3p5.book ch3f.txt c3p6.book ch3n.txt c3p16.book ch3g.txt c3p7.book ch3h.txt c3p8.book ch3i.txt c3p9.book ch3j.txt c3p10.book ch3k.txt c3p11.book ch3l.txt c3p12.book c3p13.book ch3o.txt c3p14.book c3p15.book c3p16.book ch3m.txt > $(TARGET)/Ch3/Ch3.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Ch3/DSutil.java
	cd $(TARGET)/Ch3; \
	javac Ch3.java

Bsearch: $(TARGET)/Bsearch/BsearchTest.class

$(TARGET)/Bsearch/BsearchTest.class: bsearch1.txt bsearch.book bsearch2.txt
	-mkdir $(TARGET)/Bsearch
	cat Copyright.txt bsearch1.txt bsearch.book bsearch2.txt > $(TARGET)/Bsearch/BsearchTest.java
	cd $(TARGET)/Bsearch; \
	javac $(CFLAGS) BsearchTest.java; \
	java $(RFLAGS) BsearchTest

Collatz: $(TARGET)/Collatz/Collatz.class

$(TARGET)/Collatz/Collatz.class: collatz1.txt collatz.book collatz2.txt
	-mkdir $(TARGET)/Collatz
	cat Copyright.txt collatz1.txt collatz.book collatz2.txt > $(TARGET)/Collatz/Collatz.java
	cd $(TARGET)/Collatz; \
	javac Collatz.java;

Binsimp: $(TARGET)/Binsimp/Binsimp.class

$(TARGET)/Binsimp/Binsimp.class: binsimpa.txt binsimpb.txt binsimp1.book binsimpc.txt binsimp2.book DSutil1.txt permute.book DSutil2.txt binsort.book binsimpstart.txt
	-mkdir $(TARGET)/Binsimp
	cat Copyright.txt binsimpstart.txt binsort.book binsimpa.txt binsimp1.book binsimpb.txt binsimp2.book binsimpc.txt > $(TARGET)/Binsimp/Binsimp.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Binsimp/DSutil.java
	cat Copyright.txt List.book > $(TARGET)/Binsimp/List.java
	cat Copyright.txt Link.book > $(TARGET)/Binsimp/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Binsimp/LList.java
	cd $(TARGET)/Binsimp; \
	javac Binsimp.java

#### Chapter 4 #############################################################

Alist: $(TARGET)/Alist/ListTest.class

$(TARGET)/Alist/ListTest.class: Lmain1.txt listfind.book ALmain.txt Lmain2.txt List.book AList1.book AList2.book Alist3.txt
	-mkdir $(TARGET)/Alist
	cat Copyright.txt Lmain1.txt listfind.book ALmain.txt Lmain2.txt > $(TARGET)/Alist/ListTest.java
	cat Copyright.txt List.book > $(TARGET)/Alist/List.java
	cat Copyright.txt AList1.book AList2.book Alist3.txt > $(TARGET)/Alist/AList.java
	cat Copyright.txt KVpair.book > $(TARGET)/Alist/KVpair.java
	cat Copyright.txt Payroll.book > $(TARGET)/Alist/Payroll.java
	cd $(TARGET)/Alist; \
	javac $(CFLAGS) ListTest.java; \
	java $(RFLAGS) ListTest

Llist: $(TARGET)/Llist/ListTest.class

$(TARGET)/Llist/ListTest.class: Lmain1.txt listfind.book LLmain.txt Lmain2.txt List.book Link.book LList1.book LList2.book Alist3.txt
	-mkdir $(TARGET)/Llist
	cat Copyright.txt Lmain1.txt listfind.book LLmain.txt Lmain2.txt > $(TARGET)/Llist/ListTest.java
	cat Copyright.txt List.book > $(TARGET)/Llist/List.java
	cat Copyright.txt Link.book > $(TARGET)/Llist/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Llist/LList.java
	cd $(TARGET)/Llist; \
	javac $(CFLAGS) ListTest.java; \
	java $(RFLAGS) ListTest

Flist: $(TARGET)/Flist/ListTest.class

$(TARGET)/Flist/ListTest.class: Lmain1.txt listfind.book LLmain.txt Lmain2.txt List.book Flink.book Flist1.txt Flist.book Flist2.txt
	-mkdir $(TARGET)/Flist
	cat Copyright.txt Lmain1.txt listfind.book LLmain.txt Lmain2.txt > $(TARGET)/Flist/ListTest.java
	cat Copyright.txt List.book > $(TARGET)/Flist/List.java
	cat Copyright.txt Flink.book > $(TARGET)/Flist/Link.java
	cat Copyright.txt Flist1.txt Flist.book Flist2.txt Alist3.txt > $(TARGET)/Flist/LList.java
	cd $(TARGET)/Flist; \
	javac $(CFLAGS) ListTest.java; \
	java $(RFLAGS) ListTest

Dlist: $(TARGET)/Dlist/ListTest.class

$(TARGET)/Dlist/ListTest.class: Lmain1.txt listfind.book DLmain.txt Lmain2.txt List.book DLink.book Dlist1.txt Dlist.book Dlist2.txt
	-mkdir $(TARGET)/Dlist
	cat Lmain1.txt listfind.book DLmain.txt Lmain2.txt > $(TARGET)/Dlist/ListTest.java
	cat Copyright.txt List.book > $(TARGET)/Dlist/List.java
	cat Copyright.txt DLink.book > $(TARGET)/Dlist/DLink.java
	cat Copyright.txt Dlist1.txt Dlist.book Dlist2.txt Alist3.txt > $(TARGET)/Dlist/LList.java
	cd $(TARGET)/Dlist; \
	javac $(CFLAGS) ListTest.java; \
	java $(RFLAGS) ListTest

Astack: $(TARGET)/Astack/StackTest.class

$(TARGET)/Astack/StackTest.class: Stack.book AStack.book AStack.txt Stkmain1.txt ASmain.txt Stkmain2.txt
	-mkdir $(TARGET)/Astack
	cat Copyright.txt Stack.book > $(TARGET)/Astack/Stack.java
	cat Copyright.txt AStack.book AStack.txt > $(TARGET)/Astack/AStack.java
	cat Copyright.txt Stkmain1.txt ASmain.txt Stkmain2.txt > $(TARGET)/Astack/StackTest.java
	cd $(TARGET)/Astack; \
	javac $(CFLAGS) StackTest.java; \
	java $(RFLAGS) StackTest

Lstack: $(TARGET)/Lstack/StackTest.class

$(TARGET)/Lstack/StackTest.class: Link.book Stack.book LStack.book LStack.txt Stkmain1.txt LSmain.txt Stkmain2.txt
	-mkdir $(TARGET)/Lstack
	cat Copyright.txt Stack.book > $(TARGET)/Lstack/Stack.java
	cat Copyright.txt Link.book > $(TARGET)/Lstack/Link.java
	cat Copyright.txt LStack.book LStack.txt > $(TARGET)/Lstack/LStack.java
	cat Stkmain1.txt LSmain.txt Stkmain2.txt > $(TARGET)/Lstack/StackTest.java
	cd $(TARGET)/Lstack; \
	javac $(CFLAGS) StackTest.java; \
	java $(RFLAGS) StackTest

Aqueue: $(TARGET)/Aqueue/QueueTest.class

$(TARGET)/Aqueue/QueueTest.class: Queue.book AQueue.book AQueue.txt Qmain1.txt AQmain.txt Qmain2.txt
	-mkdir $(TARGET)/Aqueue
	cat Copyright.txt Queue.book > $(TARGET)/Aqueue/Queue.java
	cat Copyright.txt AQueue.book AQueue.txt > $(TARGET)/Aqueue/AQueue.java
	cat Copyright.txt Qmain1.txt AQmain.txt Qmain2.txt > $(TARGET)/Aqueue/QueueTest.java
	cd $(TARGET)/Aqueue; \
	javac $(CFLAGS) QueueTest.java; \
	java $(RFLAGS) QueueTest

Lqueue: $(TARGET)/Lqueue/QueueTest.class

$(TARGET)/Lqueue/QueueTest.class: Link.book Queue.book LQueue.book Qmain1.txt LQmain.txt Qmain2.txt
	-mkdir $(TARGET)/Lqueue
	cat Copyright.txt Link.book > $(TARGET)/Lqueue/Link.java
	cat Copyright.txt Queue.book > $(TARGET)/Lqueue/Queue.java
	cat Copyright.txt LQueue.book LQueue.txt> $(TARGET)/Lqueue/LQueue.java
	cat Qmain1.txt LQmain.txt Qmain2.txt > $(TARGET)/Lqueue/QueueTest.java
	cd $(TARGET)/Lqueue; \
	javac $(CFLAGS) QueueTest.java; \
	java $(RFLAGS) QueueTest

Sfact: $(TARGET)/Sfact/FactTest.class

$(TARGET)/Sfact/FactTest.class: fact1.txt sfact.book fact2.txt AStack.txt
	-mkdir $(TARGET)/Sfact
	cat Copyright.txt fact1.txt sfact.book fact2.txt > $(TARGET)/Sfact/FactTest.java
	cat Copyright.txt Stack.book > $(TARGET)/Sfact/Stack.java
	cat Copyright.txt AStack.book AStack.txt > $(TARGET)/Sfact/AStack.java
	cd $(TARGET)/Sfact; \
	javac $(CFLAGS) FactTest.java; \
	java $(RFLAGS) FactTest

GenericTest: $(TARGET)/GenericTest/GenericTest.class

 $(TARGET)/GenericTest/GenericTest.class: GenericTest.java KVpair.book
	-mkdir $(TARGET)/GenericTest
	cat Copyright.txt KVpair.book > $(TARGET)/GenericTest/KVpair.java
	cat Copyright.txt GenericTest.java >  $(TARGET)/GenericTest/GenericTest.java
	cd $(TARGET)/GenericTest; \
	javac GenericTest.java

Ch4: $(TARGET)/Ch4/Ch4.class

TOHstack: $(TARGET)/ToHstack/ToHTest.class

$(TARGET)/ToHstack/ToHTest.class: TOHstk1.txt TOHstack.book TOHstk2.txt TOHobj.book Stack.book AStack.book Pole.java TOH2.txt operation.book AStack.txt
	-mkdir $(TARGET)/ToHstack
	cat Copyright.txt operation.book > $(TARGET)/ToHstack/operation.java
	cat Copyright.txt Pole.java > $(TARGET)/ToHstack/Pole.java
	cat Copyright.txt TOHobj.book > $(TARGET)/ToHstack/TOHobj.java
	cat Copyright.txt TOH1.txt TOHstack.book TOH2.txt > $(TARGET)/ToHstack/ToHTest.java
	cat Copyright.txt Stack.book > $(TARGET)/ToHstack/Stack.java
	cat Copyright.txt AStack.book AStack.txt > $(TARGET)/ToHstack/AStack.java
	cd $(TARGET)/ToHstack; \
	javac $(CFLAGS) ToHTest.java; \
	java $(RFLAGS) ToHTest

UALdict: $(TARGET)/UALdict/DictTest.class

$(TARGET)/UALdict/DictTest.class: Dictionary.book UALdict1.book UALdict2.book KVpair.book UALdictTest.java List.book AList1.book AList2.book Alist3.txt
	-mkdir $(TARGET)/UALdict
	cat Copyright.txt Dictionary.book > $(TARGET)/UALdict/Dictionary.java
	cat Copyright.txt UALdict1.book UALdict2.book> $(TARGET)/UALdict/UALdictionary.java
	cat Copyright.txt KVpair.book > $(TARGET)/UALdict/KVpair.java
	cat Copyright.txt UALdictTest.java > $(TARGET)/UALdict/DictTest.java
	cat Copyright.txt List.book > $(TARGET)/UALdict/List.java
	cat Copyright.txt AList1.book AList2.book Alist3.txt> $(TARGET)/UALdict/AList.java
	cd $(TARGET)/UALdict; \
	javac $(CFLAGS) DictTest.java; \
	java $(RFLAGS) DictTest

Payroll: $(TARGET)/Payroll/PayrollTest.class

$(TARGET)/Payroll/PayrollTest.class: Dictionary.book UALdict1.book UALdict2.book KVpair.book List.book AList1.book AList2.book Payroll.book PayrollMain.book PayrollMain1.txt PayrollMain2.txt
	-mkdir $(TARGET)/Payroll
	cat Copyright.txt Dictionary.book > $(TARGET)/Payroll/Dictionary.java
	cat Copyright.txt UALdict1.book UALdict2.book> $(TARGET)/Payroll/UALdictionary.java
	cat Copyright.txt KVpair.book > $(TARGET)/Payroll/KVpair.java
	cat Copyright.txt List.book > $(TARGET)/Payroll/List.java
	cat Copyright.txt Payroll.book > $(TARGET)/Payroll/Payroll.java
	cat Copyright.txt PayrollMain1.txt PayrollMain.book PayrollMain2.txt > $(TARGET)/Payroll/PayrollTest.java
	cat Copyright.txt AList1.book AList2.book Alist3.txt > $(TARGET)/Payroll/AList.java
	cd $(TARGET)/Payroll; \
	javac $(CFLAGS) PayrollTest.java; \
	java $(RFLAGS) PayrollTest

$(TARGET)/Ch4/Ch4.class: Ch4a.txt listiter.book ch4p1.book ch4p4.book Ch4fin.txt List.book AList1.book AList2.book Dictionary.book UALdict1.book UALdict2.book KVpair.book ch4p2.book ch4p3.book
	-mkdir $(TARGET)/Ch4
	cat Copyright.txt Ch4a.txt ch4p2.book ch4p3.book listiter.book ch4p1.book ch4p4.book Ch4fin.txt > $(TARGET)/Ch4/Ch4.java
	cat Copyright.txt List.book > $(TARGET)/Ch4/List.java
	cat Copyright.txt AList1.book AList2.book Alist3.txt > $(TARGET)/Ch4/AList.java
	cat Copyright.txt Dictionary.book > $(TARGET)/Ch4/Dictionary.java
	cat Copyright.txt UALdict1.book UALdict2.book> $(TARGET)/Ch4/UALdictionary.java
	cat Copyright.txt KVpair.book > $(TARGET)/Ch4/KVpair.java
	cd $(TARGET)/Ch4; \
	javac Ch4.java

SAlist: $(TARGET)/SAlist/SortedTest.class

$(TARGET)/SAlist/SortedTest.class: SLmain.java SortedList.book SAlist.book
	-mkdir $(TARGET)/SAlist
	cat Copyright.txt SLmain.java > $(TARGET)/SAlist/SortedTest.java
	cat Copyright.txt KVpair.book > $(TARGET)/SAlist/KVpair.java
	cat Copyright.txt Payroll.book > $(TARGET)/SAlist/Payroll.java
	cat Copyright.txt SortedList.book > $(TARGET)/SAlist/SortedList.java
	cat Copyright.txt SAlist.book > $(TARGET)/SAlist/SAList.java
	cd $(TARGET)/SAlist; \
	javac $(CFLAGS) SortedTest.java; \
	java $(RFLAGS) SortedTest

SALdict: $(TARGET)/SALdict/DictTest.class

$(TARGET)/SALdict/DictTest.class: Dictionary.book SALdictTest.java SortedList.book SAlist.book SALdictionary.java
	-mkdir $(TARGET)/SALdict
	cat Copyright.txt Dictionary.book > $(TARGET)/SALdict/Dictionary.java
	cat Copyright.txt SortedList.book > $(TARGET)/SALdict/SortedList.java
	cat Copyright.txt SAlist.book > $(TARGET)/SALdict/SAList.java
	cat Copyright.txt SALdictionary.java > $(TARGET)/SALdict/SALdictionary.java
	cat Copyright.txt KVpair.book > $(TARGET)/SALdict/KVpair.java
	cat Copyright.txt SALdictTest.java > $(TARGET)/SALdict/DictTest.java
	cd $(TARGET)/SALdict; \
	javac $(CFLAGS) DictTest.java; \
	java $(RFLAGS) DictTest

#### Chapter 5 #############################################################

Preorder: $(TARGET)/Preorder/PreorderTest.class

$(TARGET)/Preorder/PreorderTest.class: preorder1.txt preorder2.txt preorder.book BinNode.book BSTNode.book preorder2.book checkBST.book count.book
	-mkdir $(TARGET)/Preorder
	cat Copyright.txt preorder1.txt preorder.book preorder2.book count.book checkBST.book preorder2.txt > $(TARGET)/Preorder/PreorderTest.java
	cat Copyright.txt BinNode.book > $(TARGET)/Preorder/BinNode.java
	cat Copyright.txt BSTNode.book > $(TARGET)/Preorder/BSTNode.java
	cd $(TARGET)/Preorder; \
	javac $(CFLAGS) PreorderTest.java; \
	java $(RFLAGS) PreorderTest

Var: $(TARGET)/Var/VarTest.class

$(TARGET)/Var/VarTest.class: VarBinNode.book VarLeafNode.book VarIntlNode.book VarMain1.txt traverse.book VarMain2.txt Visit.java
	-mkdir $(TARGET)/Var
	cat Copyright.txt Visit.java > $(TARGET)/Var/Visit.java
	cat Copyright.txt VarBinNode.book > $(TARGET)/Var/VarBinNode.java
	cat Copyright.txt VarLeafNode.book > $(TARGET)/Var/VarLeafNode.java
	cat Copyright.txt VarIntlNode.book > $(TARGET)/Var/VarIntlNode.java
	cat Copyright.txt VarMain1.txt traverse.book VarMain2.txt > $(TARGET)/Var/VarTest.java
	cd $(TARGET)/Var; \
	javac $(CFLAGS) VarTest.java; \
	java $(RFLAGS) VarTest

VarC: $(TARGET)/VarC/VarTest.class

$(TARGET)/VarC/VarTest.class: VarBinNodeC.book VarLeafNodeC.book VarIntlNodeC.book VarMain1.txt traverseC.book VarMain2.txt Visit.java
	-mkdir $(TARGET)/VarC
	cat Copyright.txt Visit.java > $(TARGET)/VarC/Visit.java
	cat Copyright.txt VarBinNodeC.book > $(TARGET)/VarC/VarBinNode.java
	cat Copyright.txt VarLeafNodeC.book > $(TARGET)/VarC/VarLeafNode.java
	cat Copyright.txt VarIntlNodeC.book > $(TARGET)/VarC/VarIntlNode.java
	cat Copyright.txt VarMain1.txt traverseC.book VarMain2.txt > $(TARGET)/VarC/VarTest.java
	cd $(TARGET)/VarC; \
	javac $(CFLAGS) VarTest.java; \
	java $(RFLAGS) VarTest

BST: $(TARGET)/BST/BSTTest.class

$(TARGET)/BST/BSTTest.class: BST1.book BSTfind.book BSTinsert.book BSTremove.book BST2.book BinNode.book BSTNode.book BSTdeletemin.book BSTgetmin.book BSTTest.java Dictionary.book BSTprint.book BST.txt Comparable.txt
	-mkdir $(TARGET)/BST
	cat Copyright.txt Dictionary.book > $(TARGET)/BST/Dictionary.java
	cat Copyright.txt BinNode.book > $(TARGET)/BST/BinNode.java
	cat Copyright.txt BSTNode.book > $(TARGET)/BST/BSTNode.java
	cat Copyright.txt Comparable.txt BST1.book BSTfind.book BSTinsert.book BSTremove.book BSTgetmin.book BSTdeletemin.book BSTprint.book BST.txt BST2.book > $(TARGET)/BST/BST.java
	cat Copyright.txt BSTTest.java > $(TARGET)/BST/BSTTest.java
	cd $(TARGET)/BST; \
	javac $(CFLAGS) BSTTest.java; \
	java $(RFLAGS) BSTTest

MaxHeap: $(TARGET)/MaxHeap/MaxHeapTest.class

$(TARGET)/MaxHeap/MaxHeapTest.class: DSutil1.txt permute.book DSutil2.txt MaxHeapTest.java Heap1.book Heap2.book Comparable.txt
	-mkdir $(TARGET)/MaxHeap
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/MaxHeap/DSutil.java
	cat Copyright.txt MaxHeapTest.java > $(TARGET)/MaxHeap/MaxHeapTest.java
	cat Copyright.txt Comparable.txt Heap1.book Heap2.book > $(TARGET)/MaxHeap/MaxHeap.java
	cd $(TARGET)/MaxHeap; \
	javac $(CFLAGS) MaxHeapTest.java; \
	java $(RFLAGS) MaxHeapTest

MinHeap: $(TARGET)/MinHeap/MinHeapTest.class

$(TARGET)/MinHeap/MinHeapTest.class: DSutil1.txt permute.book DSutil2.txt MinHeapTest.java MinHeap.java
	-mkdir $(TARGET)/MinHeap
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/MinHeap/DSutil.java
	cat Copyright.txt MinHeapTest.java > $(TARGET)/MinHeap/MinHeapTest.java
	cat Copyright.txt MinHeap.java > $(TARGET)/MinHeap/MinHeap.java
	cd $(TARGET)/MinHeap; \
	javac $(CFLAGS) MinHeapTest.java; \
	java $(RFLAGS) MinHeapTest

Huffman: $(TARGET)/Huffman/Huffman.class

$(TARGET)/Huffman/Huffman.class: DSutil1.txt permute.book DSutil2.txt MinHeap.java Code.java HuffBaseNode.book HuffLeafNode.book HuffInternalNode.book HuffTree.book Huffm1.txt Huffbld.book Huffm2.txt
	-mkdir $(TARGET)/Huffman
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Huffman/DSutil.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Huffman/MinHeap.java
	cat Copyright.txt Code.java > $(TARGET)/Huffman/Code.java
	cat Copyright.txt HuffBaseNode.book > $(TARGET)/Huffman/HuffBaseNode.java
	cat Copyright.txt HuffLeafNode.book > $(TARGET)/Huffman/HuffLeafNode.java
	cat Copyright.txt HuffInternalNode.book > $(TARGET)/Huffman/HuffInternalNode.java
	cat Copyright.txt HuffTree.book > $(TARGET)/Huffman/HuffTree.java
	cp huffex.dat hufftest.dat huffbook.dat $(TARGET)/Huffman
	cat Huffm1.txt Huffbld.book Huffm2.txt > $(TARGET)/Huffman/Huffman.java
	cd $(TARGET)/Huffman; \
	javac Huffman.java

#### Chapter 6 #############################################################

GenTree: $(TARGET)/GenTree/GenTreeTest.class

$(TARGET)/GenTree/GenTreeTest.class: GTNode.book GTNodeImpl.java GenTree.book GenTreeImpl.java GTmain1.txt GTprint.book GTmain2.txt
	-mkdir $(TARGET)/GenTree
	cat Copyright.txt GTNode.book > $(TARGET)/GenTree/GTNode.java
	cat Copyright.txt GTNodeImpl.java > $(TARGET)/GenTree/GTNodeImpl.java
	cat Copyright.txt GenTree.book > $(TARGET)/GenTree/GenTree.java
	cat Copyright.txt GenTreeImpl.java > $(TARGET)/GenTree/GenTreeImpl.java
	cat GTmain1.txt GTprint.book GTmain2.txt > $(TARGET)/GenTree/GenTreeTest.java
	cd $(TARGET)/GenTree; \
	javac $(CFLAGS) GenTreeTest.java; \
	java $(RFLAGS) GenTreeTest

Equiv: $(TARGET)/Equiv/UFTest.class

$(TARGET)/Equiv/UFTest.class: UFgtree.book UFfind.book UFgtree2.txt UFTest.java
	-mkdir $(TARGET)/Equiv
	cat Copyright.txt UFgtree.book UFfind.book UFgtree2.txt > $(TARGET)/Equiv/ParPtrTree.java
	cat Copyright.txt UFTest.java > $(TARGET)/Equiv/UFTest.java
	cd $(TARGET)/Equiv; \
	javac $(CFLAGS) UFTest.java; \
	java $(RFLAGS) UFTest

Equivpc: $(TARGET)/Equivpc/UFTest.class

$(TARGET)/Equivpc/UFTest.class: UFgtree.book UFpcfind.book UFgtree2.txt UFTest.java
	-mkdir $(TARGET)/Equivpc
	cat Copyright.txt UFgtree.book UFpcfind.book UFgtree2.txt > $(TARGET)/Equivpc/ParPtrTree.java
	cat Copyright.txt UFTest.java > $(TARGET)/Equivpc/UFTest.java
	cd $(TARGET)/Equivpc; \
	javac $(CFLAGS) UFTest.java; \
	java $(RFLAGS) UFTest

#### Chapter 7 #############################################################

Inssortopt: $(TARGET)/Inssortopt/SortTest.class

$(TARGET)/Inssortopt/SortTest.class: SortTest1.txt Inssortopt.txt SortTest2.txt DSutil1.txt permute.book DSutil2.txt Smain1.txt Smain2.txt
	-mkdir $(TARGET)/Inssortopt
	cat Copyright.txt SortTest1.txt Inssortopt.txt SortTest2.txt > $(TARGET)/Inssortopt/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Inssortopt/DSutil.java
	cat Copyright.txt Smain1.txt Inssort.txt Inssort.book Smain2.txt > $(TARGET)/Inssortopt/Sortmain.java
	cd $(TARGET)/Inssortopt; \
	javac $(CFLAGS) SortTest.java; \
	java $(RFLAGS) SortTest; \
	javac -Xlint Sortmain.java \

Inssort: $(TARGET)/Inssort/SortTest.class

$(TARGET)/Inssort/SortTest.class: SortTest1.txt Inssort.txt Inssort.book SortTest2.txt DSutil1.txt permute.book DSutil2.txt Smain1.txt Smain2.txt
	-mkdir $(TARGET)/Inssort
	cat Copyright.txt SortTest1.txt Inssort.txt Inssort.book SortTest2.txt > $(TARGET)/Inssort/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Inssort/DSutil.java
	cat Copyright.txt Smain1.txt Inssort.txt Inssort.book Smain2.txt > $(TARGET)/Inssort/Sortmain.java
	cd $(TARGET)/Inssort; \
	javac $(CFLAGS) SortTest.java; \
	java $(RFLAGS) SortTest; \
	javac -Xlint Sortmain.java \

Bubsort: $(TARGET)/Bubsort/SortTest.class

$(TARGET)/Bubsort/SortTest.class: SortTest1.txt Bubsort.txt Bubsort.book SortTest2.txt DSutil1.txt permute.book DSutil2.txt Smain1.txt Smain2.txt
	-mkdir $(TARGET)/Bubsort
	cat Copyright.txt SortTest1.txt Bubsort.txt Bubsort.book SortTest2.txt > $(TARGET)/Bubsort/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Bubsort/DSutil.java
	cat Copyright.txt Smain1.txt Bubsort.txt Bubsort.book Smain2.txt > $(TARGET)/Bubsort/Sortmain.java
	cd $(TARGET)/Bubsort; \
	javac $(CFLAGS) SortTest.java; \
	java $(RFLAGS) SortTest; \
	javac -Xlint Sortmain.java \

Selsort: $(TARGET)/Selsort/SortTest.class

$(TARGET)/Selsort/SortTest.class: SortTest1.txt Selsort.txt Selsort.book SortTest2.txt DSutil1.txt permute.book DSutil2.txt Smain1.txt Smain2.txt
	-mkdir $(TARGET)/Selsort
	cat Copyright.txt SortTest1.txt Selsort.txt Selsort.book SortTest2.txt > $(TARGET)/Selsort/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Selsort/DSutil.java
	cat Copyright.txt Smain1.txt Selsort.txt Selsort.book Smain2.txt > $(TARGET)/Selsort/Sortmain.java
	cd $(TARGET)/Selsort; \
	javac $(CFLAGS) SortTest.java; \
	java $(RFLAGS) SortTest; \
	javac -Xlint Sortmain.java \

Shsort: $(TARGET)/Shsort/SortTest.class

$(TARGET)/Shsort/SortTest.class: SortTest1.txt Shsort.txt Shsort.book SortTest2.txt DSutil1.txt permute.book DSutil2.txt Smain1.txt Smain2.txt
	-mkdir $(TARGET)/Shsort
	cat Copyright.txt SortTest1.txt Shsort.txt Shsort.book SortTest2.txt > $(TARGET)/Shsort/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Shsort/DSutil.java
	cat Copyright.txt Smain1.txt Shsort.txt Shsort.book Smain2.txt > $(TARGET)/Shsort/Sortmain.java
	cd $(TARGET)/Shsort; \
	javac $(CFLAGS) SortTest.java; \
	java $(RFLAGS) SortTest; \
	javac -Xlint Sortmain.java \

Qsort1: $(TARGET)/Qsort1/SortTest.class

$(TARGET)/Qsort1/SortTest.class: SortTest1.txt Qsort.txt Qsort1.book Partit.book Findpiv.book SortTest2.txt DSutil1.txt permute.book DSutil2.txt Smain1.txt Smain2.txt
	-mkdir $(TARGET)/Qsort1
	cat Copyright.txt SortTest1.txt Qsort.txt Qsort1.book Partit.book Findpiv.book SortTest2.txt > $(TARGET)/Qsort1/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Qsort1/DSutil.java
	cat Copyright.txt Smain1.txt Qsort.txt Qsort1.book Partit.book Findpiv.book Smain2.txt > $(TARGET)/Qsort1/Sortmain.java
	cd $(TARGET)/Qsort1; \
	javac $(CFLAGS) SortTest.java; \
	java $(RFLAGS) SortTest; \
	javac -Xlint Sortmain.java \

Qsortsimp: $(TARGET)/Qsortsimp/SortTest.class

$(TARGET)/Qsortsimp/SortTest.class: SortTest1.txt Qsort.txt Qsortsimp.txt Partitsimp.txt Findpiv.book SortTest2.txt DSutil1.txt permute.book DSutil2.txt Smain1.txt Smain2.txt
	-mkdir $(TARGET)/Qsortsimp
	cat Copyright.txt SortTest1.txt Qsort.txt Qsortsimp.txt Partitsimp.txt Findpiv.book SortTest2.txt > $(TARGET)/Qsortsimp/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Qsortsimp/DSutil.java
	cat Copyright.txt Smain1.txt Qsort.txt Qsortsimp.txt Partitsimp.txt Findpiv.book Smain2.txt > $(TARGET)/Qsortsimp/Sortmain.java
	cd $(TARGET)/Qsortsimp; \
	javac $(CFLAGS) SortTest.java; \
	java $(RFLAGS) SortTest; \
	javac -Xlint Sortmain.java \

Qsort4: $(TARGET)/Qsort4/SortTest.class

$(TARGET)/Qsort4/SortTest.class: SortTest1.txt Qsort.txt Qsort4.book Inssort3.txt SortTest2.txt DSutil1.txt permute.book DSutil2.txt Smain1.txt Smain2.txt
	-mkdir $(TARGET)/Qsort4
	cat Copyright.txt SortTest1.txt Qsort.txt Inssort3.txt Qsort4.book SortTest2.txt > $(TARGET)/Qsort4/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Qsort4/DSutil.java
	cat Copyright.txt Smain1.txt Qsort.txt Inssort3.txt Qsort4.book Smain2.txt > $(TARGET)/Qsort4/Sortmain.java
	cd $(TARGET)/Qsort4; \
	javac $(CFLAGS) SortTest.java; \
	java $(RFLAGS) SortTest; \
	javac -Xlint Sortmain.java \

Mrgsort1: $(TARGET)/Mrgsort1/SortTest.class

$(TARGET)/Mrgsort1/SortTest.class: SortTest1.txt Mrgsort.txt Mrgsort1.book SortTest2.txt DSutil1.txt permute.book DSutil2.txt Smain1.txt Smain2.txt
	-mkdir $(TARGET)/Mrgsort1
	cat Copyright.txt SortTest1.txt Mrgsort.txt Mrgsort1.book SortTest2.txt > $(TARGET)/Mrgsort1/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Mrgsort1/DSutil.java
	cat Copyright.txt Smain1.txt Mrgsort.txt Mrgsort1.book Smain2.txt > $(TARGET)/Mrgsort1/Sortmain.java
	cd $(TARGET)/Mrgsort1; \
	javac $(CFLAGS) SortTest.java; \
	java $(RFLAGS) SortTest; \
	javac -Xlint Sortmain.java \

Mrgsort2: $(TARGET)/Mrgsort2/SortTest.class

$(TARGET)/Mrgsort2/SortTest.class: SortTest1.txt Mrgsort.txt Inssortt.txt Mrgsort3.book SortTest2.txt DSutil1.txt permute.book DSutil2.txt Smain1.txt Smain2.txt
	-mkdir $(TARGET)/Mrgsort2
	cat Copyright.txt SortTest1.txt Mrgsort.txt Inssortt.txt Mrgsort3.book SortTest2.txt > $(TARGET)/Mrgsort2/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Mrgsort2/DSutil.java
	cat Copyright.txt Smain1.txt Mrgsort.txt Inssortt.txt Mrgsort3.book Smain2.txt > $(TARGET)/Mrgsort2/Sortmain.java
	cd $(TARGET)/Mrgsort2; \
	javac $(CFLAGS) SortTest.java; \
	java $(RFLAGS) SortTest; \
	javac -Xlint Sortmain.java \

Heapsort: $(TARGET)/Heapsort/SortTest.class

$(TARGET)/Heapsort/SortTest.class: SortTest1.txt Heapsort.txt Heapsort.book SortTest2.txt DSutil1.txt permute.book DSutil2.txt Heap1.book Heap2.book Smain1.txt Smain2.txt
	-mkdir $(TARGET)/Heapsort
	cat Copyright.txt SortTest1.txt Heapsort.txt Heapsort.book SortTest2.txt > $(TARGET)/Heapsort/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Heapsort/DSutil.java
	cat Copyright.txt Heap1.book Heap2.book > $(TARGET)/Heapsort/MaxHeap.java
	cat Copyright.txt Smain1.txt Heapsort.txt Heapsort.book Smain2.txt > $(TARGET)/Heapsort/Sortmain.java
	cd $(TARGET)/Heapsort; \
	javac $(CFLAGS) SortTest.java; \
	java $(RFLAGS) SortTest; \
	javac -Xlint Sortmain.java \

Radix: $(TARGET)/Radix/SortTest.class

$(TARGET)/Radix/SortTest.class: SortTest1.txt Radix.txt Radix.book Smain2.txt DSutil1.txt permute.book DSutil2.txt Smain1.txt Smain2.txt
	-mkdir $(TARGET)/Radix
	cat Copyright.txt SortTest1.txt Radix.txt Radix.book SortTest2.txt > $(TARGET)/Radix/SortTest.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Radix/DSutil.java
	cat Copyright.txt Smain1.txt Radix.txt Radix.book Smain2.txt > $(TARGET)/Radix/Sortmain.java
	cd $(TARGET)/Radix; \
	javac $(CFLAGS) SortTest.java; \
	java $(RFLAGS) SortTest; \
	javac -Xlint Sortmain.java \


#### Chapter 8 #############################################################

Genfile: $(TARGET)/Genfile/Genfile.class

$(TARGET)/Genfile/Genfile.class: Genfile.java DSutil1.txt permute.book DSutil2.txt
	-mkdir $(TARGET)/Genfile
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Genfile/DSutil.java
	cat Copyright.txt Genfile.java > $(TARGET)/Genfile/Genfile.java
	cd $(TARGET)/Genfile; \
	javac -Xlint Genfile.java

Genfile2: $(TARGET)/Genfile2/Genfile2.class

$(TARGET)/Genfile2/Genfile2.class: Genfile2.java DSutil1.txt permute.book DSutil2.txt
	-mkdir $(TARGET)/Genfile2
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Genfile2/DSutil.java
	cat Copyright.txt Genfile2.java > $(TARGET)/Genfile2/Genfile2.java
	cd $(TARGET)/Genfile2; \
	javac -Xlint Genfile2.java

Test: $(TARGET)/Test/Test.class

$(TARGET)/Test/Test.class: Test.java
	-mkdir $(TARGET)/Test
	cat Copyright.txt Test.java > $(TARGET)/Test/Test.java
	cd $(TARGET)/Test; \
	javac -Xlint Test.java

Test2: $(TARGET)/Test2/Test2.class

$(TARGET)/Test2/Test2.class: Test2.java
	-mkdir $(TARGET)/Test2
	cat Copyright.txt Test2.java > $(TARGET)/Test2/Test2.java
	cd $(TARGET)/Test2; \
	javac -Xlint Test2.java

Test3: $(TARGET)/Test3/Test3.class

$(TARGET)/Test3/Test3.class: Test3.java
	-mkdir $(TARGET)/Test3
	cat Copyright.txt Test3.java > $(TARGET)/Test3/Test3.java
	cd $(TARGET)/Test3; \
	javac -Xlint Test3.java

Exmrg1: $(TARGET)/Exmrg1/Exmrg1.class

$(TARGET)/Exmrg1/Exmrg1.class: Exmrg1.java
	-mkdir $(TARGET)/Exmrg1
	cat Copyright.txt Exmrg1.java > $(TARGET)/Exmrg1/Exmrg1.java
	cd $(TARGET)/Exmrg1; \
	javac -Xlint Exmrg1.java

Exmrg2: $(TARGET)/Exmrg2/Exmrg2.class

$(TARGET)/Exmrg2/Exmrg2.class: Exmrg2.java
	-mkdir $(TARGET)/Exmrg2
	cat Copyright.txt Exmrg2.java > $(TARGET)/Exmrg2/Exmrg2.java
	cd $(TARGET)/Exmrg2; \
	javac -Xlint Exmrg2.java

Exmrg3: $(TARGET)/Exmrg3/Exmrg3.class

$(TARGET)/Exmrg3/Exmrg3.class: Exmrg3.java
	-mkdir $(TARGET)/Exmrg3
	cat Copyright.txt Exmrg3.java > $(TARGET)/Exmrg3/Exmrg3.java
	cd $(TARGET)/Exmrg3; \
	javac -Xlint Exmrg3.java

BuffMsg: $(TARGET)/BuffMsg/BufferTest.class

$(TARGET)/BuffMsg/BufferTest.class: BuffMsgADT.book BuffMsg.java BufferTest.java
	-mkdir $(TARGET)/BuffMsg
	cat Copyright.txt BufferTest.java > $(TARGET)/BuffMsg/BufferTest.java
	cat Copyright.txt BuffMsgADT.book > $(TARGET)/BuffMsg/BufferPoolADT.java
	cat Copyright.txt BuffMsg.java > $(TARGET)/BuffMsg/BufferPool.java
	cd $(TARGET)/BuffMsg; \
	javac -Xlint BufferTest.java

BuffBuff: $(TARGET)/BuffBuff/BufferTest.class

$(TARGET)/BuffBuff/BufferTest.class: BuffBuffADT.book BuffBuff.java BufferTest.java
	-mkdir $(TARGET)/BuffBuff
	cat Copyright.txt BufferTest.java > $(TARGET)/BuffBuff/BufferTest.java
	cat Copyright.txt BuffBuffADT.book > $(TARGET)/BuffBuff/BufferPoolADT.java
	cat Copyright.txt BuffBuff.java > $(TARGET)/BuffBuff/BufferPool.java
	cd $(TARGET)/BuffBuff; \
	javac -Xlint BufferTest.java

BuffBuff2: $(TARGET)/BuffBuff2/BufferTest.class

$(TARGET)/BuffBuff2/BufferTest.class: BufferPoolADT.book BufferPool.java BufferADT.book Buffer.java BufferTest2.java
	-mkdir $(TARGET)/BuffBuff2
	cat Copyright.txt BufferTest2.java > $(TARGET)/BuffBuff2/BufferTest.java
	cat Copyright.txt BufferPoolADT.book > $(TARGET)/BuffBuff2/BufferPoolADT.java
	cat Copyright.txt BufferPool.java > $(TARGET)/BuffBuff2/BufferPool.java
	cat Copyright.txt BufferADT.book > $(TARGET)/BuffBuff2/BufferADT.java
	cat Copyright.txt Buffer.java > $(TARGET)/BuffBuff2/Buffer.java
	cd $(TARGET)/BuffBuff2; \
	javac -Xlint BufferTest.java

#### Chapter 9 ############################################################

HashSim: $(TARGET)/HashSim/HashSim.class

$(TARGET)/HashSim/HashSim.class: HashSim.java DSutil1.txt permute.book DSutil2.txt
	-mkdir $(TARGET)/HashSim
	cat Copyright.txt HashSim.java > $(TARGET)/HashSim/HashSim.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/HashSim/DSutil.java
	cd $(TARGET)/HashSim; \
	javac -Xlint HashSim.java

Hash: $(TARGET)/Hash/HashTest.class

$(TARGET)/Hash/HashTest.class: Hashtab1.txt HashIns.book HashSch.book Hashtab2.txt Hash1.txt Sfold.book Hchar.book Hint.book Hash2.txt
	-mkdir $(TARGET)/Hash
	cat Copyright.txt KVpair.book > $(TARGET)/Hash/KVpair.java
	cat Copyright.txt Hashtab1.txt HashIns.book HashSch.book Hashtab2.txt > $(TARGET)/Hash/HashTable.java
	cat Copyright.txt Hash1.txt Sfold.book Hchar.book Hint.book Hash2.txt > $(TARGET)/Hash/HashTest.java
	cd $(TARGET)/Hash; \
	javac $(CFLAGS) HashTest.java; \
	java $(RFLAGS) HashTest

Hashdict: $(TARGET)/Hashdict/HashdictTest.class

$(TARGET)/Hashdict/HashdictTest.class: Dictionary.book KVpair.book HashTable.java hashdict1.book HashdictTest.java
	-mkdir $(TARGET)/Hashdict
	cat Copyright.txt KVpair.book > $(TARGET)/Hashdict/KVpair.java
	cat Copyright.txt Dictionary.book > $(TARGET)/Hashdict/Dictionary.java
	cat Copyright.txt HashTable.java > $(TARGET)/Hashdict/HashTable.java
	cat Copyright.txt hashdict1.book > $(TARGET)/Hashdict/HashDictionary.java
	cat Copyright.txt HashdictTest.java > $(TARGET)/Hashdict/HashdictTest.java
	cd $(TARGET)/Hashdict; \
	javac $(CFLAGS) HashdictTest.java; \
	java $(RFLAGS) HashdictTest

#### Chapter 10 ############################################################

TTTree: $(TARGET)/TTTree/TTTest.class

$(TARGET)/TTTree/TTTest.class: TTTest.java Dictionary.book TTNode.book TTNodeAdd.book TTNode.txt TTTree.txt TTins.book TTfind.book close.txt TTTest.java
	-mkdir $(TARGET)/TTTree
	cat Copyright.txt TTTest.java > $(TARGET)/TTTree/TTTest.java
	cat Copyright.txt Dictionary.book > $(TARGET)/TTTree/Dictionary.java
	cat Copyright.txt TTNode.book TTNodeAdd.book TTNode.txt > $(TARGET)/TTTree/TTNode.java
	cat Copyright.txt TTTree.txt TTins.book TTfind.book close.txt > $(TARGET)/TTTree/TTTree.java
	cd $(TARGET)/TTTree; \
	javac $(CFLAGS) TTTest.java; \
	java $(RFLAGS) TTTest

BPTree: $(TARGET)/BPTree/BPTest.class

$(TARGET)/BPTree/BPTest.class: BPTest.java Dictionary.book BPNode.book BPLeaf.java BPInternal.java BPTree.txt close.txt BPinsert.book BPfind.book BPremove.book
	-mkdir $(TARGET)/BPTree
	cat Copyright.txt BPTest.java > $(TARGET)/BPTree/BPTest.java
	cat Copyright.txt Dictionary.book > $(TARGET)/BPTree/Dictionary.java
	cat Copyright.txt BPNode.book > $(TARGET)/BPTree/BPNode.java
	cat Copyright.txt BPLeaf.java > $(TARGET)/BPTree/BPLeaf.java
	cat Copyright.txt BPInternal.java > $(TARGET)/BPTree/BPInternal.java
	cat Copyright.txt BPTree.txt BPinsert.book BPfind.book BPremove.book close.txt> $(TARGET)/BPTree/BPTree.java
	cd $(TARGET)/BPTree; \
	javac $(CFLAGS) BPTest.java; \
	java $(RFLAGS) BPTest

#### Chapter 11 #############################################################

Grtestm: $(TARGET)/Grtestm/GraphTest.class

$(TARGET)/Grtestm/GraphTest.class: Graph.book Bkexamp.gph GraphTest1.txt Grtestm.txt Graphm1.book Graphm2.book
	-mkdir $(TARGET)/Grtestm
	cat Copyright.txt Graph.book > $(TARGET)/Grtestm/Graph.java
	cp Bkexamp.gph $(TARGET)/Grtestm/testfile.gph
	cat Copyright.txt GraphTest1.txt Grtestm.txt > $(TARGET)/Grtestm/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grtestm/Graphm.java
	cd $(TARGET)/Grtestm; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grtestl: $(TARGET)/Grtestl/GraphTest.class

$(TARGET)/Grtestl/GraphTest.class: Graph.book Edge.book Bkexamp.gph GraphTest1.txt Grtestl.txt Graphl1.book Graphl2.book GraphList.java List.book Link.book LList1.book LList2.book Alist3.txt
	-mkdir $(TARGET)/Grtestl
	cat Copyright.txt Graph.book > $(TARGET)/Grtestl/Graph.java
	cat Copyright.txt Edge.book > $(TARGET)/Grtestl/Edge.java
	cp Bkexamp.gph $(TARGET)/Grtestl/testfile.gph
	cat Copyright.txt GraphTest1.txt Grtestl.txt > $(TARGET)/Grtestl/GraphTest.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grtestl/Graphl.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grtestl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grtestl/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grtestl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grtestl/LList.java
	cd $(TARGET)/Grtestl; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grdfsm: $(TARGET)/Grdfsm/GraphTest.class

$(TARGET)/Grdfsm/GraphTest.class: Graph.book Bkexamp.gph GraphTest1.txt Grdfs.txt Grdfs.book GrdfsTestm.txt Graphm1.book Graphm2.book Grgentrav.book
	-mkdir $(TARGET)/Grdfsm
	cat Copyright.txt Graph.book > $(TARGET)/Grdfsm/Graph.java
	cp Bkexamp.gph $(TARGET)/Grdfsm/testfile.gph
	cat Copyright.txt GraphTest1.txt Grdfs.txt Grgentrav.book Grdfs.book GrdfsTestm.txt > $(TARGET)/Grdfsm/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grdfsm/Graphm.java
	cd $(TARGET)/Grdfsm; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grdfsl: $(TARGET)/Grdfsl/GraphTest.class

$(TARGET)/Grdfsl/GraphTest.class: Graph.book Edge.book Bkexamp.gph GraphTest1.txt Grdfs.txt Grdfs.book GrdfsTestl.txt Graphl1.book Graphl2.book GraphList.java List.book Link.book LList1.book LList2.book Alist3.txt
$(TARGET)/Grdfsl/GraphTest.class: Graph.book Bkexamp.gph GraphTest1.txt Grdfs.txt Grdfs.book GrdfsTestm.txt Graphm1.book Graphm2.book
	-mkdir $(TARGET)/Grdfsl
	cat Copyright.txt Graph.book > $(TARGET)/Grdfsl/Graph.java
	cat Copyright.txt Edge.book > $(TARGET)/Grdfsl/Edge.java
	cp Bkexamp.gph $(TARGET)/Grdfsl/testfile.gph
	cat Copyright.txt GraphTest1.txt Grdfs.txt Grdfs.book GrdfsTestl.txt > $(TARGET)/Grdfsl/GraphTest.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grdfsl/Graphl.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grdfsl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grdfsl/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grdfsl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grdfsl/LList.java
	cd $(TARGET)/Grdfsl; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grbfsm: $(TARGET)/Grbfsm/GraphTest.class

$(TARGET)/Grbfsm/GraphTest.class: Graph.book Bkexamp.gph GraphTest1.txt Grdfs.txt Grbfs.book GrbfsTestm.txt Graphm1.book Graphm2.book Queue.book AQueue.book AQueue.txt 
	-mkdir $(TARGET)/Grbfsm
	cat Copyright.txt Graph.book > $(TARGET)/Grbfsm/Graph.java
	cp Bkexamp.gph $(TARGET)/Grbfsm/testfile.gph
	cat Copyright.txt GraphTest1.txt Grbfs.txt Grbfs.book GrbfsTestm.txt > $(TARGET)/Grbfsm/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grbfsm/Graphm.java
	cat Copyright.txt Queue.book > $(TARGET)/Grbfsm/Queue.java
	cat Copyright.txt AQueue.book AQueue.txt > $(TARGET)/Grbfsm/AQueue.java
	cd $(TARGET)/Grbfsm; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grbfsl: $(TARGET)/Grbfsl/GraphTest.class

$(TARGET)/Grbfsl/GraphTest.class: Graph.book Bkexamp.gph GraphTest1.txt Grdfs.txt Grbfs.book GrbfsTestl.txt Graphl1.book Graphl2.book Queue.book AQueue.book AQueue.txt Edge.book GraphList.java List.book Link.book LList1.book LList2.book Alist3.txt
	-mkdir $(TARGET)/Grbfsl
	cat Copyright.txt Graph.book > $(TARGET)/Grbfsl/Graph.java
	cp Bkexamp.gph $(TARGET)/Grbfsl/testfile.gph
	cat Copyright.txt GraphTest1.txt Grbfs.txt Grbfs.book GrbfsTestl.txt > $(TARGET)/Grbfsl/GraphTest.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grbfsl/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grbfsl/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grbfsl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grbfsl/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grbfsl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grbfsl/LList.java
	cat Copyright.txt Queue.book > $(TARGET)/Grbfsl/Queue.java
	cat Copyright.txt AQueue.book AQueue.txt > $(TARGET)/Grbfsl/AQueue.java
	cd $(TARGET)/Grbfsl; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grtopdm: $(TARGET)/Grtopdm/GraphTest.class

$(TARGET)/Grtopdm/GraphTest.class: Graph.book Bktsort.gph GraphTest1.txt Grtop.txt Grtopd.book GrtopdTestm.txt Graphm1.book Graphm2.book
	-mkdir $(TARGET)/Grtopdm
	cat Copyright.txt Graph.book > $(TARGET)/Grtopdm/Graph.java
	cp Bktsort.gph $(TARGET)/Grtopdm/testfile.gph
	cat Copyright.txt GraphTest1.txt Grtop.txt Grtopd.book GrtopdTestm.txt > $(TARGET)/Grtopdm/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grtopdm/Graphm.java
	cd $(TARGET)/Grtopdm; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grtopdl: $(TARGET)/Grtopdl/GraphTest.class

$(TARGET)/Grtopdl/GraphTest.class: Graph.book Bktsort.gph GraphTest1.txt Grtop.txt Grtopd.book GrtopdTestm.txt Graphm1.book Graphm2.book Graphl1.book Graphl2.book GraphList.java List.book Link.book LList1.book LList2.book Alist3.txt Edge.book
	-mkdir $(TARGET)/Grtopdl
	cat Copyright.txt Graph.book > $(TARGET)/Grtopdl/Graph.java
	cp Bktsort.gph $(TARGET)/Grtopdl/testfile.gph
	cat Copyright.txt GraphTest1.txt Grtop.txt Grtopd.book GrtopdTestl.txt > $(TARGET)/Grtopdl/GraphTest.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grtopdl/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grtopdl/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grtopdl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grtopdl/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grtopdl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grtopdl/LList.java
	cd $(TARGET)/Grtopdl; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grtopbm: $(TARGET)/Grtopbm/GraphTest.class

$(TARGET)/Grtopbm/GraphTest.class: Graph.book Bktsort.gph GraphTest1.txt Grtop.txt Grtopb.book GrtopbTestm.txt Graphm1.book Graphm2.book Queue.book AQueue.book AQueue.txt
	-mkdir $(TARGET)/Grtopbm
	cat Copyright.txt Graph.book > $(TARGET)/Grtopbm/Graph.java
	cp Bktsort.gph $(TARGET)/Grtopbm/testfile.gph
	cat Copyright.txt GraphTest1.txt Grtop.txt Grtopb.book GrtopbTestm.txt > $(TARGET)/Grtopbm/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grtopbm/Graphm.java
	cat Copyright.txt Queue.book > $(TARGET)/Grtopbm/Queue.java
	cat Copyright.txt AQueue.book AQueue.txt > $(TARGET)/Grtopbm/AQueue.java
	cd $(TARGET)/Grtopbm; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grtopbl: $(TARGET)/Grtopbl/GraphTest.class

$(TARGET)/Grtopbl/GraphTest.class: Graph.book Bktsort.gph GraphTest1.txt Grtop.txt Grtopb.book GrtopbTestl.txt Graphl1.book Graphl2.book GraphList.java List.book Link.book LList1.book LList2.book Alist3.txt Queue.book AQueue.book AQueue.txt  Graphl1.book Graphl2.book Edge.book GraphList.java
	-mkdir $(TARGET)/Grtopbl
	cat Copyright.txt Graph.book > $(TARGET)/Grtopbl/Graph.java
	cp Bktsort.gph $(TARGET)/Grtopbl/testfile.gph
	cat Copyright.txt GraphTest1.txt Grtop.txt Grtopb.book GrtopbTestl.txt > $(TARGET)/Grtopbl/GraphTest.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grtopbl/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grtopbl/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grtopbl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grtopbl/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grtopbl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grtopbl/LList.java
	cat Copyright.txt Queue.book > $(TARGET)/Grtopbl/Queue.java
	cat Copyright.txt AQueue.book AQueue.txt > $(TARGET)/Grtopbl/AQueue.java
	cd $(TARGET)/Grtopbl; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grdijk1m: $(TARGET)/Grdijk1m/GraphTest.class

$(TARGET)/Grdijk1m/GraphTest.class: Graph.book Bkdijk.gph Graphm1.book Graphm2.book GraphTest1.txt Grdijk.txt MinVert.book Grdijk1.book GrdijkTestm.txt
	-mkdir $(TARGET)/Grdijk1m
	cat Copyright.txt Graph.book > $(TARGET)/Grdijk1m/Graph.java
	cp Bkdijk.gph $(TARGET)/Grdijk1m/testfile.gph
	cat Copyright.txt GraphTest1.txt Grdijk.txt MinVert.book Grdijk1.book GrdijkTestm.txt > $(TARGET)/Grdijk1m/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grdijk1m/Graphm.java
	cd $(TARGET)/Grdijk1m; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grdijk1l: $(TARGET)/Grdijk1l/GraphTest.class

$(TARGET)/Grdijk1l/GraphTest.class: Graph.book Bkdijk.gph GraphTest1.txt Grdijk.txt MinVert.book Grdijk1.book GrdijkTestl.txt List.book Link.book LList1.book LList2.book Alist3.txt  Graphl1.book Graphl2.book Edge.book GraphList.java
	-mkdir $(TARGET)/Grdijk1l
	cat Copyright.txt Graph.book > $(TARGET)/Grdijk1l/Graph.java
	cp Bkdijk.gph $(TARGET)/Grdijk1l/testfile.gph
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grdijk1l/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grdijk1l/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grdijk1l/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grdijk1l/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grdijk1l/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grdijk1l/LList.java
	cat Copyright.txt GraphTest1.txt Grdijk.txt MinVert.book Grdijk1.book GrdijkTestl.txt > $(TARGET)/Grdijk1l/GraphTest.java
	cd $(TARGET)/Grdijk1l; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grdijk2m: $(TARGET)/Grdijk2m/GraphTest.class

$(TARGET)/Grdijk2m/GraphTest.class: Graph.book Bkdijk.gph Graphm1.book Graphm2.book GraphTest1.txt Grdijk.txt Grdijk2.book GrdijkTestm.txt MinHeap.java DSutil1.txt permute.book DSutil2.txt DijkElem.book
	-mkdir $(TARGET)/Grdijk2m
	cat Copyright.txt Graph.book > $(TARGET)/Grdijk2m/Graph.java
	cp Bkdijk.gph $(TARGET)/Grdijk2m/testfile.gph
	cat Copyright.txt GraphTest1.txt Grdijk.txt Grdijk2.book GrdijkTestm.txt > $(TARGET)/Grdijk2m/GraphTest.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Grdijk2m/MinHeap.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Grdijk2m/DSutil.java
	cat Copyright.txt DijkElem.book > $(TARGET)/Grdijk2m/DijkElem.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grdijk2m/Graphm.java
	cd $(TARGET)/Grdijk2m; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grdijk2l: $(TARGET)/Grdijk2l/GraphTest.class

$(TARGET)/Grdijk2l/GraphTest.class: Graph.book Bkdijk.gph GraphTest1.txt Grdijk.txt Grdijk2.book GrdijkTestl.txt MinHeap.java DSutil1.txt permute.book DSutil2.txt DijkElem.book List.book Link.book LList1.book LList2.book Alist3.txt  Graphl1.book Graphl2.book Edge.book GraphList.java
	-mkdir $(TARGET)/Grdijk2l
	cat Copyright.txt Graph.book > $(TARGET)/Grdijk2l/Graph.java
	cp Bkdijk.gph $(TARGET)/Grdijk2l/testfile.gph
	cat Copyright.txt GraphTest1.txt Grdijk.txt Grdijk2.book GrdijkTestl.txt > $(TARGET)/Grdijk2l/GraphTest.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Grdijk2l/MinHeap.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Grdijk2l/DSutil.java
	cat Copyright.txt DijkElem.book > $(TARGET)/Grdijk2l/DijkElem.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grdijk2l/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grdijk2l/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grdijk2l/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grdijk2l/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grdijk2l/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grdijk2l/LList.java
	cd $(TARGET)/Grdijk2l; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grprim1m: $(TARGET)/Grprim1m/GraphTest.class

$(TARGET)/Grprim1m/GraphTest.class: Graph.book Bkexamp.gph Graphm1.book Graphm2.book GraphTest1.txt Grprim.txt MinVert.book Grprim1.book GrprimTestm.txt
	-mkdir $(TARGET)/Grprim1m
	cat Copyright.txt Graph.book > $(TARGET)/Grprim1m/Graph.java
	cp Bkexamp.gph $(TARGET)/Grprim1m/testfile.gph
	cat Copyright.txt GraphTest1.txt Grprim.txt MinVert.book Grprim1.book GrprimTestm.txt > $(TARGET)/Grprim1m/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grprim1m/Graphm.java
	cd $(TARGET)/Grprim1m; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grprim1l: $(TARGET)/Grprim1l/GraphTest.class

$(TARGET)/Grprim1l/GraphTest.class: Graph.book Bkexamp.gph GraphTest1.txt Grprim.txt MinVert.book Grprim1.book GrprimTestl.txt List.book Link.book LList1.book LList2.book Alist3.txt  Graphl1.book Graphl2.book Edge.book GraphList.java
	-mkdir $(TARGET)/Grprim1l
	cat Copyright.txt Graph.book > $(TARGET)/Grprim1l/Graph.java
	cp Bkexamp.gph $(TARGET)/Grprim1l/testfile.gph
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grprim1l/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grprim1l/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grprim1l/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grprim1l/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grprim1l/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grprim1l/LList.java
	cat Copyright.txt GraphTest1.txt Grprim.txt MinVert.book Grprim1.book GrprimTestl.txt > $(TARGET)/Grprim1l/GraphTest.java
	cd $(TARGET)/Grprim1l; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grprim2m: $(TARGET)/Grprim2m/GraphTest.class

$(TARGET)/Grprim2m/GraphTest.class:  Graph.book Bkexamp.gph Graphm1.book Graphm2.book GraphTest1.txt Grprim.txt Grprim2.book GrprimTestm.txt MinHeap.java DSutil1.txt permute.book DSutil2.txt DijkElem.book
	-mkdir $(TARGET)/Grprim2m
	cat Copyright.txt Graph.book > $(TARGET)/Grprim2m/Graph.java
	cp Bkexamp.gph $(TARGET)/Grprim2m/testfile.gph
	cat Copyright.txt GraphTest1.txt Grprim.txt Grprim2.book GrprimTestm.txt > $(TARGET)/Grprim2m/GraphTest.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Grprim2m/MinHeap.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Grprim2m/DSutil.java
	cat Copyright.txt DijkElem.book > $(TARGET)/Grprim2m/DijkElem.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grprim2m/Graphm.java
	cd $(TARGET)/Grprim2m; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grprim2l: $(TARGET)/Grprim2l/GraphTest.class

$(TARGET)/Grprim2l/GraphTest.class: Graph.book Bkexamp.gph GraphTest1.txt Grprim.txt Grprim2.book GrprimTestl.txt MinHeap.java DSutil1.txt permute.book DSutil2.txt DijkElem.book List.book Link.book LList1.book LList2.book Alist3.txt  Graphl1.book Graphl2.book Edge.book GraphList.java
	-mkdir $(TARGET)/Grprim2l
	cat Copyright.txt Graph.book > $(TARGET)/Grprim2l/Graph.java
	cp Bkexamp.gph $(TARGET)/Grprim2l/testfile.gph
	cat Copyright.txt GraphTest1.txt Grprim.txt Grprim2.book GrprimTestl.txt > $(TARGET)/Grprim2l/GraphTest.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Grprim2l/MinHeap.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Grprim2l/DSutil.java
	cat Copyright.txt DijkElem.book > $(TARGET)/Grprim2l/DijkElem.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grprim2l/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grprim2l/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grprim2l/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grprim2l/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grprim2l/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grprim2l/LList.java
	cd $(TARGET)/Grprim2l; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grkrusm: $(TARGET)/Grkrusm/GraphTest.class

$(TARGET)/Grkrusm/GraphTest.class: Graph.book Bkexamp.gph GraphTest1.txt Grkruskal.txt Grkruskal.book GrkruskalTestm.txt Graphm1.book Graphm2.book MinHeap.java DSutil1.txt permute.book DSutil2.txt KruskalElem.book UFgtree.book UFpcfind.book UFgtree2.txt
	-mkdir $(TARGET)/Grkrusm
	cat Copyright.txt Graph.book > $(TARGET)/Grkrusm/Graph.java
	cp Bkexamp.gph $(TARGET)/Grkrusm/testfile.gph
	cat Copyright.txt GraphTest1.txt Grkruskal.txt Grkruskal.book GrkruskalTestm.txt > $(TARGET)/Grkrusm/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grkrusm/Graphm.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Grkrusm/MinHeap.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Grkrusm/DSutil.java
	cat Copyright.txt KruskalElem.book > $(TARGET)/Grkrusm/KruskalElem.java
	cat Copyright.txt UFgtree.book UFpcfind.book UFgtree2.txt > $(TARGET)/Grkrusm/ParPtrTree.java
	cd $(TARGET)/Grkrusm; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Grkrusl: $(TARGET)/Grkrusl/GraphTest.class

$(TARGET)/Grkrusl/GraphTest.class: Graph.book Bkexamp.gph GraphTest1.txt Grkruskal.txt Grkruskal.book GrkruskalTestm.txt MinHeap.java DSutil1.txt permute.book DSutil2.txt KruskalElem.book UFgtree.book UFpcfind.book UFgtree2.txt List.book Link.book LList1.book LList2.book Alist3.txt Graphl1.book Graphl2.book Edge.book GraphList.java
	-mkdir $(TARGET)/Grkrusl
	cat Copyright.txt Graph.book > $(TARGET)/Grkrusl/Graph.java
	cp Bkexamp.gph $(TARGET)/Grkrusl/testfile.gph
	cat Copyright.txt GraphTest1.txt Grkruskal.txt Grkruskal.book GrkruskalTestl.txt > $(TARGET)/Grkrusl/GraphTest.java
	cat Copyright.txt MinHeap.java > $(TARGET)/Grkrusl/MinHeap.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Grkrusl/DSutil.java
	cat Copyright.txt KruskalElem.book > $(TARGET)/Grkrusl/KruskalElem.java
	cat Copyright.txt UFgtree.book UFpcfind.book UFgtree2.txt > $(TARGET)/Grkrusl/ParPtrTree.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/Grkrusl/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/Grkrusl/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/Grkrusl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/Grkrusl/List.java
	cat Copyright.txt Link.book > $(TARGET)/Grkrusl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/Grkrusl/LList.java
	cd $(TARGET)/Grkrusl; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

#### Chapter 12 ############################################################

Mem: $(TARGET)/Mem/MemMain.class

$(TARGET)/Mem/MemMain.class: MemManager.java Assert.java MemManADT.book MemMain.java MemHandle.java
	-mkdir $(TARGET)/Mem
	cat Copyright.txt MemManager.java > $(TARGET)/Mem/MemManager.java
	cat Copyright.txt MemManADT.book > $(TARGET)/Mem/MemManADT.java
	cat Copyright.txt MemMain.java > $(TARGET)/Mem/MemMain.java
	cat Copyright.txt MemHandle.java > $(TARGET)/Mem/MemHandle.java
	cd $(TARGET)/Mem; \
	javac MemMain.java


#### Chapter 13 ############################################################

KDtree: $(TARGET)/KDtree/KDmain.class

$(TARGET)/KDtree/KDmain.class: KDtree1.txt KDfind.book KDfindmin.book KDrshelp.book KDtree2.txt KDNode.java Dictionary.book SpatialDictionary.book KDmain.java
	-mkdir $(TARGET)/KDtree
	cat Copyright.txt KDtree1.txt KDfind.book KDfindmin.book KDrshelp.book KDtree2.txt > $(TARGET)/KDtree/KDtree.java
	cat Copyright.txt BinNode.book > $(TARGET)/KDtree/BinNode.java
	cat Copyright.txt KDNode.java > $(TARGET)/KDtree/KDNode.java
	cat Copyright.txt Dictionary.book > $(TARGET)/KDtree/Dictionary.java
	cat Copyright.txt SpatialDictionary.book > $(TARGET)/KDtree/SpatialDictionary.java
	cat Copyright.txt KDmain.java > $(TARGET)/KDtree/KDmain.java
	cd $(TARGET)/KDtree; \
	javac $(CFLAGS) KDmain.java; \
        java KDmain

#### Chapter 14 ############################################################

Grcon: $(TARGET)/Grcon/GraphTest.class

$(TARGET)/Grcon/GraphTest.class: Graph.book Bkconcom.gph GraphTest1.txt Grconcom.txt Grconcom.book GrconcomTest.txt Graphm1.book Graphm2.book
	-mkdir $(TARGET)/Grcon
	cat Copyright.txt Graph.book > $(TARGET)/Grcon/Graph.java
	cp Bkconcom.gph $(TARGET)/Grcon/testfile.gph
	cat Copyright.txt GraphTest1.txt Grconcom.txt Grconcom.book GrconcomTest.txt > $(TARGET)/Grcon/GraphTest.java
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/Grcon/Graphm.java
	cd $(TARGET)/Grcon; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

Ch14: $(TARGET)/Ch14/Ch14.class

$(TARGET)/Ch14/Ch14.class: ch14.txt incr.book ch14p1.book ch14p2.book ch14b.txt
	-mkdir $(TARGET)/Ch14
	cat Copyright.txt ch14.txt incr.book ch14p2.book ch14b.txt > $(TARGET)/Ch14/Ch14.java
	cd $(TARGET)/Ch14; \
	javac $(CFLAGS) Ch14.java; \
	java $(RFLAGS) Ch14


#### Chapter 15 ############################################################

MinMax: $(TARGET)/MinMax/MinMaxTest.class

$(TARGET)/MinMax/MinMaxTest.class: DSutil1.txt permute.book minmax.book DSutil2.txt MinMaxTest.java
	-mkdir $(TARGET)/MinMax
	cat Copyright.txt DSutil1.txt permute.book minmax.book DSutil2.txt > $(TARGET)/MinMax/DSutil.java
	cat Copyright.txt MinMaxTest.java > $(TARGET)/MinMax/MinMaxTest.java
	cd $(TARGET)/MinMax; \
	javac $(CFLAGS) MinMaxTest.java; \
	java $(RFLAGS) MinMaxTest


#### Chapter 16 ############################################################

GrFloydm: $(TARGET)/GrFloydm/GraphTest.class

$(TARGET)/GrFloydm/GraphTest.class: Graph.book Bkfloyd.gph Graphm1.book Graphm2.book GraphTest1.txt GrFloyd.txt GrFloyd.book GrFloydTestm.txt
	-mkdir $(TARGET)/GrFloydm
	cat Copyright.txt Graph.book > $(TARGET)/GrFloydm/Graph.java
	cp Bkfloyd.gph $(TARGET)/GrFloydm/testfile.gph
	cat Copyright.txt Graphm1.book Graphm2.book > $(TARGET)/GrFloydm/Graphm.java
	cat Copyright.txt GraphTest1.txt GrFloyd.txt GrFloyd.book GrFloydTestm.txt > $(TARGET)/GrFloydm/GraphTest.java
	cd $(TARGET)/GrFloydm; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest

GrFloydl: $(TARGET)/GrFloydl/GraphTest.class

$(TARGET)/GrFloydl/GraphTest.class: Graph.book Bkfloyd.gph GraphTest1.txt GrFloyd.txt GrFloyd.book GrFloydTestm.txt List.book Link.book LList1.book LList2.book Alist3.txt  Graphl1.book Graphl2.book Edge.book GraphList.java
	-mkdir $(TARGET)/GrFloydl
	cat Copyright.txt Graph.book > $(TARGET)/GrFloydl/Graph.java
	cp Bkfloyd.gph $(TARGET)/GrFloydl/testfile.gph
	cat Copyright.txt GraphTest1.txt GrFloyd.txt GrFloyd.book GrFloydTestl.txt > $(TARGET)/GrFloydl/GraphTest.java
	cat Copyright.txt Graphl1.book Graphl2.book > $(TARGET)/GrFloydl/Graphl.java
	cat Copyright.txt Edge.book > $(TARGET)/GrFloydl/Edge.java
	cat Copyright.txt GraphList.java > $(TARGET)/GrFloydl/GraphList.java
	cat Copyright.txt List.book > $(TARGET)/GrFloydl/List.java
	cat Copyright.txt Link.book > $(TARGET)/GrFloydl/Link.java
	cat Copyright.txt LList1.book LList2.book Alist3.txt> $(TARGET)/GrFloydl/LList.java
	cd $(TARGET)/GrFloydl; \
	javac $(CFLAGS) GraphTest.java; \
	java $(RFLAGS) GraphTest


Skiplist: $(TARGET)/Skiplist/Skipmain.class

$(TARGET)/Skiplist/Skipmain.class: Skipl1.txt Skiprand.book Skipins.book Skipsch.book Skipl2.txt DSutil1.txt permute.book DSutil2.txt Skipmain.java Elem.java IElem.java SkipNode.java
	-mkdir $(TARGET)/Skiplist
	cat Copyright.txt Skipl1.txt Skiprand.book Skipins.book Skipsch.book Skipl2.txt > $(TARGET)/Skiplist/SkipList.java
	cat Copyright.txt DSutil1.txt permute.book DSutil2.txt > $(TARGET)/Skiplist/DSutil.java
	cat Copyright.txt Dictionary.book > $(TARGET)/Skiplist/Dictionary.java
	cat Copyright.txt SkipNode.java > $(TARGET)/Skiplist/SkipNode.java
	cat Copyright.txt Skipmain.java > $(TARGET)/Skiplist/Skipmain.java
	cd $(TARGET)/Skiplist; \
	javac $(CFLAGS) Skipmain.java

UpDown: $(TARGET)/UpDown/UpDown.class

$(TARGET)/UpDown/UpDown.class: UpDown.java
	-mkdir $(TARGET)/UpDown
	cp UpDown.java $(TARGET)/UpDown
	cd $(TARGET)/UpDown; \
	javac $(CFLAGS) UpDown.java
