#include <iostream>

int main(void)
{
	void MyFunc(void)
	{
		std::cout << "MyFunc(void) called" << std::endl;
	}
	void MyFunc(char c)
	{
		std::cout << "MyFunc(char c) called" << std::endl;
	}
	void MyFunc(int a, int b)
	{
		std::cout << "MyFunc(int a, int b) called" << std::endl;
	}
	int MyFunc(void)
	{
		MyFunc();
		MyFunc('A');
		MyFunc(12,13);
		return 0;
	}

}
//�Լ��� �����ε�
//int MyFunc(int n)
//int MyFunc(float n)
//int MyFunc(int a, int b)
//
//void MyFunc(int n)�� �Ұ���
//�Լ���(����) ���·� �Լ��� ȣ���Ѵ�.
