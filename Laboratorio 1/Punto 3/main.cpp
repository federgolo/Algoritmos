#include <chrono>
#include <iostream>
#include <math.h>
using namespace std;

int product(int n) {
	int **matrixA, **matrixB, **product;
	int cols;
	int rows;
	rows = cols = n;

	matrixA = new int *[rows];
	matrixB = new int *[rows];
	product = new int *[rows];

	for (int i = 0; i < rows; i++) {
		matrixA[i] = new int[cols];
		matrixB[i] = new int[cols];
		product[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrixA[i][j] = 1;
			matrixB[i][j] = 2;
			product[i][j] = 0;
		}
	}

	auto start = chrono::steady_clock::now();
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			for (int k = 0; k < n; k++) {
				product[i][j] += matrixA[i][k] * matrixB[k][j];
			}
		}
	}
	auto end = chrono::steady_clock::now();
	auto diff = end - start;
	double time = chrono::duration<double, ratio<1>>(diff).count();

	double answer = (time / (2 * (pow(n, 3)) - pow(n, 2)));
	cout << answer << ", ";
}

int main() {
	double arr[2][10];

	for (int m = 25; m < 275; m += 25) {
	  cout << "[";
		for (int k = 0; k < 10; k++) {
			

			arr[0][(m / 25) - 1] = m;
			arr[1][(m / 25) - 1] = product(m);
		}
		cout << "]" << '\n' << '\n';
	}

}