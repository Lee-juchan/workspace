int x; // 전역 변수
extern int y; // 현재 소스파일 뒷부분의 변수
extern int z; // 다른 소스파일의 변수

int main()
{
	extern int x;

	x = 10;
	y = 20;
	z = 30;

	return 0;
}

int y;