
#include<iostream>
using namespace std;

class Box {
	public:
		double length;
		double breadth;
		double height;

		// Member functions
		double getVolume(void);
		void setLength(double len);
		void setBreadth(double bre);
		void setHeight(double hei);
};

double Box::getVolume(void) {
	return length*breadth*height;
}

void Box::setLength(double len) {
	length = len;
}

void Box::setBreadth(double bre) {
	length = bre;
}

void Box::setHeight(double hei) {
	height = hei;
}

int main() {
	Box box1;
	Box box2;
	double volume = 0.0;

	// box1 specifications
	box1.setLength(6);
	box1.setBreadth(7);
	box1.setHeight(5);

	// box2 specifications
	box2.setLength(12);
	box2.setBreadth(13);
	box2.setHeight(10);

	// volume of box1
	cout << "Volume of box1: " << box1.getVolume() << endl;

	// volume of box2
	cout << "Volume of box2: " << box2.getVolume() << endl;

	return 0;
}