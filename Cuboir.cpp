//Gulamnabi Khan
//23070123503
#include <iostream>
#include <string>
using namespace std;

class Cuboid
{
public:
	float l;
	float w;
	float h;
	float volume;
	void input()
	{
		cout<<"Please Enter length"<<endl;
		cin>>l;
		cout<<"Please Enter width"<<endl;
		cin>>w;
		cout<<"Please Enter height"<<endl;
		cin>>h;
	}
	void Volume()
	{
		volume=l*h*w;
	}
	void Output()
	{
		cout<<"The Volume Of The Cuboid Is : "<<volume<<endl;
	}
};
int main()
{
	Cuboid cuboid;
	cuboid.input();
    cuboid.Volume();
    cuboid.Output();
    return 0;
}
/*
Output
Output
Please Enter length
5
Please Enter width
5
Please Enter height
5
The Volume Of The Cuboid Is : 125
*/
