#include <stdio.h> //function return _ array  / + malloc() ?????????????? ������ ���� �ǹ����� �� �𸣰ڴ� 
															//�׳� �迭 �ּ� �����ϰ�, �����ͷ� ������ �迭 �޾�����~ 

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

int arrMulti(int arr[], int size) //���Ǿȿ����� �Լ� ��ü�� function pointer���� �����µ�, ������ �ڲ� ��??? �ǹ̵� �𸣰ڰ� 
{
	int *arrMalloc = (int*)malloc(size); //memory allocate -> size��ŭ
	for(int i=0; i<4; i++)
	{
		arrMalloc[i] = arr[i] * size; //�׳� size�� ���ϴ� ������ ��, �ǹ̾��� 
	}
	return arrMalloc;
}
