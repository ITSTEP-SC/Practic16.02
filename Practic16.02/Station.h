#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
������� �1
�������� ��������� ������������������� ��������������
������� �� �������. ������� ��������: �������� ��
����������� ������� �������� ����������.
��� ������� ������ ���������: �����, ����� �����������,
������� ����������. ����������:
? ���� ������ � �������;
? ����� ���������� � ���� �������;
? ����� ���������� � ������������� ������.
������������ ������������ ����� vector
*/
class Station
{
private:
	tm Transform(string, string);
	int GetDayOfMonth(int a);
	struct Train {
		int number;
		tm date_time;
		char station[20];
		
	};
	void ShowDate(vector<Train>::iterator iter);
	vector<Train>trains;//������ �������
public:
    void AddTrain();//���������� ������ � ������
    void ShowTrain(int num);//����������� ����������� ������
	void Show();//����������� ���� �������

};

