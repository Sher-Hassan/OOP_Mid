#ifndef FITNESSCLASS_H
#define FITNESSCLASS_H

#include <iostream>
#include <string>
#include <vector>
#include "Booking.h"

using namespace std;

class FitnessClass {
private:
    string className;
    int availableSlots;
    vector<Booking> bookings;

public:
    FitnessClass(string className, int availableSlots);

    string getClassName() const;
    int getAvailableSlots() const;
    void displayAvailableSlots() const;
    bool bookSlot(const string& memberName, const string& dateTime);
    void displayBookings() const;
};

#endif
