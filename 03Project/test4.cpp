/*(1) �Ʒ��� �ڵ带 �����Ͽ� ��ȣ�� ���� rvalue�� lvalue�� ������ ������. (a,
b, c, 5, a + b)
int a = 5;
int b = a;
int c = a + b;
Lvalue�� ���� ǥ���� ���Ŀ��� �������� �ʰ� ���ӵǴ� ��ü
���� �����ؼ� �̸��� ������ ��ü�� Lvalue
�׷��Ƿ� const Ÿ���� ������ ��� ������ Lvalue
Rvalue�� ǥ������ ����� ���Ŀ��� ���̻� �������� �ʴ� �ӽ����� ��.
��� �Ǵ� �ӽ� ��ü�� Rvalue

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
