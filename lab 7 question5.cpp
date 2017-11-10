#include<iostream>
using namespace std;

class ZooAnimal {
	private:
		char* name;
		int cage_number;
		int weight_date;
		int weight;
	public:
		void Destroy();
		void Create(char* n, int cn, int wd, int w);

		char* reptName();
		int daysSinceLastWeighed(int today);
};

void ZooAnimal::Destroy() {
	delete [] name;
}

void ZooAnimal::Create(char* n, int cn, int wd, int w) {
	name = n;
	cage_number = cn;
	weight_date = wd;
	weight = w;
}

char* ZooAnimal::reptName() {
	return name;
}

int ZooAnimal::daysSinceLastWeighed(int today) {
	int startday, thisday;
	thisday = today/100*30 + today - today/100*100;
	startday = weight_date/100*30 + weight_date - weight_date/100*100;

	if (thisday < startday) {
		thisday += 360;
	}

	return (thisday - startday);
}

int main() {
	ZooAnimal bozo;
	char name[50] = "Bozo";

	bozo.Create (name, 408, 1027, 400);

	cout << "This animal's name is " << bozo.reptName() << endl;

	bozo.Destroy();
	return 0;
}
