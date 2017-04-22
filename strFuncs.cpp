#include <iostream>
#include "strFuncs.h"


Chain::Chain(){
	pos = 0;
	link = NULL;
}

template <class T>
Hash_Heap<T>::Hash_Heap(int size){	
	HashTable = new Chain[size];
	HeapTree = new T[size+1];
	HtreeEnd = 0;
	TableSize = size;
}

template <class T>
void Hash_Heap<T>::printTable(){
	for (int i = 0; i < TableSize; i++){
		std::cout << (*(HashTable+i)).pos << std::endl;
	}
}