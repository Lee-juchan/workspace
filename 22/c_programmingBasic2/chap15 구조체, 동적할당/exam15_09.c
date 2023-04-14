#include <stdio.h> //struct _ dot operator

typedef struct car
{
	char *name;
	int year;
	int mileage;
} car;

int main(void)
{
	car mycar = {"sonata", 2020, 120000};
	
	printf("name: %s\n", mycar.name);
	printf("year: %d\n", mycar.year);
	printf("mileage: %d\n\n", mycar.mileage);
	
	printf("&mycar: %d\n", &mycar); //adress of struct
	printf("&mycar.year: %d\n\n", &mycar.year);
	
	printf("Enter mileage update: "); //enter data <- scanf
	scanf("%d", &mycar.mileage);
	printf("updated mileage: %d\n", mycar.mileage);
	
	return 0;
}
