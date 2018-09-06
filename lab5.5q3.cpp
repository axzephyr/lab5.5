//include the library
#include<iostream>
using namespace std;
//introduce the main function
int main()
{
//put in the variables that control the stars
	for(int i=9;i>=4;)
	{
		//put in the conditions that control the spaces
		int j=0;
		while(j<=(i-4))
		{
			//put in the spaces
			cout<<" ";
			j++;
		}
	i--;
	//print the stars
	cout<<"*****"<<endl;
	}
return 0;
}	
