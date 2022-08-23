// Exe1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int getSumUnitNumber(int number, int unitStart)
{
	int unitNumber = (number % (unitStart * 10)) / unitStart;

	if (number == number % unitStart)
	{
		return unitNumber;
	}
	else
	{
		return unitNumber + getSumUnitNumber(number, unitStart * 10);
	}
}

int calcFactorial(int number)
{
	if (number == 0)
	{
		return 1;
	}
	else
	{
		return number * calcFactorial(number - 1);
	}
}

void arrDump(int arr[], int size)
{
	printf("Arr dump: [ ");

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("]");
}

void sortArrNumber(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int jMin = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[jMin])
			{
				jMin = j;
			}
		}

		if (jMin != i)
		{
			std::swap(arr[i], arr[jMin]);
		}
	}
}

void strRev(char str[])
{
	size_t strLen = strlen(str);
	char temp;

	for (int i = 0; i < strLen / 2; i++)
	{
		temp = str[i];
		str[i] = str[strLen - i - 1];
		str[strLen - i - 1] = temp;
		// std::swap(, );
	}
}

int countElement(int arr[], int element, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element)
		{
			count++;
		}
	}

	return count;
}

int main()
{
	// Exe 1

	int number;

	printf("Nhap so N: ");
	scanf_s("%d", &number);

	if (number >= 20 && number <= 50) {
		printf("%d nam trong khoang 20 -> 50", number);
		return 1;
	};

	printf("%d khong nam trong khoang 20 -> 50", number);

	//===================================================

	// Exe 2

	int number;

	printf("Nhap so N: ");
	scanf_s("%d", &number);

	printf("So chia het cho 2, 3, 5 tu 0 den %d la: ", number);

	for (int i = 1; i < number; i++)
	{
		if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0) {
			printf("%d ", i);
		}
	}

	//===================================================

	// Exe 3

	int number;

	printf("Nhap so N: ");
	scanf_s("%d", &number);

	int result = getSumUnitNumber(number, 1);

	printf("Tong tat ca cac so cua so %d la: %d", number, result);

	//===================================================

	// Exe 4

	char str[50] = "";
	int countNumber = 0, countCharacter = 0;

	printf("Nhap chuoi bat ki: ");

	fgets(str, sizeof(str), stdin);

	str[strlen(str) - 1] = '\0';

	for (int i = 0; i < strlen(str); i++)
	{
		if (isdigit(str[i]))
		{
			countNumber++;
		}
		else
		{
			countCharacter++;
		}
	}

	printf("So chu cai trong chuoi %s la: %d\n", str, countCharacter);
	printf("So chu so trong chuoi %s la: %d\n", str, countNumber);

	//===================================================

	// Exe 5

	int number;

	printf("Nhap so N: ");
	scanf_s("%d", &number);
	int result = calcFactorial(number);
	printf("\nGiai thua cua so %d la: %d", number, result);

	//===================================================

	// Exe 6

	int numberN;
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

	printf("Tong cac so chia het cho 2 va 5, tu %d -> %d la: %d", numberN, numberM, sum);

	//===================================================

	// Exe 7

	int sizeArr;
	int numbers[100];

	printf("Nhap so N: ");
	scanf("%d", &sizeArr);

	for (int i = 0; i < sizeArr; i++)
	{
		printf("Nhap gia tri phan tu %d : ", i);
		scanf("%d", &numbers[i]);
	}

	sortArrNumber(numbers, sizeArr);

	arrDump(numbers, sizeArr);

	//===================================================

	// Exe 8

	int sizeArr;
	int numbers[100];
	int numbersArrAsc[100];
	int numbersArrAscSize = 0;

	printf("Nhap so N: ");
	scanf("%d", &sizeArr);

	for (int i = 0; i < sizeArr; i++)
	{
		printf("Nhap gia tri phan tu %d : ", i);
		scanf("%d", &numbers[i]);
	}

	for (int j = 0; j < sizeArr; j++)
	{
		numbersArrAsc[j] = numbers[j];
		numbersArrAscSize++;
		if (numbers[j] > numbers[j + 1])
			break;
	}

	arrDump(numbersArrAsc, numbersArrAscSize);

	//===================================================

	// Exe 9

	char fullname[50] = "";

	printf("Nhap ho va ten cua ban: ");
	fgets(fullname, sizeof(fullname), stdin);

	fullname[strlen(fullname) - 1] = '\0';

	char *token = strtok(fullname, " ");

	printf("Ho va ten dao nguoc la: ");

	while (token != NULL)
	{
		strRev(token);
		printf("%s ", token);
		token = strtok(NULL, " ");
	}

	//===================================================

	// Exe 10

	char fullname[300];
	char target;

	int hasCheckDuplicate[300];
	int indexDuplicate = 0;

	printf("Nhap ho va ten cua ban: ");

	fgets(fullname, sizeof(fullname), stdin);

	fullname[strlen(fullname) - 1] = '\0';

	for (int i = 0; i < strlen(fullname); i++)
	{
		int count = 1;

		if (isspace(fullname[i]) || countElement(hasCheckDuplicate, i, indexDuplicate) != 0)
		{
			continue;
		}

		for (int j = i + 1; j < strlen(fullname); j++)
		{
			if (fullname[i] == fullname[j])
			{
				count++;
				hasCheckDuplicate[indexDuplicate] = j;
				indexDuplicate++;
			}
		}

		printf("Ki tu %c xuat hien %d lan\n", fullname[i], count);
	}
}