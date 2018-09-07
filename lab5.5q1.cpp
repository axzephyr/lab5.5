
//include the library.
#include<iostream>
using namespace std;
//initialize the main function.
int main()
{
    //ask the user for the number of lines
    int n;
    cout<< "how many lines do you want?"<<endl;
    cin>>n;
	//start the loop.
	for(int i=0; i<n ; i++)
	{
	//write the loop for five stars in a single star.
	int j=0;
	while(j<5)
		//write tthe condition for the stars to pappear five times in a row.
		{
		cout<<"*";
		j++;
		}
	//terminate the row.

	cout<<endl;
	}
return 0;
}
