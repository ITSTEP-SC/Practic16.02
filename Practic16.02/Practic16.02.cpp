#include <iostream>

using namespace std;

#include "Station.h"

int main()
{
    setlocale(LC_ALL, "");
    Station st;
    st.AddTrain();
    st.AddTrain();
    st.AddTrain();
    system("cls");
    st.Show();
    st.ShowTrain(1234);
    st.ShowTrain(30945839);

    
    
    
}
