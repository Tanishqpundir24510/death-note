import java.util.*;
public class Main
{
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    String input1=sc.nextLine();
    int input2=sc.nextInt();
    int sum=0,ar=0;
    String in=input1.replaceAll("[^a-zA-Z]","");
    String s=in.toUpperCase();
    if(input2==1)
    {
    for(int i=0;i<s.length();i++)
    {
     char c=s.charAt(i);
     ar=(int)c-64;
    sum+=ar;
    }
    System.out.println(sum);
    }
    if(input2==0)
    {
    String s1=s.replaceAll("[AEIOU]", "");
    for(int i=0;i<s1.length();i++)
    {
     char c=s1.charAt(i);
     ar=(int)c-64;
    sum+=ar;
    }
 System.out.println(sum);
    }
}
}