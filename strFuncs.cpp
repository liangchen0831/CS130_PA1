#include "strFuncs.h"
#include <iostream>

using std::cout;
using std::endl;

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
		if ((HashTable+i) -> link == NULL)
			cout << "NULL" << endl;
	}
}

void Hash_Heap::printTree(){
	for (int i = 0; i <= HtreeEnd; i++){
		cout << HeapTree[i] << endl;
	}
}

void Hash_Heap::lookup(int value){
	Chain *here = HashTable+Hash(value);

	while (here->link != NULL){
		here = here->link;
		if (HeapTree[here->pos] == value){
			cout << "found " << value << endl;
			return;
		}
	}

	cout << value << " not found" << endl;
	return;
}












