CFLAGS= -s -O -DUNIX
# Debugging
#CFLAGS= -g -DUNIX
CC= g++

# Imlicit pattern rule for making .o files from .cpp files
%.o: %.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: ttmain ttbook ttpmain ttpbook ttpdup ttpins

clean:
	rm -f *~ *.core core *.o ttmain ttbook ttpmain ttpbook ttpdup ttpins

ttmain: ttmain.o
	$(CC) $(CFLAGS) ttmain.o -o ttmain

ttmain.o: ttmain.cpp book.h compare.h ttnode.h tt.ht


ttbook: ttbook.o
	$(CC) $(CFLAGS) ttbook.o -o ttbook

ttbook.o: ttbook.cpp book.h compare.h ttnode.h tt.ht

ttpmain: ttpmain.o
	$(CC) $(CFLAGS) ttpmain.o -o ttpmain

ttpmain.o: ttpmain.cpp book.h compare.h ttpnode.h ttp.ht CityRec.h

ttpbook: ttpbook.o
	$(CC) $(CFLAGS) ttpbook.o -o ttpbook

ttpbook.o: ttpbook.cpp book.h compare.h ttpnode.h ttp.ht CityRec.h

ttpdup: ttpdup.o
	$(CC) $(CFLAGS) ttpdup.o -o ttpdup

ttpdup.o: ttpdup.cpp book.h compare.h ttpnode.h ttp.ht CityRec.h

ttpins: ttpins.o
	$(CC) $(CFLAGS) ttpins.o -o ttpins

ttpins.o: ttpins.cpp book.h compare.h ttpnode.h ttpins.ht CityRec.h

