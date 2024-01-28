#include<iostream>
#include<conio.h>
using namespace std;

class Test{
	private:
		int arr[10];
		int i;
	public:
		Test()
		{
			for int (i=0,i<=9,i++)
			{
				arr[i]=i+2;
			}
		}
		int &operator [](int index)
		{
			if(index>9)
			cout<<"Index is Out Bond"<<endl;
			else
			return arr[index];
			
		}
};
main()
{
	Test T;
	cout<<"Value of Index 0 is:"<<T[0];
	cout<<"Value of Index 3 is:"<<T[3];
}
