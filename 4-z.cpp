#include <iostream>
#include <random>
using namespace std;
int s_k(int size, int arr[], int tmp)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (i == size - 2)
		{
			cout << "Кратность 3-м: ";
			for (int i = 0; i < size; i++)
			{
				if (arr[i] % 3 == 0)
				{
					cout << arr[i] << ",";
				}
			}
		}
	}
	return 0;
}
int  rand(int size, int arr[])
{
	for (int ae = 0; ae < size; ae++)
	{
		arr[ae] = rand() % 100;
	}
	return 0;
}
int min_num(int arr[])
{
	for (int i = 0; i < 1; i++)
	{
		cout << "\nМинимальное значение: " << arr[0] << endl;
	}
	return 0;
}
int vivod(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
int numbin(int x, int arr[], int size) {
	int min = 0, max = size - 1;
	while (min <= max)
	{
		int mid = (min + max) / 2;
		if (x > arr[mid])
		{
			min = mid + 1;
		}
		else if (x < arr[mid])
		{
			max = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int x = 0;
	int tmp1 = 0;
	int const size_r = 16;
	int array[size_r]{};
	int left = 0;
	int right = size_r - 1;
	int k1 = 0, i_k = -1;
	rand(size_r, array);
	s_k(size_r, array, tmp1);
	min_num(array);
	vivod(array, size_r);
	cout << "Какое значение вы хотите взять? \n ";
	cin >> x;
	int res = numbin(x, array, size_r);
	if (res == -1)
	{
		cout << "Этого числа тут нет(" << endl;
	}
	else 
	{
		cout << "Ваше число: " << res << endl;
	}
	return 0;
}
	