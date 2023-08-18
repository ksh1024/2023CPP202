#include <iostream>
#include <string>

using namespace std;

template <typename T>

class MyData {
public:
	MyData(T data) : data_(data){}

	T get_data(void) {
		return data_;
	}
	void set_data(T data) {
		data_ = data;
	}
private:
	T data_;
};

int main(){
	MyData<int> m1 = MyData<int>(1);
	cout << m1.get_data() << endl;
	m1.set_data(3);
	cout << m1.get_data() << endl;

	MyData<string> m2 = MyData<string>("���� ������?");
	cout << m2.get_data() << endl;
	m2.set_data("�޽�");
	cout << m2.get_data() << endl;
}