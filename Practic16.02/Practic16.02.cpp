#include <iostream>

using namespace std;

#include "Station.h"
tm Transform(string t) {
    string temp="";
    tm time;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] != ':') {
            temp += t[i];
        }
        else {
            break;
        }
    }
    time.tm_hour = stoi(temp);
    temp ="";
    for (int i = t.size() - 1; i >= 0; i--) {
        if (t[i] != ':') {
            temp.insert(0,1,t[i]);
        }
        else {
            break;
        }
    }
    time.tm_min = stoi(temp);

    return time;
}
int main()
{
    setlocale(LC_ALL, "");
    /*Station st;
    st.AddTrain();
    st.AddTrain();
    st.AddTrain();
    system("cls");
    st.Show();
    st.ShowTrain(1234);
    st.ShowTrain(30945839);*/

    tm t;
    t = Transform("12:45");
    cout << t.tm_hour << " " << t.tm_min << endl;
    t = Transform("4:12");
    cout << t.tm_hour << " " << t.tm_min << endl;
    t = Transform("13:08");
    cout << t.tm_hour << " " << t.tm_min << endl;
    
}
