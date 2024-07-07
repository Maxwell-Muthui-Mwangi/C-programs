#include <vector>
#include <string>

struct Order {
    std::string itemName;
    int quantity;
    int totalPrice;
};

std::vector<Order> orderHistory;


void addToOrderHistory(const std::string& itemName, int quantity, int totalPrice) {
    Order newOrder { itemName, quantity, totalPrice };
    orderHistory.push_back(newOrder);
}

void displayOrderHistory() {
    if (orderHistory.empty()) {
        cout << "\nOrder history is empty.\n";
    } else {
        cout << "\nOrder History:\n";
        for (const auto& order : orderHistory) {
            cout << order.itemName << " - Quantity: " << order.quantity << " - Total Price: " << order.totalPrice << "\n";
        }
    }
}


#include <fstream>

void collectCustomerFeedback() {
    string feedback;
    cout << "\nPlease provide your feedback:\n";
    cin.ignore(); // Clear input buffer
    getline(cin, feedback);

    ofstream feedbackFile("customer_feedback.txt", ios::app);
    if (feedbackFile.is_open()) {
        feedbackFile << feedback << "\n";
        feedbackFile.close();
        cout << "\nThank you for your feedback!\n";
    } else {
        cout << "\nUnable to save feedback. Please try again later.\n";
    }
}


#include <map>

std::map<std::string, int> menuItems = {
    {"Rooms", 1200},
    {"Pasta", 250},
    {"Burger", 300},
    {"Noodles", 150},
    {"Shake", 200},
    {"Chicken Roll", 350}
};

void addMenuItem() {
    std::string itemName;
    int price;

    cout << "\nEnter the name of the new menu item: ";
    cin.ignore(); // Clear input buffer
    getline(cin, itemName);

    cout << "\nEnter the price of " << itemName << ": ";
    cin >> price;

    menuItems[itemName] = price;
    cout << "\nMenu item " << itemName << " added successfully!\n";
}

void removeMenuItem() {
    std::string itemName;
    cout << "\nEnter the name of the menu item to remove: ";
    cin.ignore(); // Clear input buffer
    getline(cin, itemName);

    auto it = menuItems.find(itemName);
    if (it != menuItems.end()) {
        menuItems.erase(it);
        cout << "\nMenu item " << itemName << " removed successfully!\n";
    } else {
        cout << "\nMenu item " << itemName << " not found.\n";
    }
}

void displayMenu() {
    cout << "\nMenu Items:\n";
    for (const auto& item : menuItems) {
        cout << item.first << " - Price: " << item.second << "\n";
    }
}



case 10:
    collectCustomerFeedback();
    break;
case 11:
    displayOrderHistory();
    break;
case 12:
    addMenuItem();
    break;
case 13:
    removeMenuItem();
    break;
case 14:
    displayMenu();
    break;



