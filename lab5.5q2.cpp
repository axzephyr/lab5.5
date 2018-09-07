//include the library
#include<iostream>
using namespace std;
//start the main function
int main()
{
    int n;
    //ask the user for the number of lines it wants
    cout<<" how many lines do you want? "<<endl;
    cin>>n;
	//start the loop for the star line
	for(int i=0;i<n;i++)
	{
	//put in the conditions for the starry line( first and last)
	if(i==0||i==(n-1))
		{
		int j=0;
		while(j<5)
		{
			cout<<"*";
			j++;
		}
	cout<<endl;
	}
		// put in the conditions for the rest of the lines
		else
		{
			int j=0;
			for(;j<5;)
			{
				//put in the condition for the first and last charector of the line as a star
				if(j==0||j==4)
				{
				cout<<"*";
				}
				// the conditions for the rest charectors to be a blank space
				else
				{
				cout<<" ";
				}
			//increase the value of j
			j++;
			}
		cout<<endl;
		}

	}
//terminate the program

return 0;
}
