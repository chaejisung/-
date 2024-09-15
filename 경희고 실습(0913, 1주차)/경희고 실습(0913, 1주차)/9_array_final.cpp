//#include <iostream>
//
//using namespace std;
//
//int main() {
//    // 1번
//    int matrix[3][3] = { 1,2,3,4,5,6,7,8,9 };
//
//    cout << "2차원 배열 출력: " << endl;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//
//    // 2번
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            matrix[i][j] = matrix[i][j] * 3;
//        }
//    }
//    cout << "2차원 배열 출력: " << endl;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//
//    // 3번
//    int temp = matrix[0][0];
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            if (temp < matrix[i][j]) {
//                temp = matrix[i][j];
//            }
//        }
//        cout << endl;
//    }
//    cout << "matrix의 최대값: " << temp;
//
//
//    return 0;
//}
