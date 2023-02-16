//#include "Station.h"
//void Station::AddTrain() {
//    Train train;
//    string d;
//    string t;
//    cout << "Введите номер поезда: ";
//    cin >> train.number;
//    cout << "Введите дату отправления(dd.mm.yyyy): ";
//    cin >> d;
//    cout << "Введите время отправления(hh:mm): ";
//    cin >> t;
//    cout << "Введите станцию назначения: ";
//    cin >> train.station;
//    trains.push_back(train);
//}
//void Station::ShowTrain(int num) {
//    vector<Train>::iterator iter;
//    for (iter = trains.begin(); iter != trains.end(); iter++) {
//        if ((*(iter)).number == num) {
//            break;
//        }
//    }
//    if (iter != trains.end()) {
//        cout << "Поезд, который Вы искали: " << endl;
//        cout << "Номер поезда: " << (*iter).number << endl;
//        cout << "Время отправления: " << (*iter).hour << endl;
//        cout << "Станция назначения: " << (*iter).station << endl;
//    }
//    else {
//        cout << endl<< "Нет такого поезда" << endl;
//    }
//}
//void Station::Show() {
//    vector<Train>::iterator iter;
//    cout << "Список всех поездов: " << endl;
//    for (iter = trains.begin(); iter != trains.end(); iter++) {
//        cout << "Номер поезда: " << (*iter).number << endl;
//        cout << "Время отправления: " << (*iter).hour << endl;
//        cout << "Станция назначения: " << (*iter).station << endl;
//        cout << endl;
//    }
//}
//
//tm Station::Transform(string t){
//    string temp;
//    tm time;
//    for (int i = 0; i < t.size(); i++) {
//        if (t[i] != ':') {
//            temp += t[i];
//        }
//        else {
//            break;
//        }
//    }
//    time.tm_hour = stoi(temp);
//    temp.clear();
//    for (int i = t.size()-1; i >= 0; i--) {
//        if (t[i] != ':') {
//            temp.insert(t[i], 0);
//        }
//        else {
//            break;
//        }
//    }
//    time.tm_min = stoi(temp);
//    
//    return time;
//}