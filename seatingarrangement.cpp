#include<iostream>
using namespace std;
class seat
{   public:
    int m;
    char *q;
    public:
    seat()
    {
        m=0;
      q= new char[m+1];
        
    }
};
int main()
{   int A[]={6,18,30,42,54,66,78,90,102};
    int num,count,p;
    cin>>num; 
    seat *S[num];
    for(int i=0;i<num;i++){
     S[i]=new seat;
      cin>>S[i]->m;
    }
   
for(int i=0;i<num;i++){
 
    for(int j=0;j<=8;j++)
    { p=A[j];
        if((S[i]->m>=(p-5))&&(S[i]->m<=(p+6)))
        {
            count=0;
            for(int k=(p-5);k<=(p+6);k++)
            {   count++;
                if(S[i]->m==k)
                {
                    switch(count)
                    {
                        case(1):{S[i]->m+=11; S[i]->q=" WS";goto At;}
                        case(2):{S[i]->m+=9; S[i]->q=" MS";goto At;}
                        case(3):{S[i]->m+=7; S[i]->q=" AS";goto At;}
                        case(4):{S[i]->m+=5; S[i]->q=" AS";goto At;}
                        case(5):{S[i]->m+=3; S[i]->q=" MS"; goto At;}
                        case(6):{S[i]->m+=1; S[i]->q=" WS";goto At;}
                        case(7):{S[i]->m-=1; S[i]->q=" WS";goto At;}
                        case(8):{S[i]->m-=3; S[i]->q=" MS";goto At;}
                        case(9):{S[i]->m-=5; S[i]->q=" AS";goto At;}
                        case(10):{S[i]->m-=7; S[i]->q=" AS";goto At;}
                        case(11):{S[i]->m-=9; S[i]->q=" MS";goto At;}
                        case(12):{S[i]->m-=11; S[i]->q=" WS";goto At}
                    }
                   goto At; 
                }
                
            }
        }
    }
   At: count=0; //nothing
}
for(int l=0;l<num;l++)
{
cout<<S[l]->m<<S[l]->q<<endl;
}
return 0;
}
