
#include<iostream>
using namespace std;

class Point {
	public:
	Point();

	Point (int xval, int yval);

	void Move (int dx, int dy);

	int Get_X() const;
	int Get_Y() const;

	void Set_X(int xval);
	void Set_Y(int yval);

	void print() const;

	private:
	int X;
	int Y;
};

Point::Point() {
	X = 0;
	Y = 0;
}

Point::Point(int xval, int yval) {
	X = xval;
	Y = yval;
}

void Point::Move(int dx, int dy) {
	X += dx;
	Y += dy;
}

int Point::Get_X() const {
	return X;
}

int Point::Get_Y() const {
	return Y;
}

void Point::Set_X(int xval) {
	X = xval;
}

void Point::Set_Y(int yval) {
	Y = yval;
}

void Point::print() const {
	cout << "(" << X << ", " << Y << ")" << endl;
}

class Rectangle {
	Point bottomleft, bottomright, topleft, topright;

	int side1();
	int side2();

	public:
	Rectangle(Point bottomleft, Point topright);
	Rectangle();

	Point getBottomLeft();
	Point getBottomRight();
	Point getTopLeft();
	Point getTopRight();

	void print();

	int area();
};

Rectangle::Rectangle(Point bottomleft, Point topright){
	int trX = topright.Get_X();
	int blY = bottomleft.Get_Y();
	bottomright.Set_X(trX);
	bottomright.Set_Y(blY);

	int trY = topright.Get_Y();
	int blX = bottomleft.Get_X();
	topleft.Set_X(blX);
	topleft.Set_Y(trY);
}

Rectangle::Rectangle() {
	bottomleft.Set_X(0);
	bottomleft.Set_Y(0);

	bottomright.Set_X(1);
	bottomright.Set_Y(0);

	topleft.Set_X(0);
	topleft.Set_Y(1);

	topright.Set_X(1);
	topright.Set_Y(1);
}

Point Rectangle::getBottomLeft() {
	return bottomleft;
}

Point Rectangle::getBottomRight() {
	return bottomright;
}

Point Rectangle::getTopLeft() {
	return topleft;
}

Point Rectangle::getTopRight() {
	return topright;
}

int Rectangle::side1() {
	return topright.Get_X() - bottomleft.Get_X();
}

int Rectangle::side2() {
	return topright.Get_Y() - bottomleft.Get_Y();
}

void Rectangle::print() {
	bottomleft.print();
	bottomright.print();
	topleft.print();
	topright.print();
}

int Rectangle::area() {
	return (*this).side1() * (*this).side2();
}

int main() {

	return 0;
}