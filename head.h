#include<iostream>
using namespace std;
class student 
{private:
  int x;
  int y;
public:
	
	student()
	{ x=1;
	}
	void input(int y)
	{ 
		
		x=x+y;
	cout<<x<<endl;
	}
	void display()
    { cout<<x<<endl;
	}
};