#include "DynamicArray.h"
using namespace std;

DynamicArray GetObj() //возврат по значению
{
	DynamicArray obj(4);
	obj.Input();

	return obj;
}


void main()
{


	DynamicArray rezult = GetObj();
	rezult.Output();
	cout << endl;


	//resize
	int userNum;
	cout << "How many cells should we add?/ ";
	cin >> userNum;
	rezult.Resize(userNum);
	cout << "Resize Result: " << endl;
	rezult.Output();
	cout << endl;

	//sort
	rezult.Sort();
	cout << "Sort result: " << endl;
	rezult.Output();
	cout << endl;

	//search
	int userElement;
	cout << "Enter number: ";
	cin >> userElement;
	cout << "Index: " << rezult.Search(userElement) << endl<<endl;

	//reverse
	rezult.Reverse();
	cout << "Reverse Result: " << endl;
	rezult.Output();
	cout << endl;

	system("pause");
}