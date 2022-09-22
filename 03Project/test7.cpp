#include <iostream>
int main() {
	int num = 10;
	std::cout << "int num 주소 : 0x" << &num << std::endl \
		<< "int num 값 : " << num << std::endl << std::endl;
	int& ref = num;
	std::cout << "레퍼런스 주소 : 0x" << &ref << std::endl \
		<< "레퍼런스가 참조하는 값 : " << ref << std::endl << std::endl;
	int* ptr = &num;
	std::cout << "포인터 주소 : 0x" << &ptr << std::endl \
		<< "포인터가 참조하는 값 : " << *ptr << std::endl;
	return 0;
}
/*포인터는 메모리의 주소를 가지고 있는 변수이며 주소 값을 통해 
* 메모리에 간접적으로 참조하여 접근한다
* 레퍼런스는 자신이 잠조하는 변수를 대신할수 있는 명칭을 붙여 
* 변수명을 통해 메모리에 직접 참조한다.
*/
