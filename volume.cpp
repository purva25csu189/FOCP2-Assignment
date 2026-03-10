#include<iostream>
using namespace std;
class volumeFigure{
    public:
    float volume(float radius,float height){
        return((3.14*radius*height)/3);
    }
    int volume(int side){
        return side*side*side;
    }
    int volume(int lenght,int breadth,int height){
        return(lenght*breadth*height);
    }
};
int main()
{
    float vol_cone;
    int vol_cube;
    int vol_cuboid;
    volumeFigure ob;
    vol_cone= ob.volume(7.5,4.9);
    vol_cube=ob.volume(9);
    vol_cuboid=ob.volume(5,7,6);
    cout<<"volume of cone is :"<<vol_cone;
    cout<<"volume of cuboid is:"<<vol_cube;
    cout<<"volume of cuboid is:"<<vol_cuboid;
    return 0;
}