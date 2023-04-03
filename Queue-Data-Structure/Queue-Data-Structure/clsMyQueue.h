#pragma once
#include "clsDblLinkedList.h"

template <class T> class clsMyQueue
{
protected:
	clsDblLinkedList <T> List;
public:

	void Print() {
		List.PrintList();
	}

	void Push(T NewItem) {
		List.InsertAtEnd(NewItem);
	}

	void Pop() {
		List.DeleteFirstNode();
	}

	T Size() {
		return List.Size();
	}

	T Front() {
		return List.GetItem(0);
	}

	T Back() {
		return List.GetItem(Size() - 1);
	}
};

