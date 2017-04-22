#include "strFuncs.h"
#include <iostream>

Chain::Chain(){
	pos = 0;
	link = NULL;
}

Hash_Heap::Hash_Heap(int size){	
	HashTable = new Chain[size];
	HeapTree = new int[size+1];
	HtreeEnd = 0;
	TableSize = size;
}

void Hash_Heap::printTable(){
	for (int i = 0; i < TableSize; i++){
		std::cout << (*(HashTable+i)).pos << std::endl;
	}
}