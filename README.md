# Contact Management System

## Overview
This is a simple console-based Contact Management System implemented in C++. The application allows users to add, edit, search, and display contacts with their personal and address information.

## Features
- Add new contacts
- Edit existing contacts
- Search contacts by name or mobile number
- Display all contacts
- Supports up to 50 contacts

## Prerequisites
- C++ Compiler (supporting C++11 or later)
- Standard C++ libraries

## Compilation
```bash
g++ -std=c++11 contact_management.cpp -o contact_management
```

## Usage
1. Run the compiled executable
2. Follow the on-screen prompts to:
   - Add contacts
   - Edit existing contacts
   - Search for contacts
   - View all contacts

## Key Components
- `Contact` class: Stores individual contact details
- `Address` class: Stores address-related information
- Functions:
  - `Add()`: Adds a new contact
  - `edit()`: Modifies an existing contact
  - `search()`: Finds a contact by name or mobile number
  - `showAll()`: Displays all stored contacts

## Limitations
- Maximum of 50 contacts
- Fixed-length mobile number storage
- Console-based interface

## Potential Improvements
- Implement dynamic memory allocation
- Add data persistence (file storage)
- Create a more robust input validation system
- Develop a graphical user interface

## License
Open-source MIT License

## Author
Salman Hashemi
