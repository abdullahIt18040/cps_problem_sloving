
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int eps=1e-12;
int main()
{

    optimization();
    int t;
    cin>>t;
int    k=1;
    while(t--)
    {
        double ab,ac,bc,r;
        cin>>ab>>ac>>bc>>r;
        double lf=0,rf=ab;
        for(int i=0; i<100; i++)
        {
            double ad=(lf+rf)/2.0;
            double x=ad/ab;
            double ae,de;
            ae=(ac*x);
            de=(bc*x);
            double pade=(ad+ae+de)/2.0;
            double pabc=(ab+ac+bc)/2.0;
            double arade=sqrt(pade*(pade-ad)*(pade-ae)*(pade-de));
            double arabc=sqrt(pabc*(pabc-ab)*(pabc-bc)*(pabc-ac));
            double bdec=(arabc-arade);
            if((arade/bdec)>r)
            {
                rf=ad;
            }
            else
            {
                lf=ad;
            }

        }
        cout<<"Case "<<k<<": "<<fixed<<setprecision(10)<<lf<<endl;
        k++;
    }










    return 0;
}
