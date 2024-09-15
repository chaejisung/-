//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int a = 7;
//	int* ptr = &a;		// a의 주소를 담는 ptr 선언
//	int** pptr = &ptr;  // ptr의 주소를 담는 pptr 선언
//
//	cout << "a의 값: " << a << endl;
//	cout << "ptr이 가리키는 값: " << *ptr << endl;
//	cout << "pptr이 가리키는 값: " << *(*pptr) << endl;
//	cout << endl;
//
//	cout << "a의 주소: " << &a << endl;
//	cout << "ptr이 가리키는 주소값: " << ptr << endl;
//	cout << "pptr이 담고있는 주소값: " << *pptr << endl;
//	cout << endl;
//
//	cout << "포인터 변수 ptr의 주소값: " << &ptr << endl;
//	cout << "pptr이 가리키는 주소값: " << pptr << endl;
//
//	return 0;
//}