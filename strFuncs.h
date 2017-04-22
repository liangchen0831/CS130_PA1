#ifndef STRFUNCS_H
#define STRFUNCS_H

class Chain
{
public:
	int pos;
	Chain *link;
	Chain();
};

class Hash_Heap
{
public:
	Hash_Heap(int size);
	void insert(int value);
	int lookup(int value);
	void Delete(int value);
	int deleteMax();
	void printTable();
private:
	Chain *HashTable;
	int *HeapTree;
	int HtreeEnd;
	int TableSize;	
};


#endif //STRFUNCS_H
