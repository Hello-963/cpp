#include <iostream>
using namespace std;
class dhairya{
      public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return length+breadth;
    }
};
int main()
{
    dhairya d1,d2;
    d1.length=10;
    d1.breadth=20;
    return 0;
}