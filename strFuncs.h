#ifndef STRFUNCS_H
#define STRFUNCS_H

class Chain
{
public:
	int pos;
	Chain *link;
	Chain();
};

template <class T>
class Hash_Heap
{
public:
	Hash_Heap(int size);
	void insert(T value);
	int lookup(T value);
	void Delete(T value);
	T deleteMax();
	void printTable();
private:
	Chain *HashTable;
	T *HeapTree;
	int HtreeEnd;
	int TableSize;	
};


#endif //STRFUNCS_H
