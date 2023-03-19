
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
	int i;
	setlocale(LC_ALL, "rus");
	srand((unsigned int)time(0));
	const int n = 10;
	int a[n];
	cout << "Генерирует рандомные элементы массива (размерностью 10) от -10 до 10 (включительно)" << endl;
	for (i = 0; i < n; i++)
	{
		a[i] = -10 + rand() % 21;
		cout << a[i] << "\t";
	}
	cout << endl;
	float sum = 0;
	float sr = 0;
	for (i = 0; i < n; i++)
	{
		sum += a[i];

	}
	cout << sum;
	cout << endl;
	
	sr = (sum / n);
	cout << sr<<endl;
	string exit;
	cout << "Чтобы выйти из программы напишите 0" << endl;
	cin >> exit;
	while (exit != "0")
	{
		cout << "Ошибка, напишите 0 для выхода из программы " << endl;
		cin >> exit;
	}
	return 0;
}
