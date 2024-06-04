#include <iostream>
#include <string>
using namespace std;

// yha sy struct shoro howa
struct Building {
   int length;
   int width;
   int height;
   float price;
   float square_ft;
   string design;
};

// phli class
class HousingSociety {
   public:
      string name;
      string place;
      string promotion;
      Building commercial_building;
      Building residential_building;
};

int main() {
   // Create an object of the HousingSociety class for Bahria Town
   HousingSociety bahria_town;
   cout << "Enter the name of the housing society: ";
   getline(cin, bahria_town.name);
   cout << "Enter the location of the housing society: ";
   getline(cin, bahria_town.place);
   cout << "Enter the promotion for the housing society: ";
   getline(cin, bahria_town.promotion);
   cout << "Enter the length of the commercial building (in feet): ";
   cin >> bahria_town.commercial_building.length;
   cout << "Enter the width of the commercial building (in feet): ";
   cin >> bahria_town.commercial_building.width;
   cout << "Enter the height of the commercial building (in feet): ";
   cin >> bahria_town.commercial_building.height;
   cout << "Enter the price of the commercial building (in dollars): ";
   cin >> bahria_town.commercial_building.price;
   cout << "Enter the square footage of the commercial building: ";
   cin >> bahria_town.commercial_building.square_ft;
   cout << "Enter the design of the commercial building: ";
   cin.ignore();
   getline(cin, bahria_town.commercial_building.design);
   cout << "Enter the length of the residential building (in feet): ";
   cin >> bahria_town.residential_building.length;
   cout << "Enter the width of the residential building (in feet): ";
   cin >> bahria_town.residential_building.width;
   cout << "Enter the height of the residential building (in feet): ";
   cin >> bahria_town.residential_building.height;
   cout << "Enter the price of the residential building (in dollars): ";
   cin >> bahria_town.residential_building.price;
   cout << "Enter the square footage of the residential building: ";
   cin >> bahria_town.residential_building.square_ft;
   cout << "Enter the design of the residential building: ";
   cin.ignore();
   getline(cin, bahria_town.residential_building.design);

   // Create an object of the HousingSociety class for Lake City
   HousingSociety lake_city;
   cout << "Enter the name of the housing society: ";
   getline(cin, lake_city.name);
   cout << "Enter the location of the housing society: ";
   getline(cin, lake_city.place);
   cout << "Enter the promotion for the housing society: ";
   getline(cin, lake_city.promotion);
   cout << "Enter the length of the commercial building (in feet): ";
   cin >> lake_city.commercial_building.length;
   cout << "Enter the width of the commercial building (in feet): ";
   cin >> lake_city.commercial_building.width;
   cout << "Enter the height of the commercial building (in feet): ";
   cin >> lake_city.commercial_building.height;
   cout << "Enter the price of the commercial building (in dollars): ";
   cin >> lake_city.commercial_building.price;
   cout << "Enter the square footage of the commercial building: ";
   cin >> lake_city.commercial_building.square_ft;
   cout << "Enter the design of the commercial building: ";
}
