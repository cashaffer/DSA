@echo off
echo "Start sort timing"

cd ..\Inssort
echo "Inssort" > sorttime.out
echo "Inssort"
jview Sortmain 10 >> sorttime.out
jview Sortmain 100 >> sorttime.out
jview Sortmain 1000 >> sorttime.out
jview Sortmain 10000 >> sorttime.out
jview Sortmain 100000 >> sorttime.out

jview Sortmain + 10000 >> sorttime.out
jview Sortmain - 10000 >> sorttime.out

cd ..\Bubsort
echo "Bubsort" > sorttime.out
echo "Bubsort"
jview Sortmain 10 >> sorttime.out
jview Sortmain 100 >> sorttime.out
jview Sortmain 1000 >> sorttime.out
jview Sortmain 10000 >> sorttime.out
jview Sortmain 100000 >> sorttime.out

jview Sortmain + 10000 >> sorttime.out
jview Sortmain - 10000 >> sorttime.out

cd ..\Selsort
echo "Selsort" > sorttime.out
echo "Selsort"
jview Sortmain 10 >> sorttime.out
jview Sortmain 100 >> sorttime.out
jview Sortmain 1000 >> sorttime.out
jview Sortmain 10000 >> sorttime.out
jview Sortmain 100000 >> sorttime.out

jview Sortmain + 10000 >> sorttime.out
jview Sortmain - 10000 >> sorttime.out

cd ..\Shsort
echo "Shell sort"
echo "Shell sort" > sorttime.out
jview Sortmain 10 >> sorttime.out
jview Sortmain 100 >> sorttime.out
jview Sortmain 1000 >> sorttime.out
jview Sortmain 10000 >> sorttime.out
jview Sortmain 100000 >> sorttime.out

jview Sortmain + 10000 >> sorttime.out
jview Sortmain - 10000 >> sorttime.out

cd ..\Qsort1
echo "Qsort1"
echo "Qsort1" > sorttime.out
jview Sortmain 10 >> sorttime.out
jview Sortmain 100 >> sorttime.out
jview Sortmain 1000 >> sorttime.out
jview Sortmain 10000 >> sorttime.out
jview Sortmain 100000 >> sorttime.out

jview Sortmain + 10000 >> sorttime.out
jview Sortmain - 10000 >> sorttime.out

cd ..\Qsort4
echo "Qsort4"
echo "Qsort4" > sorttime.out
jview Sortmain 10 7 >> sorttime.out
jview Sortmain 10 8 >> sorttime.out
jview Sortmain 10 9 >> sorttime.out
jview Sortmain 10 10 >> sorttime.out
jview Sortmain 10 11 >> sorttime.out

echo "" >> sorttime.out
jview Sortmain 100 7 >> sorttime.out
jview Sortmain 100 8 >> sorttime.out
jview Sortmain 100 9 >> sorttime.out
jview Sortmain 100 10 >> sorttime.out
jview Sortmain 100 11 >> sorttime.out

echo "" >> sorttime.out
jview Sortmain 1000 7 >> sorttime.out
jview Sortmain 1000 8 >> sorttime.out
jview Sortmain 1000 9 >> sorttime.out
jview Sortmain 1000 10 >> sorttime.out
jview Sortmain 1000 11 >> sorttime.out

echo "" >> sorttime.out
jview Sortmain 10000 7 >> sorttime.out
jview Sortmain 10000 8 >> sorttime.out
jview Sortmain 10000 9 >> sorttime.out
jview Sortmain 10000 10 >> sorttime.out
jview Sortmain 10000 11 >> sorttime.out

echo "" >> sorttime.out
jview Sortmain 100000 7 >> sorttime.out
jview Sortmain 100000 8 >> sorttime.out
jview Sortmain 100000 9 >> sorttime.out
jview Sortmain 100000 10 >> sorttime.out
jview Sortmain 100000 11 >> sorttime.out

jview Sortmain + 10000 7 >> sorttime.out
jview Sortmain - 10000 7 >> sorttime.out

cd ..\Mrgsort1
echo "Mrgsort1"
echo "Mrgsort1" > sorttime.out
jview Sortmain 10 >> sorttime.out
jview Sortmain 100 >> sorttime.out
jview Sortmain 1000 >> sorttime.out
jview Sortmain 10000 >> sorttime.out
jview Sortmain 100000 >> sorttime.out

jview Sortmain + 10000 >> sorttime.out
jview Sortmain - 10000 >> sorttime.out

cd ..\Mrgsort2
echo "Mrgsort2"
echo "Mrgsort2" > sorttime.out
jview Sortmain 10 >> sorttime.out
jview Sortmain 100 >> sorttime.out
jview Sortmain 1000 >> sorttime.out
jview Sortmain 10000 >> sorttime.out
jview Sortmain 100000 >> sorttime.out

jview Sortmain + 10000 >> sorttime.out
jview Sortmain - 10000 >> sorttime.out

cd ..\Heapsort
echo "Heapsort"
echo "Heapsort" > sorttime.out
jview Sortmain 10 >> sorttime.out
jview Sortmain 100 >> sorttime.out
jview Sortmain 1000 >> sorttime.out
jview Sortmain 10000 >> sorttime.out
jview Sortmain 100000 >> sorttime.out

jview Sortmain + 10000 >> sorttime.out
jview Sortmain - 10000 >> sorttime.out

cd ..\Radix
echo "Radixsort"
echo "Radixsort" > sorttime.out
jview Sortmain 10 1 >> sorttime.out
jview Sortmain 10 2 >> sorttime.out
jview Sortmain 10 4 >> sorttime.out
jview Sortmain 10 8 >> sorttime.out

echo "" >> sorttime.out
jview Sortmain 100 1 >> sorttime.out
jview Sortmain 100 2 >> sorttime.out
jview Sortmain 100 4 >> sorttime.out
jview Sortmain 100 8 >> sorttime.out

echo "" >> sorttime.out
jview Sortmain 1000 1 >> sorttime.out
jview Sortmain 1000 2 >> sorttime.out
jview Sortmain 1000 4 >> sorttime.out
jview Sortmain 1000 8 >> sorttime.out

echo "" >> sorttime.out
jview Sortmain 10000 1 >> sorttime.out
jview Sortmain 10000 2 >> sorttime.out
jview Sortmain 10000 4 >> sorttime.out
jview Sortmain 10000 8 >> sorttime.out

echo "" >> sorttime.out
jview Sortmain 100000 1 >> sorttime.out
jview Sortmain 100000 2 >> sorttime.out
jview Sortmain 100000 4 >> sorttime.out
jview Sortmain 100000 8 >> sorttime.out

jview Sortmain + 10000 1 >> sorttime.out
jview Sortmain - 10000 1 >> sorttime.out
jview Sortmain + 10000 2 >> sorttime.out
jview Sortmain - 10000 2 >> sorttime.out
jview Sortmain + 10000 4 >> sorttime.out
jview Sortmain - 10000 4 >> sorttime.out
jview Sortmain + 10000 8 >> sorttime.out
jview Sortmain - 10000 8 >> sorttime.out

echo "Sort timing done"
