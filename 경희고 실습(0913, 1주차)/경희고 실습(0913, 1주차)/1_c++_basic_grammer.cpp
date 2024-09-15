//#include <iostream> // 전처리기
//
//using namespace std; // std::을 매번 쓰지 않기 위해 설정
//
//// main 함수
//int main() {
//    // 변수 선언 (int는 정수, double은 실수, char는 문자)
//    int a, b;          
//    double result;       
//    char op;    
//
//    // 출력 (cout: 콘솔에 출력하기)
//    cout << "두 숫자(a와 b)를 입력하세요: ";
//
//    // 입력 (cin: 콘솔에서 입력받기)
//    cin >> a >> b;
//
//    // 연산자를 입력받기
//    cout << "연산자(+, -, *, / 중 하나)를 입력하세요: ";
//    cin >> op;
//
//    // 조건문을 사용한 계산 처리
//    if (op == '+') {
//        result = a + b; // 덧셈 연산
//    }
//    else if (op == '-') {
//        result = a - b; // 뺄셈 연산
//    }
//    else if (op == '*') {
//        result = a * b; // 곱셈 연산
//    }
//    else if (op == '/') {
//        if (b != 0) {
//            result = static_cast<double>(a) / b; // 나눗셈 연산 (정수를 실수로 변환)
//        }
//        else {
//            cout << "에러: 0으로 나눌 수 없습니다!" << endl;
//            return 0; // 에러 발생 시 프로그램 종료
//        }
//    }
//    else {
//        cout << "잘못된 연산자입니다!" << endl;
//        return 0; // 잘못된 연산자 입력 시 프로그램 종료
//    }
//
//    // 결과 출력
//    cout << "결과: " << result << endl;
//
//    // 반복문 예시 (for문)
//    cout << "구구단 " << a << "단:\n";
//    for (int i = 1; i <= 10; i++) { // 1부터 10까지 반복
//        cout << a << " * " << i << " = " << a * i << endl; // 구구단 출력
//    }
//
//    return 0; // 프로그램 종료
//}
//
////https://humorous-clock-122.notion.site/1-0914-86bd2929954c4840a0a5b59aa0f04c02?pvs=4