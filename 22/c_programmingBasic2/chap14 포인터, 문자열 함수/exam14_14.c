#include <stdio.h> //function return _ array  / + malloc() ?????????????? 예제가 무슨 의미인지 잘 모르겠다 
															//그냥 배열 주소 리턴하고, 포인터로 받으면 배열 받아진다~ 

int arrMulti(int arr[], int size);

int main(void)
{
	int array[4] = {1,3,5,7}; //array initialization
	
	for(int i=0; i<4; i++)
	{
		printf("array[%d] = %d\n", i, array[i]); //print array (before)
	}
	printf("\n");
	
	int *arrayPointer; //nomal pointer
	arrayPointer = arrMulti(array, 4); //return changed array to arrayPointer
	
	for(int i=0; i<4; i++)
	{
		printf("arrayPointer[%d] = %d\n", i, arrayPointer[i]); //print array (after)
	}
	printf("\n");
	
	return 0;
	
}

int arrMulti(int arr[], int size) //강의안에서는 함수 자체가 function pointer으로 쓰였는데, 오류가 자꾸 남??? 의미도 모르겠고 
{
	int *arrMalloc = (int*)malloc(size); //memory allocate -> size만큼
	for(int i=0; i<4; i++)
	{
		arrMalloc[i] = arr[i] * size; //그냥 size가 곱하는 변수로 들어감, 의미없음 
	}
	return arrMalloc;
}
