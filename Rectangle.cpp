#include <iostream>
#include <cmath>

using namespace std;

class Rectangle{
    private:
        int width, height;

    public:
        void set_values(int, int);
        int area(){
            return width*height;        
        }
        double diagonal(){
            return sqrt(pow(width,2)+pow(height,2));
        }   

};

void Rectangle::set_values(int x, int y){
    width = x;
    height = y;
}


int main(void){
    int w,h;
    Rectangle *r = new Rectangle;

    Rectangle e;

    cout << "Digite a altura e a largura:" << endl;
    cin >> h >> w;
    r->set_values(w,h);

    cout << "Diagonal " << r->diagonal() << endl;

    e.set_values(3,4);

    cout <<  "Teste " << e.diagonal() << endl;

    delete r;

    return 0;
}
