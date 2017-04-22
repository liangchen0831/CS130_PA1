#CXX = g++
CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= prog1


COMMON_OBJECT_FILES = strFuncs.o 

prog1: prog1.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
