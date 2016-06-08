#include <iostream>

using namespace std;

int main()
{
	cout<<"Hi hi hi hi"<<endl;
	__asm
	{
		push ebp
		mov ebp, esp
		mov eax, 4
		mov ebx, 5
		leave
	}
	system("pause");
	return 0;
}