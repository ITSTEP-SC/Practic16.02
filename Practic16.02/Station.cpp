#include "Station.h"
void Station::AddTrain() {
    Train train;
    string d;
    string t;
    cout << "Введите номер поезда: ";
    cin >> train.number;
    cout << "Введите дату отправления(dd.mm.yyyy): ";
    cin >> d;
    cout << "Введите время отправления(hh:mm): ";
    cin >> t;
    train.date_time = Transform(t, d);
    cout << "Введите станцию назначения: ";
    cin >> train.station;
    trains.push_back(train);
    
}
void Station::ShowTrain(int num) {
    vector<Train>::iterator iter;
    for (iter = trains.begin(); iter != trains.end(); iter++) {
        if ((*(iter)).number == num) {
            break;
        }
    }
    if (iter != trains.end()) {
        cout << "Поезд, который Вы искали: " << endl;
        cout << "Номер поезда: " << (*iter).number << endl;
        ShowDate(iter);
        cout << "Станция назначения: " << (*iter).station << endl;
    }
    else {
        cout << endl<< "Нет такого поезда" << endl;
    }
}
void Station::Show() {
    vector<Train>::iterator iter;
    cout << "Список всех поездов: " << endl;
    for (iter = trains.begin(); iter != trains.end(); iter++) {
        cout << "Номер поезда: " << (*iter).number << endl;
        ShowDate(iter);
        cout << "Станция назначения: " << (*iter).station << endl;
        cout << endl;
    }
}

tm Station::Transform(string t, string d){
    int c;
    const char* delim = ":";
    const char* delim2 = ".";
    char* con = nullptr;
    
    tm date_time;
    char* token = strtok_s(const_cast<char*>(t.c_str()), delim, &con);
    if(stoi(token)<24 && stoi(token)>=0)
        date_time.tm_hour = stoi(token);
    token = strtok_s(NULL, delim, &con);
    if (stoi(token) < 60 && stoi(token) >= 0)
        date_time.tm_min = stoi(token);

    token = strtok_s(const_cast<char*>(d.c_str()), delim2, &con);
    c = stoi(token);
    token = strtok_s(NULL, delim2, &con);
    if (stoi(token) < 13 && stoi(token) > 0) {
        date_time.tm_mon = stoi(token);
        if (c <= GetDayOfMonth(date_time.tm_mon)&& c>0) {
            date_time.tm_mday = c;
        }
    }
    token = strtok_s(NULL, delim2, &con);
    date_time.tm_year = stoi(token);

    return date_time;
}
    
int Station::GetDayOfMonth(int a) {
    switch (a)
    {
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        return 31;
    case 2:
        return 28;
    case 4: case 6: case 9:case 11:
        return 30;
    default:
        break;
    }
}
void Station::ShowDate(vector<Train>::iterator iter){
    cout << "Время отправления: " << (*iter).date_time.tm_hour << ":" << (*iter).date_time.tm_min << "\t";
    cout << "Дата отправления: " << (*iter).date_time.tm_mday << "." << (*iter).date_time.tm_mon << "." << (*iter).date_time.tm_year << endl;
}

