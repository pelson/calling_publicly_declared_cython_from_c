all:
	cython --cplus rect.pyx
	c++ -g -O2 -c rect.cpp -o rect.o `python3-config --includes`
	c++ -g -O2 -c Rectangle.cpp -o Rectangle.o `python3-config --includes`
	c++ -g -O2 -c main.cpp -o main.o `python3-config --includes`
	c++ -g -O2 -o rect Rectangle.o rect.o main.o `python3-config --libs`

clean:
	rm -f rect rect.cpp rect.h *.o
