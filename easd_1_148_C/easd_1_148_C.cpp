// 1. Karena algoritma dibuat agar kita bisa berpikir untuk menyelesaikan suatu permasalahan dan membantu kita menyelesaikan masalah secara efisien,konsisten,dan kritis
// 2. Dalam algoritma mempunyai 2 struktur data yakni struktur sequence dan selection
// 3. faktor faktor yang mempengaruhi efisisensi suatu program algoritma yaitu kecepatan mesin, operasi sistem, bahasa pemrograman, ukuran input
// 4. yaitu quick short dikarenakan cara kerjanya yang simple dengan membagi dua sebuah data sehingga efisien untuk mengurutkan data yang ukurannya kecil
// 5. 

#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array : ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter array element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void swap(int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void selectionsort(int low, int high)
{
	int pivot, i, j;
	if (low > high)
		return;

	pivot = arr[low];
	i = low + 1;
	j = high;


