//include the library
#include<iostream>
using namespace std;
//start the main function
int main()
{
	//start the loop for the star line
	for(int i=0;i<9;i++)
	{
	//put in the conditions for the starry line( first and last)
	if(i==0||i==8)
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
				//put in the condition for the first and last charecter of the line as a star
				if(j==0||j==4) 
				{
				cout<<"*";
				}
				// the conditions for the rest charecters to be a blank space
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
 
