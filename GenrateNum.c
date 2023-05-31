#include<stdio.h>
int main()
{
    FILE **fp2;
    //fp1=fopen("ranm.txt","r");/
    fp2=fopen("randomoutput.txt","w+");
    int n,r,a[900],i,j,temp;
    fscanf(fp2,"%d",&n);
    for(i=1;i<100;i++)
    {
        r=rand();
        r=r%100;
        fprintf(fp2,"%d\t",r);
    }
    rewind(fp2);

    fscanf(fp2,"%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(fp2,"%d",&a[i]);
    }
    fclose(fp2);
    fp2=fopen("randomoutput.txt","w");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;            }
        }

    }
    for(i=0;i<n;i++)
    {
    fprintf(fp2,"%d\t",a[i]);
    }
    return 0;
}
