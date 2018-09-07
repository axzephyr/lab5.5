//include the library
#include<iostream>
using namespace std;
//introduce the main function
int main()
{
    int n;
    //ask the user for the number of lines it wants
    cout<<" how many lines do you want? "<<endl;
    cin>>n;
    //put in the variables that control the stars
	for(int i=0;i<=n;)
	{
		//put in the conditions that control the spaces
		int j=0;
		while(j<=(n-i))
		{
			//put in the spaces
			cout<<" ";
			j++;
		}
	i++;
	//print the stars
	cout<<"*****"<<endl;
	}
return 0;
}
