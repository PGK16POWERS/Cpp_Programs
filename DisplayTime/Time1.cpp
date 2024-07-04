#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

// CREATE STRING ARRAY'S
string month[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun","Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
string day[] = {"Mon","Tue","Wed", "Thur", "Fri", "Sat", "Sun"};

int main() {

    time_t timer;
    tm * time;
    const int BASE_YEAR = 1900;

    std::time(&timer);
    time = localtime(&timer);

    cout << "Current time " << day[time->tm_wday] << " " << month[time->tm_mon] << " " << (time->tm_year + BASE_YEAR);
    cout << "\nCurrent time " << setw(2) << setfill('0') << time->tm_hour << " : " 
                            << setw(2) << setfill('0') << time->tm_min << " : "
                            << setw(2) << setfill('0') << time->tm_sec;

    return 0;
}