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

	// ����������� ��������� ������:
	//void ReSize(int size);// ��������� ������� �������
	//void Sort();// ����������(����� �������� ����������)
	//int Search(int a); // ����� �������� � �������, ���������� ������ ���������� ��., ���� -1.
	//void Reverse(); // �������������� ������������������ ��������� � �������� �������, ������� 12345 -> 54321

};
