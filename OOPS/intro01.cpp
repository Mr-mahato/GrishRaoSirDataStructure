// this part mainly deals with the static keyword 

#include<iostream>
using namespace std;
class King{
  public:
  static int length;
  static int breadth;
  static int height;
  static void showarea(){
    cout << length* breadth* height << endl;
  }
};
int King::length = 2;
int King::breadth=2;
int King::height=2;

string toString(){
    int a = 1, b = 2, c=3;
    return "Reactangle[a=" << a << "b=" << b << "c=" << c << "]";
}
int main(){
    King obj1;
    // this works fine here when you call static member function with the instance
    obj1.showarea();

    //THIS IS THE RECOMENDED PRACTICE OF CALLING THE MEMBER FUNCTION
 // this can be done whiel returning some values from the static member function
   King::showarea();
    cout << toString() << endl;

}