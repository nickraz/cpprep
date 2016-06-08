#include <iostream>

using namespace std;

int main()
{
	int a = 5, b = 10, c = 0;
	cout<<"Hi hi hi hi"<<endl<<"Testing ASM"<<endl;
	__asm
	{
		push ebp
			mov ebp, esp
			mov a, 4
			mov b, 5
			mov eax, a
			add eax, b
			mov c, eax
			leave
	}
	cout<<"C = " <<c<<endl;
	system("pause");
	return 0;
}