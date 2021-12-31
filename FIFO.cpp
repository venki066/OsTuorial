#include <iostream>
using namespace std;
int main()
{
	int i,j,n,a[50],frame[10],no,k,avail,count=0,count1=0;
    cout<<" ENTER THE NUMBER OF PAGES \n";
	cin>>n;
	cout<<"\n ENTER THE PAGE NUMBER :\n";
    for(i=1;i<=n;i++)
        cin>>a[i];
    cout<<"\n ENTER THE NUMBER OF FRAMES :";
    cin>>no;
	for(i=0;i<no;i++)
        frame[i]= -1;
    j=0;
    cout<<"\tref string\t page frames\n";
	for(i=1;i<=n;i++)
    {
        cout<<a[i]<<"\t\t";
        avail=0;
        for(k=0;k<no;k++)
			if(frame[k]==a[i])
			{
                avail=1;
                count1++;
           }
            if (avail==0)
            {
                frame[j]=a[i];
                j=(j+1)%no;
                count++;
                for(k=0;k<no;k++)
                    printf("%d\t",frame[k]);
			}
            cout<<"\n";
	}
    cout<<"Page Faults Is " <<count;
    cout<<"\nPage Hits Is "<<count1;
    cout<<"\nMiss ratio is "<<count<<"/"<<n<<" %";
    cout<<"\nHit ratio is "<<count1<<"/"<<n<<" %";
    return 0;
}
