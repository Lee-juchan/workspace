#include <stdio.h>

int main() //1byte씩 숫자가 저장됨
{
	int data = 0x0a0b0c0d; // | 0d | 0c | 0b | 0a | -> 4byte
	char* pc;

	pc = (char*)&data;

	for (int i = 0; i < 4; i++)
	{
		printf("pc + %d = %02x\n", i, *(pc+i));
	}
	return 0;
}