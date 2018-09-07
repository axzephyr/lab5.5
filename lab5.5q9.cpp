//include the library
#include<iostream>
using namespace std;
//initialize the main program
int main()
{
    //declare the variable for the number of lines
    int n;
    //ask the user for the number of lines it wants
    cout<<" How many lines do you want? "<<endl;
    cin>>n;
    //start the looping for the lines
    for(int i=0;i<=n;i++)
    {
        //declare the variable for each of the charector type
        for(int j=0;j<=i;j++)
        {
            //put in the conditions for the charector to be a star or a space
            if(j==0||j==i||i==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        //terminate the line
        cout<<endl;
    }
    //terminate the program
    return 0;
}
