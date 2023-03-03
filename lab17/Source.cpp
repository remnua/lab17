#include <iostream>
#include <ctime>;
#include <math.h>
#include <stdlib.h>


using namespace std;


int main() {	
	srand(time(0));
	int count = 0;
	int count1 = 0;
	double* arr = new double[15];
	for (int i = 0; i < 15; i++) arr[i] = pow(-1, rand() % 2) * (rand() % 3)/((rand() % 20) + 1);
	cout << "Our array: " << endl;
	for (int i = 0; i < 15; i++) cout << arr[i] << ";" << " ";
	cout << endl;
	for (int i = 0; i < 15; i++) {
		if (arr[i] > 0) count++;
		if (arr[i] < 0) count1++;
	}
	cout << "Count of positive numbers: " << count << endl;
	cout << "Count of negative numbers: " << count1;
	delete arr;
}




//int main() {
//	int **arr = new int* [3];
//	for (int i = 0; i < 3; i++) {
//		arr[i] = new int[3];
//	}
//	int n = 3;
//	int par = 0;
//	int nepar = 0;
//	srand(time(0));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			*(*(arr + i) + j) = (rand() % 1000) + 1;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << *(*(arr + i) + j) << "\t";
//		}
//		cout << endl << endl;
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i == j || i + j == n - 1) cout << *(*(arr + i) + j) << "\t";
//			else cout << " " << "\t";
//			if (*(*(arr + i) + j) % 2 == 0) par++;
//			else nepar++;
//		}
//		cout << endl << endl;
//	}
//	cout << "Count of even: " << par << endl;
//	cout << "Count of odd: " << nepar << endl;
//  delete arr;
//}
