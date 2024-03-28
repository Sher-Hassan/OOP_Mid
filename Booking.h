#ifndef BOOKING_H
#define BOOKING_H

#include <iostream>
#include <string>

using namespace std;

class Booking {
private:
    string className;
    string memberName;
    string dateTime;

public:
    Booking(string className, string memberName, string dateTime);

    void displayBooking() const;
};

#endif
