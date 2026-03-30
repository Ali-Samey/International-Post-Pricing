#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome and Thanks for choosing Us! \nWe post your stuff from Iran to Canada, Australia, UK and South Africa by ships." << endl;

    int length, width, height, dimension;
    float cost = 2.5;
    cout << "Please enter the package's dimension : " << endl << "Length = ";
    cin >> length;
    cout << "Width = ";
    cin >> width;
    cout << "Height = ";
    cin >> height;

    dimension = length * width * height;

    if (dimension > 0) {
        if (dimension > 0 && dimension < 100) {
            cout << "The cost is : " << cost << "$" << endl;
        }
        else if (dimension >= 100) {
            cost =  + cost;
            cout << "The cost is : " << cost << "$" << endl;
        }
        else if(dimension >= 500) {
            cost = ((cost / 100) * 25) + cost;
            cout << "The cost is : " << cost << "$" << endl;
        }
    }

    return 0;
}
