#include<iostream>
using namespace std;
int main()
{
   struct spaceship{
   	int x_coordinate;
   	int y_coordinate;
   	string name;
   };
   /*spaceship my_ship;
   my_ship.x_coordinate=40;
   my_ship.y_coordinate=30;
   my_ship.name="USS Enterprise";
   cout<<my_ship.name<<endl;*/
   spaceship myship;
   myship.x_coordinate=40;
   cout<<myship.x_coordinate<<endl;
}
