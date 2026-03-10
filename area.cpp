#include<iostream>
using namespace std;
class AreaFigure{
    public:
    int area(int length,int breath){
        return length*breath;
    }
    int area(int side){
        return side*side;
    }
};
int main()
{
    float vol_cone;
    int vol_cube;
    int vol_cuboid;
    AreaFigure ob;
    vol_cone= ob.area(7,4);
    vol_cube=ob.area(9);
    cout<<"area of cone is :"<<vol_cone;
    cout<<"area of cuboid is:"<<vol_cube;
    return 0;
}