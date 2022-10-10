//Богдан Евгений
#include <iostream>
#include <vector>
#include "cmath"

using std::cout, std ::cin, std::endl, std::max;

int main() {
    int m = 8676330;
    int month;
    int numDays, date ;
    constexpr int Day= 86400  ;
    numDays= m/Day;
    /*if (num_days<=31)  {
        month="01";
        date= num_days+1;
    } else if (num_days<=59) {
            month="02";
            date= num_days-30;
        } else if (num_days<=90) {
                month="03";
                date= num_days-58;
            } else if (num_days<=120)   {
                    month="04";
                    date= num_days-89;
                } else if (num_days<151) {
                        month="05";
                        date= num_days-119;
                    } else if (num_days<=181)  {
                            month="06";
                            date= num_days-150;
                        }else if (num_days<=212) {
                                month="07";
                                date= num_days-180;
                            } else if (num_days<=243)  {
                                    month="08";
                                    date= num_days-211;
                                } else if (num_days<=273) {
                                    month="09";
                                    date= num_days-242;
                                } else if (num_days<=304)   {
                                        month="10";
                                        date= num_days-272;
                                    } else if (num_days<=334) {
                                            month="11";
                                            date= num_days-303;
                                        } else if (num_days<=365) {
                                                month="12";
                                                date= num_days-333;
                                            }
    cout << date << "." << month;
     */
    if (numDays <= 181){
        if(numDays <= 90){
            if (numDays<=31)  {
                month = 1;
                date= numDays+1;
            } else if (numDays<=59) {
                month = 2;
                date= numDays-30;
            } else {
                month= 3;
                date= numDays-58;
            }
        }else{
            if (numDays<=120)   {
                month = 04;
                date= numDays-89;
            } else if (numDays<151) {
                month = 05;
                date= numDays-119;
            } else {
                month = 6;
                date= numDays-150;
            }
        }
    }else{
        if(numDays <= 273){
            if (numDays<=212)  {
                month = 7;
                date= numDays - 180;
            } else if (numDays<=243) {
                month = 8;
                date= numDays-211;
            } else {
                month= 9;
                date= numDays-242;
            }
        }else{
            if (numDays<=304)   {
                month = 10;
                date= numDays-272;
            } else if (numDays<334) {
                month = 11;
                date= numDays-303;
            } else {
                month = 12;
                date= numDays-333;
            }
        }
    }
    cout << date / 10 << date % 10 << "." << month / 10 << month % 10;
    return 0;
}
