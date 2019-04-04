#include<iostream>

using namespace std;

class Rectangle{
	private:
	   int length;
	   int breadth;
	public:
	   Rectangle(){
		cout << "Non-Parameterized Constructor"<<endl;
		length = 0;
		breadth = 0;
		cout << "Length - " << length << "\tBreadth - " << breadth <<endl;
	   }

	   Rectangle(int l, int b);
	   void setlength(int l);
	   int Area();
};

Rectangle :: Rectangle(int l, int b){
	   cout << "Parameterized Constructor" <<endl;
	   length = l;
	   breadth = b;
	   cout << "Length - " << length << "\tBreadth - " << breadth <<endl;

}

void Rectangle :: setlength(int l){
	   cout << "Inside setlength" << endl;
	   length = l;
	   cout << "Length - "<<length <<endl;
}

int Rectangle :: Area(){
	   int result;
	   cout << "Inside Area()"<<endl;
	   result = length * breadth;
	   cout << "Area of the rectangle is - "<<result <<endl;
	   return result;
}


int main()
{
	Rectangle rect(5,6);

	rect.setlength(10);
	int answer = rect.Area();
	cout <<"In main "<<endl << "Area of rectangle is - "<<answer <<endl;
	
}
