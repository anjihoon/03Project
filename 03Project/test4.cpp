/*(1) 아래의 코드를 참고하여 괄호의 값을 rvalue와 lvalue로 구분해 보세요. (a,
b, c, 5, a + b)
int a = 5;
int b = a;
int c = a + b;
Lvalue는 단일 표현식 이후에도 없어지지 않고 지속되는 객체
쉽게 생각해서 이름을 가지는 객체는 Lvalue
그러므로 const 타입을 포함한 모든 변수는 Lvalue
Rvalue는 표현식이 종료된 이후에는 더이상 존재하지 않는 임시적인 값.
상수 또는 임시 객체는 Rvalue

Lvalue = int a , int b , int c, 
Rvalue = 5, a , a+b
*/



#include <iostream>
int func(int& a) { return a++; }
int main() {
	int x = 1;
	std::cout << func(x) << std::endl;
	std::cout << x << std::endl;
}
