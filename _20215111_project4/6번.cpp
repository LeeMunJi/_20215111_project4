#include <iostream>
using namespace std;

class Weapon
{
public:
	virtual void load() = 0;
};
class Bomb :public Weapon {
public:
	void load() { cout << "���� �����մϴ�." << endl; }
};
class Gun :public Weapon {
public:
	void load() { cout << "��ź�� �����մϴ�." << endl; }
};

int main()
{
	Weapon* w[3];
	w[0] = new Gun;
	w[1] = new Bomb;
	w[2] = new Bomb;

	for (Weapon* w1 : w)
		w1->load();

	return 0;
}