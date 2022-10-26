#include<iostream>
using namespace std;

class Number
{
    public:
    int num;
    int check_prime(int num)
    {
        int count=0;
        for(int i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        return num;
    else
        return 0;
    }
};
class Even:public Number
{
    public:
    int show(int num)
    {
        if(num%2==0)
        {
            cout<<num<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    void display()
    {
        cout<<check_prime(num)<<endl;
    }

};

int main()
{
    Even n8;
    int n9;
    cin>>n9;

    n8.num=n9;

    n8.display();
    n8.show(n9);

    return 0;
}