#include <iostream>
using namespace std;

void sortlasdirma(int* arr, int size)
{
	while (true)
	{
		bool sorted = true;

		for (int i = 0; i < size - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				sorted = false;
			}
		}
		if (sorted) break;
	}
}

int main()
{
	int arr[5];
	int arr2[5];
	int arr3[10];

	cout << "Birinci random massiv " << endl;
	for (int i = 0; i < 5; i++)
	{
		arr[i] = rand() % 90 + 10;
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Ikinci random massiv " << endl;
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = rand() % 90 + 10;
		cout << arr2[i] << " ";
	}
	cout << endl;
	sortlasdirma(arr, 5);
	sortlasdirma(arr2, 5);

	for (int i = 0, j = 0; i < 5; i++)
	{
		arr3[j] = arr[i];//arr3 birinci elementini j= 0 a, arr in birinci elementini menimsedirik ve j ni artiririq 'J++' yeni
		j++;// arr3 10 elementden ibaret oldugu ucun 2 defe artiririq.
		arr3[j] = arr2[i];//arr3 ikinci elementine arr2 nin birinci elementine menimsedirik j ni artiririq "j++" yeni
		j++;// ikinci defe artiririq ki arr3 duzgun olsun sayi 
	}
	cout << "Arr3 cu element birinci massivle ikinci massivin birlesmesi :" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr3[i] << endl;
	}
}