//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//    int X, * pX, *pX2, ** ppX;
//
//    // 1번
//    pX = &X;
//    ppX = &pX;
//    cout << "X에 값을 입력하세요: ";
//    cin >> **ppX;
//    cout << endl;
//
//    cout << "X의 값: " << X << endl;
//    cout << "pX의 값: " << *pX << endl;
//    cout << "ppX의 값: " << **ppX << endl;
//    cout << "pX의 주소값: " << &pX << endl;
//    cout << "ppX가 가리키는 값: " << ppX << endl;
//    cout << endl;
//
//    // 2번
//    (**ppX)++;
//    cout << "X의 값: " << X << endl;
//    cout << "pX의 값: " << *pX << endl;
//    cout << "ppX의 값: " << **ppX << endl;
//    cout << endl;
//
//    // 3번
//    pX2 = &X;
//    ppX = &pX2;
//
//    cout << "X의 값: " << X << endl;
//    cout << "pX2의 값: " << *pX2 << endl;
//    cout << "ppX의 값: " << **ppX << endl;
//    cout << "pX2의 주소값: " << &pX2 << endl;
//    cout << "ppX가 가리키는 값: " << ppX << endl;
//
//    return 0;
//}
