main: minid.o
	g++ -o rock minid.o

minid.o: minid.cpp mineral.h

clean:
	rm -f rock minid.o a.out