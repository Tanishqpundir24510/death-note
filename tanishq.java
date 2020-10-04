
public class c {
    public static void main(String[]args)
    {int a[]={2,4,3,1,6,5};int t;
    for(int i=0;i<a.length;i++)
    {for(int j=0;j<a.length;j++)
    {if(a[i]<a[j])
    {t=a[i];
    a[i]=a[j];
    a[j]=t;}}}
    
    for(int i=0;i<a.length;i++)
    {System.out.print(a[i]+" ");}
        
    }
    }
    
