
#include <iostream>
using namespace std;
class A
{
    int id;
    int count;
public:
    A() {
        count++;
        id = count;
        cout << "constructor for id " << id << endl;
    }
    ~A() {
        cout << "destructor for id " << id << endl;
    }
};
  
int main() {
    A a[3];
    return 0;
}