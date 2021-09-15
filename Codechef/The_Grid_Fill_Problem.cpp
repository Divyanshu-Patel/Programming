#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,i,j;
		cin>>a;
		int arr[a][a];

		if(a%2==0){

		    for(i=0; i<a; i++)
		    {
            for(j=0; j<a; j++)
            {
				arr[i][j]=-1;
                }

		    }
		}

		else
		{
			for(i=0; i<a; i++)
			{
				for(j=0; j<a; j++)
				{
					if(i==j){
					    arr[i][j]=-1;
                    }

					else{
					    arr[i][j]=1;
                    }
				}
			}
		}
		for(i=0; i<a; i++){

			for(j=0; j<a; j++){

				cout<<arr[i][j]<<" ";
                    
                }


			    cout<<endl;
                
                }
	}

	return 0;
}
	