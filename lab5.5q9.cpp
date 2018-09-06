#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<5;)
	{		
		if(i==0||i==4)
		{
			int j=0;
			while(j<=i)
			{
				cout<<"*";
				j++;
			}
		}
		else
		{
			for (int j=0;j<i;)
			{
				if (j==0||j==(i-1))
				{
					cout<<"*";
					j++;				
				}
				else 
				{
					cout<<" ";
				}
			}
		cout<<endl;
		i++;
		}
	}
return 0;
}													

		
