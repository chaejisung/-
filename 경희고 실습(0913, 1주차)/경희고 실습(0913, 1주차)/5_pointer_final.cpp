//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//    int X, * pX, *pX2, ** ppX;
//
//    // 1��
//    pX = &X;
//    ppX = &pX;
//    cout << "X�� ���� �Է��ϼ���: ";
//    cin >> **ppX;
//    cout << endl;
//
//    cout << "X�� ��: " << X << endl;
//    cout << "pX�� ��: " << *pX << endl;
//    cout << "ppX�� ��: " << **ppX << endl;
//    cout << "pX�� �ּҰ�: " << &pX << endl;
//    cout << "ppX�� ����Ű�� ��: " << ppX << endl;
//    cout << endl;
//
//    // 2��
//    (**ppX)++;
//    cout << "X�� ��: " << X << endl;
//    cout << "pX�� ��: " << *pX << endl;
//    cout << "ppX�� ��: " << **ppX << endl;
//    cout << endl;
//
//    // 3��
//    pX2 = &X;
//    ppX = &pX2;
//
//    cout << "X�� ��: " << X << endl;
//    cout << "pX2�� ��: " << *pX2 << endl;
//    cout << "ppX�� ��: " << **ppX << endl;
//    cout << "pX2�� �ּҰ�: " << &pX2 << endl;
//    cout << "ppX�� ����Ű�� ��: " << ppX << endl;
//
//    return 0;
//}
