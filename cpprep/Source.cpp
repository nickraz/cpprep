#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 5, b = 10, c = 0;
	cout<<"Hi hi hi hi"<<endl<<"Testing ASM"<<endl;
	__asm
	{
		pushad
			mov a, 4
			mov b, 5
			mov eax, a
			add eax, b
			mov c, eax
			popad

	}
	cout<<"C = " <<c<<endl;
	cout<<"Goodbye"<<endl;
	cout<<"A new day!!"<<endl;
	cout<<"Надо как-то потестировать ветки"<<endl;
	system("pause");
	return 0;
}