#include<iostream>
#include<conio.h>
using namespace std;

class Shape
{
	public:
		virtual void draw ()
		{
			cout << "Draw a shape" <<endl;
		}
};
class Line : public Shape
{
	public:
	    void draw ()
		{
			cout << "Draw a Line" <<endl;
		}
};
class Circle : public Shape
{
	public:
	    void draw ()
		{
			cout << "Draw a Circle" <<endl;
		}
};
class Triangle : public Shape
{
	public:
	    void draw ()
		{
			cout << "Draw a Triangle" <<endl;
		}
};
main()
{
	Shape *s;
	s = new Line;
	s -> draw();
	s = new Circle;
	s -> draw();
	s = new Triangle;
	s -> draw();
		
}
