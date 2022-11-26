#include <iostream>
using namespace std;

class Time {
private:
	int hours;
	int minutes;
public:
	Time():hours{0},minutes{0}{}
	Time(int h, int m) :hours{ h }, minutes{ m }{};
	~Time(){}
public:
	Time& operator++();
public:
	int getHours() const { return hours; }
	int getMinutes() const { return minutes; }
public:
	void displayTime() const { cout << getHours() << " : " << getMinutes() << endl; }
};

Time& Time::operator++() {
	++minutes;
	if (minutes >= 60) {
		++hours;
		if (hours >= 24)
			hours = 0;
		minutes = 0;
	}
	return *this;
}

int main()
{
	Time t1(10, 59);

	t1.displayTime();
	++t1;
	t1.displayTime();
	++t1;
	t1.displayTime();

	return 0;
}