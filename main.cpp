#include <iostream>
#include <vector>
#include <string>
#include "FitnessClass.h"

using namespace std;

int main() {
    vector<FitnessClass> classes = {
        FitnessClass("1. Early morning gym classes", 30),
        FitnessClass("2. Boot camp gym class", 30),
        FitnessClass("3. Circuit training", 20),
        FitnessClass("4. Kettlebells", 25),
        FitnessClass("5. Boxing cardio class", 25),
        FitnessClass("6. Body combat class", 30),
        FitnessClass("7. Core workout", 25),
        FitnessClass("8. Body pump gym", 30),
        FitnessClass("9. Cardio classes", 25),
        FitnessClass("10.HIIT gym class", 30)
    };

    cout << "____----____====_  Welcome to Sher's Ultimate Gymnasium  _====____----____" << endl;
    while (true) {
        cout << "\n           Please choose any Option:" << endl;
        cout << "\n   1. View all the classes we are offering" << endl;
        cout << "   2. Book a slot" << endl;
        cout << "   3. View bookings for a class" << endl;
        cout << "   4. View all booked classes" << endl;
        cout << "   5. Exit" << endl;

        int choice;
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            for (const auto& fitnessClass : classes) {
                fitnessClass.displayAvailableSlots();
            }
        } else if (choice == 2) {
            int classChoice;
            cout << "Select class to book (enter class number): ";
            cin >> classChoice;
            if (classChoice >= 1 && classChoice <= classes.size()) {
                string memberName, dateTime;
                cout << "Enter your name: ";
                cin.ignore();
                getline(cin, memberName);
                cout << "Enter date & time (YYYY-MM-DD HH:MM): ";
                getline(cin, dateTime);
                classes[classChoice - 1].bookSlot(memberName, dateTime);
            } else {
                cout << "Invalid class choice. Please try again." << endl;
            }
        } else if (choice == 3) {
            int classChoice;
            cout << "Select class to view bookings (enter class number): ";
            cin >> classChoice;
            if (classChoice >= 1 && classChoice <= classes.size()) {
                classes[classChoice - 1].displayBookings();
            } else {
                cout << "Invalid class choice. Please try again." << endl;
            }
        } else if (choice == 4) {
            cout << "Viewing all booked classes:" << endl;
            for (const auto& fitnessClass : classes) {
                fitnessClass.displayBookings();
                cout << endl;
            }
        } else if (choice == 5) {
            cout << "Exiting program. Thank you for using Welcome to Sher's Ultimate Gymnasium!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
//g++ -o fitness_booking main.cpp FitnessClass.cpp Booking.cpp ; .\fitness_booking

