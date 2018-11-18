CXX=g++
LD=g++
CPPFLAGS=-std=c++11 -c
src_path := /home/ksenia/yay/yay-src/common/src
sources = $(src_path)/common.cpp $(src_path)/deal-class.cpp
objects = $(subst .cpp,.o,$(sources))
executable = yay

all: comp link

comp: deal-class.o common.o

deal-class.o: $(src_path)/deal-class.cpp
	$(CXX) $(CPPFLAGS) $(src_path)/deal-class.cpp -o deal-class.o

common.o: $(src_path)/common.cpp
	$(CXX) $(CPPFLAGS) $(src_path)/common.cpp -o common.o

link:
	$(CXX) deal-class.o common.o -o $(executable)
