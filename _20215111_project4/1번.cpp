#include <iostream>
using namespace std;

class Box
{
	static int s_count;
	friend void printBox(Box& box);
private:
	int count;
	double length;
	double width;
	double height;
public:
	Box(double l = 0, double w = 0, double h = 0) :length{ l }, width{ w }, height{ h }{s_count++; count = s_count; }
public:
	bool operator<(const Box& temp);
public:
	double getLength() const { return length; }
	double getWidth() const { return width; }
	double getHeight() const { return height; }
	double getVolume() const
	{
		return length * width * height;
	}
	int getCount() const { return count; }
};

int Box::s_count = 0;

bool Box::operator<(const Box& temp)
{
	return (this->getVolume() < temp.getVolume());
}

void printBox(Box& box)
{
	cout << "����" << box.getCount() << endl;
	cout << "������ ����" << box.getLength() << endl;
	cout << "������ �ʺ�" << box.getWidth() << endl;
	cout << "������ ����" << box.getHeight() << endl;
	cout << "������ ����" << box.getVolume() << endl;
	cout << endl;
}

int main()
{
	Box a(10, 10, 10), b(20, 20, 20);

	printBox(a);
	printBox(b);

	cout << boolalpha << (a < b) << endl;
}