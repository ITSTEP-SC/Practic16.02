#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
Задание №1
Написать программу «Автоматизированная информационная
система ЖД вокзала». Система содержит: сведения об
отправлении поездов дальнего следования.
Для каждого поезда указываем: номер, время отправления,
станцию назначения. Обеспечить:
? Ввод данных в систему;
? Вывод информации о всех поездах;
? Вывод информации о запрашиваемом поезде.
Использовать контейнерный класс vector
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
	vector<Train>trains;//список поездов
public:
    void AddTrain();//добавление поезда в вектор
    void ShowTrain(int num);//отображение конкретного поезда
	void Show();//отображение всех поездов

};

