// SmartPointersRB.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>
#include <string>
#include <iostream>
using namespace std;



int main()
{
    int x;  //int variable used for input to decide which pointer to learn about
    std::cout << "**WELCOME TO SMART POINTER TRAINGING? HAPPY LEARNING** \n";
    
    cout << "Select the number of pointer you would like to learn about first.\n";
    
    cout << "1: Shared_ptr \n2: Weak_ptr \n3: Unique_ptr\n";    //Pointer Multiple choice using switch case 
    cin >> x;

    switch (x)
    {
    case 1: //Shared_ptr
        cout << "You Selected to Learn About the Shared_ptr\nA shared_ptr is a smart pointer that shares ownership with other classes of pointer \n";
        cout << "The Advantage of a shared_ptr include auto-deletion of all smart pointers that share ownership of said object while storing a pointer to another object or class\nIt could even auto-initiate a ptr to null giving a variable a value\n";
        cout << "The Disadvatage for the shared_ptr is all other pointers must be out of scope to initiate auto-deletion\n"; 

        cout << "This ptr is used if you would like shared ownership ";
        break;

    case 2: //Weak_ptr
        cout << "You Selected to Learn about the Weak_ptr\nThe Weak_ptr is a smart pointer that stores a weak reference to an object thats already managed by a shared ptr. Causing the weak_ptr to remain due to not being included in reference of deletion.\n";
        cout << "The Advantages of the Weak_ptr starts with it not being included in auto-deletion\nIt even auto-initiates nulln\Last but not least it lacks ownership.";
        cout << "Disadvantages of the Weak_ptr is it cannot assume ownership";

        cout << "This ptr is recommended for used when you need a pointer is needed and you do not want it deleted when out-of-scope";
        break;

    case 3: //Unique ptr
        cout << "You Selected to Learn about the Unique_ptr";
            
        break;
    }
}


