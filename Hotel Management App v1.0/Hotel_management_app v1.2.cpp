#include <iostream>
using namespace std;

// Global variables for quantities and sales
int Qrooms = 5, Qpasta = 3, Qburger = 2, Qnoodles = 2, Qshake = 2, Qchicken = 1;
int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_shake = 0, Total_chicken = 0;

// Function prototypes
void addFoodItem(int &quantityInStock, int &quantitySold, int price);
void removeFoodItem(int &quantityInStock, int &quantitySold);
void viewInventory();
void calculateRevenue();
void printMenu();

int main()
{
    cout << "\n\tWelcome to the Hotel Management System!\n";

    int choice;

    do {
        printMenu();
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addFoodItem(Qrooms, Srooms, 1200);
                break;
            case 2:
                addFoodItem(Qpasta, Spasta, 250);
                break;
            case 3:
                addFoodItem(Qburger, Sburger, 300);
                break;
            case 4:
                addFoodItem(Qnoodles, Snoodles, 150);
                break;
            case 5:
                addFoodItem(Qshake, Sshake, 200);
                break;
            case 6:
                addFoodItem(Qchicken, Schicken, 350);
                break;
            case 7:
                viewInventory();
                break;
            case 8:
                calculateRevenue();
                break;
            case 9:
                cout << "\nGoodbye!\n";
                break;
            default:
                cout << "\nInvalid Option! Please try again.\n";
        }

    } while (choice != 9);

    return 0;
}

void addFoodItem(int &quantityInStock, int &quantitySold, int price) {
    int quant;
    cout << "\nEnter the quantity you want: ";
    cin >> quant;

    if (quantityInStock - quantitySold >= quant) {
        quantitySold += quant;
        switch (price) {
            case 1200:
                Total_rooms += quant * price;
                break;
            case 250:
                Total_pasta += quant * price;
                break;
            case 300:
                Total_burger += quant * price;
                break;
            case 150:
                Total_shake += quant * price;
                break;
            case 200:
                Total_shake += quant * price;
                break;
            case 350:
                Total_chicken += quant * price;
                break;
        }
        cout << "\n" << quant << " item(s) have been ordered!\n";
        cout << "\nThank you for choosing Baller Eats Hotel!\n";
    } else {
        cout << "\nOnly " << quantityInStock - quantitySold << " item(s) remaining in stock.\n";
        cout << "\nPlease try again with a smaller quantity. Thank you!\n";
    }
}

void viewInventory() {
    cout << "\nInventory:\n";
    cout << "Rooms: " << Qrooms - Srooms << "\n";
    cout << "Pasta: " << Qpasta - Spasta << "\n";
    cout << "Burger: " << Qburger - Sburger << "\n";
    cout << "Noodles: " << Qnoodles - Snoodles << "\n";
    cout << "Shake: " << Qshake - Sshake << "\n";
    cout << "Chicken Roll: " << Qchicken - Schicken << "\n";
}

void calculateRevenue() {
    cout << "\nTotal Revenue:\n";
    cout << "Rooms: " << Total_rooms << "\n";
    cout << "Pasta: " << Total_pasta << "\n";
    cout << "Burger: " << Total_burger << "\n";
    cout << "Noodles: " << Total_shake << "\n"; // Assuming this was intended for noodles
    cout << "Shake: " << Total_shake << "\n";
    cout << "Chicken Roll: " << Total_chicken << "\n";
    cout << "Overall Total: " << Total_rooms + Total_pasta + Total_burger + Total_shake + Total_chicken << "\n";
}

void printMenu() {
    cout << "\nMenu:\n";
    cout << "1. Add Rooms\n";
    cout << "2. Add Pasta\n";
    cout << "3. Add Burger\n";
    cout << "4. Add Noodles\n";
    cout << "5. Add Shake\n";
    cout << "6. Add Chicken Roll\n";
    cout << "7. View Inventory\n";
    cout << "8. Calculate Revenue\n";
    cout << "9. Exit\n";
}
