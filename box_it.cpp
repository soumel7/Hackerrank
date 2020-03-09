#include<bits/stdc++.h>

using namespace std;

class Box{
    long length;
    long breadth;
    long height;
    
    public:
        Box():Box(0,0,0){
            
        }
        Box(int x ,int y ,int z):length(x),breadth(y),height(z){
            

        }

        Box(Box &value): Box(value.length,value.breadth,value.height) {

        }
            
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }
        int getHeight(){
            return height;
        }

        long long CalculateVolume(){
            return length*breadth*height;
        }
        
        
        bool operator<(Box& b);
        friend std::ostream & operator << (std::ostream& out,class Box& B);
};

bool Box:: operator < (Box& b){
    return (this->getLength()<b.getLength())||(this->getBreadth()<b.getBreadth()&&this->getLength()==b.getLength())||(this->getHeight()<b.getHeight()&&this->getBreadth()==b.getBreadth()&&this->getLength()==b.getLength());
}

std::ostream & operator<<(std::ostream& out,class Box& B){
    out<<B.getLength()<<" "<<B.getBreadth()<<" "<<B.getHeight();
    return out;
}

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}