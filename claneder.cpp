#include<iostream>
using namespace std;

bool isleapyear(int year){
    if(year%400==0)
    return true;
    if(year%100 ==0)
    return false;
    if(year% 4==0)
    return true;
    return false;

}
int dayInMonth(int month ,int year){
    if(month ==2){
        if(isleapyear(year))
        return 29;
        else 
        return 28;
    }
    if (month == 4||month ==6|| month==9|| month ==11){
        return 30;

    }
    return 31;

}
int firstday(int month ,int year){
    int day =1;
    if(month <3){
        month =month +12
; 
year --;


   }
   int k=year %100;
   int j =year/100;
   int h =(day+(13*(month +1))/5+k+k/4+j/4+5*j)%7;
   return h;

}
void showCalendar(int month, int year)
{
    string months[] =
    {
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    cout << "\n";
    cout << "       " << months[month - 1]
         << " " << year << endl;

    cout << "Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;

    int h = firstday(month, year);
    int start = (h + 6) % 7;

    int days = dayInMonth(month, year);
    for (int i = 0; i < start; i++)
    {
         cout << "    ";

      } 
      
      
      
     
    for (int date = 1; date <= days; date++)
    {
        cout << date << "   ";

        if ((start + date) % 7 == 0)
        {
            cout << endl;
        }
    }

    cout << endl;
}


int main()
{
    int year;
    int month;

    cout << "Enter year: ";
    cin >> year;

    cout << "Enter month (1-12): ";
    cin >> month;

    if (month < 1 || month > 12)
    {
        cout << "Invalid month!";
        return 0;
    }

    showCalendar(month, year);

    return 0;
}
