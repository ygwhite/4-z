#include <iostream>
#include <random>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int tmp = 0;
	int const ������ = 15;
	int arr[������]{};
	for (int ae = 0; ae < ������; ae++)
	{
		arr[ae] = rand() % 100;
	}
	for (int i = 0; i < ������ - 1; i++)
	{
		for (int j = 0; j < ������ - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (i == ������ - 2)
		{
			cout << "��������� 3-�: ";
			for (int i = 0; i < ������; i++)
			{
				if (arr[i] % 3 == 0)
				{
					cout << arr[i] << ",";
				}
			}
		}
	}
	cout << "\n\n";
	for (int i = 0; i < ������; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "\n";
	for (int i = 0; i < 1; i++)
	{
		cout << "����������� ��������: " << arr[0] << endl;
	}
	cin.get();
	cin.get();
}
