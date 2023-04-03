#include <iostream>
#include "clsMyQueue.h"
using namespace std;



int main() {

	clsMyQueue <int> MyQueue;

	MyQueue.Push(10);
	MyQueue.Push(20);
	MyQueue.Push(30);
	MyQueue.Push(40);
	MyQueue.Push(50);
	MyQueue.Print();

	cout << "Front Element: " << MyQueue.Front() << endl;
	cout << "Back Element: " << MyQueue.Back() << endl;

	cout << "Popping first element" << endl;
	MyQueue.Pop();
	MyQueue.Print();

	system("pause");
	return 0;
}