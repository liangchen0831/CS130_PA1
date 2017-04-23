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
	void lookup(int value);
	void insert(int value);
	void Delete(int value);
	int deleteMax();
	void printTable();
	void printTree();
private:
	Chain *HashTable;
	int *HeapTree;
	int HtreeEnd;
	int TableSize;

	int Hash(int value){
		return (value % TableSize);
	};
};


#endif //STRFUNCS_H
