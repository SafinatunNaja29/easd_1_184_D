// 1. karena algoritma digunakan untuk merancang suatu program 
// yang dapat memecahkan masalah yang kompleks dan juga memberikan cara yang sistematis
// 2. Struktur data linier dan struktur data non-linier
// 3. efisiensi suatu program dapat dipengaruhi oleh penggunaan variabel, penggunaan struktur data, 
// memory.
// 4. Insertion Sort, karena ini dapat membandingkan dan mengurutkan elemen-elemen ke posisi
// yang benar/urut
// 5. Quadratic(Insertion Sort, Bubble Sort, Selection Sort) Loglinear (Quick Sort dan Merge Sort)

#include <iostream>
using namespace std;

int saff[104]; // deklarasi variable array
int n;

void input() {		//Procedure input
	while (true)	//menambahkan kondisi atau kasus
	{
		cout << "Masukkan panjang element array : ";
		cin >> n;

		if (n <= 104)
			break;
		else
			cout << "\nMaksimum panjang array adalah 104" << endl;
	}
	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> saff[i];
	}
}

void swap(int x, int y) {
	int temp;	// penyimpanan sementara
	temp = saff[x];
	saff[x] = saff[y];
	saff[y] = temp;
}

void SelectionSort() {	//procedure selectionsort
	for (int Sn = 0; Sn < n - 1; Sn++)
	{
		int min_index = Sn;
		for (int i = (Sn + 1); i < n; i++)
		{
			min_index = i;
		}
		swap(min_index, Sn);
	}
}

void display() {

}