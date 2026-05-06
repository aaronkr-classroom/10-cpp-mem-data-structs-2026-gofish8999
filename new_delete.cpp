#include<iostream>
using namespace std;

int main(void) {

	int* p1 = new int;
	*p1 = 10;
	cout << "p1 값:" << *p1 << endl;



	int* p2 = new int(20);
	*p1 = 10;
	cout << "p2 값:" << *p2 << endl;

	int* arr = new int[3];

	for (int i = 0; i < 3; i++) {
		arr[i] = i + 1;
	}


	cout << "배열 값: ";
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;


	delete p1;
	delete p2;

	return 0;


}
