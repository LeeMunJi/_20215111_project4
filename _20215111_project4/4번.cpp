#include <iostream>
using namespace std;

class Employee {
protected:
	string name;
	int salary;
public:
	Employee(string n, int s):name{n},salary{s}{}
public:
	void setName(string name) { this->name = name; }
	void setSalary(int salary) { this->salary = salary; }
public:
	string getName() const { return name; }
	int getSalary() const { return salary; }
	int computeSalary() { return salary; }
};

class Manger :public Employee {
private:
	int bonus;
public:
	Manger(string n, int s, int b):Employee(n,s),bonus{b}{}
	void setBonus(int bonus) { this->bonus = bonus; }
	int getBonus() const { return bonus; }
	int computeSalary() { return salary + bonus; }
};

int main()
{
	Manger m1("김철수", 200, 100);
	cout << "이름: "<<m1.getName() << endl << "월급: "<<m1.getSalary() << endl << "보너스: "<<m1.getBonus() << endl << "전체 급여: "<<m1.computeSalary();

	return 0;
}