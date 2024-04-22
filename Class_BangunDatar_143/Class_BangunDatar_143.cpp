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
		return panjang * Lebar; // step 2

	}
	void display() {
		cout << "Panjangya = " << panjang << endl;
		cout << "Lebarnya = " << Lebar << endl; // step 3
		cout << "Luasnya = " << hitungLuas() << endl;
	}

};


int main() {
	bangunDatar pp; // Deklarasi objek pp dari class bangunDatar
	pp.input();
	pp.display();


	return 0;
}