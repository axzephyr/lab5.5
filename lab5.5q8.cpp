//include the library
#include<iostream>
using namespace std;
//initialize the main function
int main()
{
    int n;
    //ask the user for the number of lines it wants
    cout<<" How many lines do you want? "<<endl;
    cin>>n;
    //put in the conditions using for
	for(int i=0;i<n;)
	{
		int j=0;
		//put in the conditions for the while looping
		while (j<(n-i))
		{
		cout<<"*";
		j++;
		}
	i++;
	cout<<endl;
	}
	//terminate the program
return 0;
}
