#include <iostream>

using namespace std;

template <typename T>

T sum(T x, T y) {
	T z = x + y;
	return z;
}
int main() {
	cout << sum<int>(1,2) << endl;
	cout << sum<float>(1.f, 2.f) << endl;
}