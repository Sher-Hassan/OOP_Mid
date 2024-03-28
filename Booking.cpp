#include "Booking.h"

using namespace std;

Booking::Booking(string className, string memberName, string dateTime)
    : className(className), memberName(memberName), dateTime(dateTime) {}

void Booking::displayBooking() const {
    cout << "Class: " << className << ", Member: " << memberName << ", Date & Time: " << dateTime << endl;
}
