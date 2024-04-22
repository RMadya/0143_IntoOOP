#include <iostream>
using namespace std;

class bangunDatar {

	//akses modifier
private:
	float panjang, Lebar;
public:
	float Luas;


	void input() { // methode input persegi panjang

		cout << "Masukkan Panjangnya = ";
		cin >> panjang;
		cout << "Masukkan Lebarnya = "; // step 1
		cin >> Lebar;
	}
	float hitungLuas() {
		