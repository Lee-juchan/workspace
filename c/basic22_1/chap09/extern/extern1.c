int x; // ���� ����
extern int y; // ���� �ҽ����� �޺κ��� ����
extern int z; // �ٸ� �ҽ������� ����

int main()
{
	extern int x;

	x = 10;
	y = 20;
	z = 30;

	return 0;
}

int y;