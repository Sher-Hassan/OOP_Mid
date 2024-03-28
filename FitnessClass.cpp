#include "FitnessClass.h"

using namespace std;

FitnessClass::FitnessClass(string className, int availableSlots)
    : className(className), availableSlots(availableSlots) {}

string FitnessClass::getClassName() const {
    return className;
}

int FitnessClass::getAvailableSlots() const {
    return availableSlots;
}

void FitnessClass::displayAvailableSlots() const {
    cout << "Class: " << className << ", Available Slots: " << availableSlots << endl;
}

bool FitnessClass::bookSlot(const string& memberName, const string& dateTime) {
    if (availableSlots > 0) {
        bookings.push_back(Booking(className, memberName, dateTime));
        availableSlots--;
        cout << "Booking successful for " << memberName << endl;
        return true;
    } else {
        cout << "Sorry, no available slots for class " << className << endl;
        return false;
    }
}

void FitnessClass::displayBookings() const {
    cout << "Bookings for Class " << className << ":" << endl;
    for (const auto& booking : bookings) {
        booking.displayBooking();
    }
}
