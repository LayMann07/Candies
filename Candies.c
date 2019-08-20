//# Candies
//Round D - Kick Start 2018
// https://codingcompetitions.withgoogle.com/kickstart/round/0000000000050ee1/00000000000510ef link to the problem


#include<stdio.h>
int main()
    
{
    int T,N,O,x,y,A,B,C,L,M,p,BE,i,j,a,Y,ODD_TOT,TEMP;
    long long int D;
    int X[10000],S[10000],BO[10000];
    scanf("%d",&T);
    for(p=1;p<=T;p++)
    {
        scanf("%d %d %lli",&N,&O,&D);
        scanf("%d %d %d %d %d %d %d",&x,&y,&A,&B,&C,&M,&L);
        S[1]=x;
        S[2]=y;
        X[1]=x;
        X[2]=y;
           for(i=3;i<=N;i++)
        {
            
            Y=((X[i-1]*A) + (X[i-2]*B) + C);
            if(M>Y)
            {
                X[i]=Y;
            }
            else
            {
                X[i]=Y%M;
            }
            S[i]= X[i] + L;
            
        }
        for (i = 1; i <= N; ++i) 
        {
 
            for (j = i + 1; j < N; ++j)
            {
 
                if (S[i] > S[j]) 
                {
 
                    a =  S[i];
                    S[i] = S[j];
                    S[j] = a;
 
                }
 
            }
 
        }
        ODD_TOT=0;
        TEMP=N;
        for(j=0;j<O;j++)
        {
            for(i=TEMP;i>0;i--)
            {
                if(S[i]%2==1)
                {
                    BO[j]=S[i];
                    ODD_TOT= ODD_TOT + BO[j];
                    TEMP=i-1;
                    break;
                }
            
            }
        }   
        for(i=N;i>0;i--)
        {
            if(S[i]%2==0)
            {
                BE=S[i];
                break;
            }
            
        }
       
        if(D>BE+ODD_TOT)
        {
            printf("Case #%d:  ",p);
            printf("%d \n",BE+ODD_TOT);
         
        else
        {
            printf("Case #%d:  ",p);
            printf("IMPOSSIBLE\n");
           
        }    
    }
}
