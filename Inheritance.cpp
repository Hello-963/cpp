#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l,int b){
        length=1;
        breadth=1;
    }
    void set_length(int l);
    void set_breadth(int b);
    int get_length(){return length;}
    int get_breadth(){return breadth;}
    int area(){return length*breadth;}
    int perimeter(){return length + breadth;}
};


void Rectangle::set_length (int l){
    length=l;
    }
void Rectangle::set_breadth(int b){
    breadth=b;
}

class cuboid:public Rectangle{
private:
int hieght;
public:
void set_hieght(int h ){
hieght=h;
}
int volume(){
    return get_length()*hieght*get_breadth();
}
};



int main(){
    Rectangle r1;
    cuboid c1;
    int l,b;
    cout<<"Enter length:";
    cin>>l;
    c1.set_length(l);
    c1.set_breadth(l);

    c1.set_hieght(l);
    cout<<c1.volume();
}