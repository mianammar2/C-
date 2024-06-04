#include <iostream>
#include <string>
using namespace std;
struct Building {
    double length;
    double width;
    double height;
    double pricePerSqFt;
      string design;
};

class HousingSociety {
private:
    Building commercialBuilding;
    Building residentialBuilding;
      string name;
      string location;
public:
    HousingSociety() {} // default constructor
    HousingSociety(Building cBuilding, Building rBuilding,   string n,   string loc) 
        : commercialBuilding(cBuilding), residentialBuilding(rBuilding), name(n), location(loc) {}
    void setName(  string n) { name = n; }
    void setLocation(  string loc) { location = loc; }
    void advertise() {
          cout << "Welcome to " << name << ", located in " << location << "!\n";
          cout << "Our commercial building has a " << commercialBuilding.design << " design and measures " 
                  << commercialBuilding.length << " x " << commercialBuilding.width << " x " 
                  << commercialBuilding.height << " feet.\n";
          cout << "It is priced at $" << commercialBuilding.pricePerSqFt << " per square foot.\n";
          cout << "Our residential building has a " << residentialBuilding.design << " design and measures " 
                  << residentialBuilding.length << " x " << residentialBuilding.width << " x " 
                  << residentialBuilding.height << " feet.\n";
          cout << "It is priced at $" << residentialBuilding.pricePerSqFt << " per square foot.\n";
    }
};

int main() {
    double length, width, height, pricePerSqFt;
      string design, name, location;
    
      cout << "Enter details for the commercial building:\n";
      cout << "Length: ";
      cin >> length;
      cout << "Width: ";
      cin >> width;
      cout << "Height: ";
      cin >> height;
      cout << "Price per square foot: ";
      cin >> pricePerSqFt;
      cout << "Design: ";
      cin >> design;
    Building commercialBuilding = {length, width, height, pricePerSqFt, design};
    
      cout << "\nEnter details for the residential building:\n";
      cout << "Length: ";
      cin >> length;
      cout << "Width: ";
      cin >> width;
      cout << "Height: ";
      cin >> height;
      cout << "Price per square foot: ";
      cin >> pricePerSqFt;
      cout << "Design: ";
      cin >> design;
    Building residentialBuilding = {length, width, height, pricePerSqFt, design};
    
      cout << "\nEnter the name of the housing society: ";
      cin >> name;
      cout << "Enter the location of the housing society: ";
      cin >> location;
    
    HousingSociety bahria_town(commercialBuilding, residentialBuilding, name, location);
    
    bahria_town.advertise();
    
    return 0;
}
