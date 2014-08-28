all: a.out

a.out: b.cpp
	c++ -std=c++11 b.cpp

t1:	all
	cat in1 | ./a.out

t2:	all
	cat in2 | ./a.out
