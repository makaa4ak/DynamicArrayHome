#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int* ptr; 
	int size;  
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();

	void Input();
	void Output()const;

	int* GetPointer()const;
	int GetSize()const;

	void Resize(int size);		
	void Sort();				
	int Search(int a);			
	void Reverse();				

	// реилизовать следующие методы:
	//void ReSize(int size);// изменение размера массива
	//void Sort();// сортировка(любой алгоритм сортировки)
	//int Search(int a); // поиск элемента в массиве, возвращает индекс наиденного эл., либо -1.
	//void Reverse(); // перезаписывает последовательность элементов в обратном порядке, напрмер 12345 -> 54321

};
