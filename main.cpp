#include<iostream>
using namespace std;

class Address
{
public:
    string city; //نام شهر
    long int zipCode; //کد پستی
};

class Contact
{
public:
    string fName; //نام
    char mobile[10]; //شماره تلفن بدون صفر
    Address _address;
};

void Add(Contact arr[], int& count) {
    if (count < 50) {
        Contact c;
        cout << "Enter first name: ";
        cin >> c.fName;
        cout << "Enter mobile number (without 0): ";
        cin >> c.mobile;
        cout << "Enter city: ";
        cin >> c._address.city;
        cout << "Enter zip code: ";
        cin >> c._address.zipCode;

        arr[count++] = c;
        cout << "Contact added successfully." << endl;
    }
    else {
        cout << "Maximum number of contacts reached." << endl;
    }
}

void edit(Contact arr[], int count, int i) {
    if (i >= 0 && i < count) {
        Contact& c = arr[i];
        cout << "Enter first name: ";
        cin >> c.fName;
        cout << "Enter mobile number (without 0): ";
        cin >> c.mobile;
        cout << "Enter city: ";
        cin >> c._address.city;
        cout << "Enter zip code: ";
        cin >> c._address.zipCode;

        cout << "Contact updated successfully." << endl;
    }
    else {
        cout << "Invalid index." << endl;
    }
}

void search(Contact arr[], int count, string str) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (arr[i].fName == str || arr[i].mobile == str) {
            found = true;
            cout << "First name: " << arr[i].fName << endl;
            cout << "Mobile number: 0" << arr[i].mobile << endl;
            cout << "City: " << arr[i]._address.city << endl;
            cout << "Zip code: " << arr[i]._address.zipCode << endl;
            break;
        }
    }
    if (!found) {
        cout << "Contact not found." << endl;
    }
}

void showAll(Contact arr[], int count) {
    for (int i = 0; i < count; i++) {
        cout << "First name: " << arr[i].fName << endl;
        cout << "Mobile number: 0" << arr[i].mobile << endl;
        cout << "City: " << arr[i]._address.city << endl;
        cout << "Zip code: " << arr[i]._address.zipCode << endl;
        cout << endl;
    }
}

int main() {
    Contact arr[50];
    int count = 0;

    Add(arr, count);
    Add(arr, count);

    edit(arr, count, 1);

    search(arr, count, "John");
    search(arr, count, "1234567");

    showAll(arr, count);

    return 0;
}
