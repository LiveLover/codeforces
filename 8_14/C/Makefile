all: a.out

a.out: c.cpp
	c++ -std=c++11 c.cpp

t1:	all
	cat in1 | ./a.out

t2:	all
	cat in2 | ./a.out
