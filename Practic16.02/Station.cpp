//#include "Station.h"
//void Station::AddTrain() {
//    Train train;
//    string d;
//    string t;
//    cout << "������� ����� ������: ";
//    cin >> train.number;
//    cout << "������� ���� �����������(dd.mm.yyyy): ";
//    cin >> d;
//    cout << "������� ����� �����������(hh:mm): ";
//    cin >> t;
//    cout << "������� ������� ����������: ";
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
//        cout << "�����, ������� �� ������: " << endl;
//        cout << "����� ������: " << (*iter).number << endl;
//        cout << "����� �����������: " << (*iter).hour << endl;
//        cout << "������� ����������: " << (*iter).station << endl;
//    }
//    else {
//        cout << endl<< "��� ������ ������" << endl;
//    }
//}
//void Station::Show() {
//    vector<Train>::iterator iter;
//    cout << "������ ���� �������: " << endl;
//    for (iter = trains.begin(); iter != trains.end(); iter++) {
//        cout << "����� ������: " << (*iter).number << endl;
//        cout << "����� �����������: " << (*iter).hour << endl;
//        cout << "������� ����������: " << (*iter).station << endl;
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