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
	tm Transform(string);
	struct Train {
		int number;
		tm date;
		tm time;
		char station[20];
	};
	vector<Train>trains;//������ �������
public:
    void AddTrain();//���������� ������ � ������
    void ShowTrain(int num);//����������� ����������� ������
	void Show();//����������� ���� �������
};

