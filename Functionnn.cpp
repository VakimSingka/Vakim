#include <iostream>
using namespace std;
void CalCircle();
void CalRec();
char ch;
int main()
{
do{
	cout << "Program Calculate of Circle." << endl;
	cout << "****************************" << endl;
	cout<<" 1. Circle"<<endl;
	cout<<" 2. Rectangle"<<endl;
	cout<<" 3. Exit"<<endl;
	cout<<" Choose Menu :";
	cin >> ch;
	if(ch == '1') CalCircle();
	else if(ch == '2') CalRec();
	else if(ch == '3') cout<<"Exit "<<endl;
	else cout<<"Wrong Menu"<<endl;
}while(ch != '3');
system("pause");
return(0);
}

void CalCircle()
{

		float Radius,Area,Circumference;
		cout<<"Input radius : ";
		cin >> Radius;
		Area = 3.14f*Radius*Radius;
		Circumference = 2*3.14f*Radius;;
		cout<<endl;
		cout<<"Area of circle :"<< Area << endl;
		cout<<"Circumference of circle : "<< Circumference <<endl;
		cout<< "Diameter of circle :"<<(2*Radius)<< endl;
}
void CalRec()
{	float Length,Width,Area;
	cout<<"Input Length and Width : ";
	cin>> Length >> Width;
	Area = Length*Width;
	cout<<"Area of Rectangle :"<< Area <<endl;
}

				

