#include <iostream>
#include <string>
using namespace std;

template<typename T>
T getSmallest(T arr[], int n) {
	T temp = arr[0];
	for (int i = 1; i < n; ++i) {
		if (temp > arr[i])
			temp = arr[i];
	}
	return temp;
}
int main()
{
	double list[] = { 1.2,3.3,9.0,1.5,8.7 };
	cout << "ÃÖ¼Ò°ª: " << getSmallest(list, 5);

	return 0;
}