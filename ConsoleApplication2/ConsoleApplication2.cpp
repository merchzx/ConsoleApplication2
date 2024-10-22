#include <iostream>
#include <random>
using namespace std;

class Drob {
	float znam;
	float chisl;
public://AR
	Drob(int a, int b) {
		znam = b;
		chisl = a;

		if (b == 0) {
			cout << "Znamenatel is can`t be ZERO!!!";
		}
	}

	Drob() {
		znam = 1;
		chisl = 0;
	}

	void Rand() {
		srand(time(0));
		znam = rand() % 100 + 3;
		chisl = rand() % 100 + 3;
	}

	void Show() {
		cout << chisl << "/" << znam << " = " << chisl / znam<<endl;
	}
	Drob operator+(int x) {
		znam = znam + x;
		chisl = chisl + x;

	}
	Drob operator+(Drob * obj) {
		znam = znam + obj->znam;
		chisl = chisl + obj->chisl;
	}
	Drob operator-(int x) {
		znam = znam - x;
		chisl = chisl - x;

	}
	Drob operator-(Drob* obj) {
		znam = znam - obj->znam;
		chisl = chisl - obj->chisl;
	}
	Drob operator/(int x) {
		znam = znam / x;
		chisl = chisl / x;

	}
	Drob operator/(Drob* obj) {
		znam = znam / obj->znam;
		chisl = chisl / obj->chisl;
	}
	Drob operator*(int x) {
		znam = znam * x;
		chisl = chisl * x;

	}
	Drob operator*(Drob* obj) {
		znam = znam * obj->znam;
		chisl = chisl * obj->chisl;
	}

	Drob operator++(int) {
		Drob temp(*this);
		znam += 1;
		chisl += 1;
		return temp;
	}
	Drob operator--(int) {
		Drob temp(*this);
		znam -= 1;
		chisl -= 1;
		return temp;
	}

	Drob& operator++() {
		znam += 1;
		chisl += 1;
		return *this;
	}

	Drob& operator--() {
		znam -= 1;
		chisl -= 1;
		return *this;
	}


};


int main()
{
	srand(time(0));
	Drob f(5,5);
	Drob c = f--;
	f.Show();
	c.Show();


}