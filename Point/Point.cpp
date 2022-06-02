#include <iostream>
using namespace std;

class Date
{
	int day;
	int month;
	int year;
public:
	Date(int dayP, int monthP, int yearP)
		:day{ dayP }, month{ monthP }, year{ yearP }
	{}
	Date() : Date(1, 1, 1970) {}


	void print() {
		cout << day << '.' << month
			<< '.' << year << '\n';
	}
};
int main()
{
	/* ������� � �������������� ��������� ������ Date
	���������� ������ ��� ���������� date1 � ���
	������������ ����� date1.day, date1.month,
	date1.year */
	Date date1{ 1,1,2020 };
	
	/* ������� � �������������� ��������� ������ Date
���������� ������ ��� ���������� date2 � ���
������������ ����� date2.day, date2.month,
date2.year */
	Date date2{ 24,07,1976 };
	Date date3{};
	/*
	�������� �������-���� print.
	��� �������-����� ����� ��� ���� ����������� Date.
	*/
	date1.print();
	date2.print();
	date3.print();
	
	return 0;
}