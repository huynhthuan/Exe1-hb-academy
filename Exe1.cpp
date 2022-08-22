// Exe1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getSumUnitNumber(int number, int unitStart) {
	int unitNumber = (number % unitStart * 10) / unitStart;


	if (number == number % unitStart) {
		return unitNumber;
	}
	else {
		return unitNumber + getSumUnitNumber(number, unitStart * 10);
	}
}

int calcFactorial(int number) {
	if (number == 0) {
		return 1;
	}
	else {
		return number * calcFactorial(number - 1);
	}
}

int main()
{
	//Exe 1

	//int number;

	//printf("Nhap so N: ");
	//scanf_s("%d", &number);

	//if (number >= 20 && number <= 50) {
	//	printf("%d nam trong khoang 20 -> 50", number);
	//	return 1;
	//};

	//printf("%d khong nam trong khoang 20 -> 50", number);

	//===================================================

	//Exe 2

	/*int number;

	printf("Nhap so N: ");
	scanf_s("%d", &number);

	printf("So chia het cho 2, 3, 5 tu 0 den %d la: ", number);

	for (int i = 1; i < number; i++)
	{
		if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0) {
			printf("%d ", i);
		}
	}

	*/

	//===================================================

	//Exe 3

	//int number;

	//printf("Nhap so N: ");
	//scanf_s("%d", &number);

	//int result = getSumUnitNumber(number, 1);

	//printf("Tong tat ca cac so cua so %d la: %d", number, result);


	//===================================================

	//Exe 4

	/*char str[50];
	int countNumber = 0, countCharacter = 0;

	printf("Nhap chuoi bat ki: ");

	scanf_s("%s", str, 50);

	for (int i = 0; i < sizeof(str); i++)
	{
		if (typeid(str[i]).name == "d") {

		}
	}

	*/

	//===================================================

	//Exe 5

	/*int number;

	printf("Nhap so N: ");
	scanf_s("%d", &number);
	int result = calcFactorial(number);
	printf("\nGiai thua cua so %d la: %d", number, result);*/

	//===================================================

	//Exe 6

	/*int numberN;
	int numberM;
	int sum = 0;

	printf("Nhap so N: ");
	scanf_s("%d", &numberN);

	printf("Nhap so M: ");
	scanf_s("%d", &numberM);

	for (int i = numberN; i <= numberM; i++)
	{
		if (i % 2 == 0 && i % 5 == 0) {
			sum += i;
		}
	}

	printf("Tong cac so chia het cho 2 va 5, tu %d -> %d la: %d", numberN, numberM, sum);*/

	//===================================================

    //Exe 7

}

