#include <iostream>
#include <random>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int tmp = 0;
	int const размер = 15;
	int arr[размер]{};
	for (int ae = 0; ae < размер; ae++)
	{
		arr[ae] = rand() % 100;
	}
	for (int i = 0; i < размер - 1; i++)
	{
		for (int j = 0; j < размер - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (i == размер - 2)
		{
			cout << " ратность 3-м: ";
			for (int i = 0; i < размер; i++)
			{
				if (arr[i] % 3 == 0)
				{
					cout << arr[i] << ",";
				}
			}
		}
	}
	cout << "\n\n";
	for (int i = 0; i < размер; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "\n";
	for (int i = 0; i < 1; i++)
	{
		cout << "ћинимальное значение: " << arr[0] << endl;
	}
	cin.get();
	cin.get();
}
