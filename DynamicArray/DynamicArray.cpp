#include "DynamicArray.h"


DynamicArray::DynamicArray() :ptr(nullptr), size(0)
{}
DynamicArray::DynamicArray(int S)
{
	cout << "Construct by 1 param\n";
	size = S;
	ptr = new int[S] {0};
}
DynamicArray::DynamicArray(const DynamicArray& a)// copy constructor
{
	cout << "Copy construct\n";
	size = a.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = a.ptr[i];
	}
}
DynamicArray::~DynamicArray()
{
	cout << "Destruct\n";
	delete[] ptr;
	
}



void DynamicArray::Input()
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 20;
	}
}
void DynamicArray::Output()const
{
	cout << "\n---------------------------------\n";
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << "\t";
	}
	cout << "\n---------------------------------\n";
}
int* DynamicArray::GetPointer() const
{
	return ptr;
}
int DynamicArray::GetSize()const
{
	return size;
}



void DynamicArray::Resize(int s)		//resizing an array
{
	size += s;
	int* tmp = new int[size];		
	for (int i = 0; i < size; i++) {
		if (i >= size - s) {
			tmp[i] = 0;					
		}
		else {
			tmp[i] = ptr[i];
		}
	}
	delete[]ptr;
	ptr = new int[size];
	ptr = tmp;
}
void DynamicArray::Sort()
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (ptr[j] > ptr[j + 1])
			{
				swap(ptr[j], ptr[j + 1]);
			}
		}
	}
}
int DynamicArray::Search(int a)
{
	for (int i = 0; i < size; i++) {
		if (ptr[i] == a) {
			return i;
		}
	}
	return -1;
}
void DynamicArray::Reverse()
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (j < j + 1)		
			{
				swap(ptr[j], ptr[j + 1]);
			}
		}
	}
}