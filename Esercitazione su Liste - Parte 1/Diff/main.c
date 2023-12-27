#include "list.h"

extern Item* Diff(const Item* i1, const Item* i2);

int main(void)
{

	//dichiarazione 1
	const Item* i1;
	const Item* i2;
	//prova 1 (vuota)
	i1 = ListCreateEmpty();
	i2 = ListCreateEmpty();
	ElemType* ris1 = ListCreateEmpty();
	ris1 = Diff(i1, i2);
	ListWriteStdout(ris1);

	//dichiarazione 2
	const Item* i3;
	const Item* i4;
	//prova 2 
	i3 = ListCreateEmpty();
	ElemType elem1[] = { 3, 4, 2, 0, 45, 1, 3 };
	int size1 = 7;
	for (int i = 0; i < size1; i++)
	{
		i3 = ListInsertBack(i3, &elem1[i]);
	}

	i4 = ListCreateEmpty();
	ElemType elem2[] = { 8, 5, 2, 3, 45, 7 };
	int size2 = 6;
	for (int i = 0; i < size2; i++)
	{
		i4 = ListInsertBack(i4, &elem2[i]);
	}
	ElemType* ris2 = Diff(i3, i4);
	ListWriteStdout(ris2);



	//dichiarazione 3
	const Item* i5;
	const Item* i6;
	//prova 3
	i5 = ListCreateEmpty();
	i6 = ListCreateEmpty();
	ElemType elem3[] = { 45, 8, 5, 2, 3, 45, 7, 5 };
	int size3 = 8;
	for (int i = 0; i < size3; i++)
	{
		i5 = ListInsertBack(i5, &elem3[i]);
	}

	i6 = ListCreateEmpty();
	ElemType *elem4 = {0};
	int size4 = 1;
	for (int i = 0; i < size4; i++)
	{
		i6 = ListInsertBack(i6, &elem4[i]);
	}
	ElemType* ris3 = Diff(i5, i6);
	ListWriteStdout(ris3);



	return 0;
}