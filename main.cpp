#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    cout << "3/c Hopley Yeaton" << endl;
    cout << "TOOP HW2" << endl;

    string inputFilename = "bob";
    string line;
    int quantity;
    double cost;
    double discount;

    cout << "How many items are you buying?   " <<endl;
      cin >> quantity;
    cout << "How much does each item cost?   " <<endl;
    cin >> cost;
    cost *= quantity;
    if (quantity>0, quantity<=10) {
        cout << "Your total cost is $" <<cost<< ". You did not qualify for a discount." <<endl;
    } else if (quantity>0, quantity<45) {
        discount = cost*0.05;
        cout << "Your total cost is $" <<cost<< ". You qualify for a $" <<discount<< " discount." <<endl;
    } else if (quantity>0, quantity<250) {
        discount = cost*0.1;
        cout << "Your total cost is $" <<cost<< ". You qualify for a $" <<discount<< " discount." <<endl;
    } else if (quantity>250) {
        discount = cost*0.15;
        cout << "Your total cost is $" <<cost<< ". You qualify for a $" <<discount<< " discount." <<endl;
    }

    getline(cin, line);

    ifstream myfile;

    while (!myfile.is_open()) {
        cout << "Enter a file name." <<endl;
        getline(cin, inputFilename);
        myfile.open (inputFilename);
        cout << "inputFilename: " <<inputFilename<<endl;

    }
    for (int i=0; i<5; i++) {
        getline(myfile, line);
        cout << line <<endl;
    }
        myfile.close();







    return 0;
}
