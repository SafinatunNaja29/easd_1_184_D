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
}