#include<bits/stdc++.h>
using namespace std;

class Box
{
    long int l, b, h;
    public:
        Box()
        {
            l = 0;
            b = 0;
            h = 0;
        }
        Box(int l, int b, int h)
        {
            this->l = l;
            this->b = b;
            this->h = h;
        }
        Box(Box &B)
        {
            l = B.l;
            b = B.b;
            h = B.h;
        }
        int getLength()
        {
            return l;
        }
        int getBreadth()
        {
            return b;
        }
        int getHeight()
        {
            return h;
        }
        long long CalculateVolume()
        {
            return (l*b*h);
        }
        
        friend bool operator < (Box const& A, Box const& B);
        
        friend ostream& operator << (ostream& output, Box& B);
};

bool operator < (Box const& A, Box const& B)
{
    if(A.l < B.l)
    {
        return true;
    }
    else if(A.b < B.b && A.l == B.l)
    {
        return true;
    }
    else if(A.h < B.h && (A.b == B.b && A.l == B.l))
    {
        return true;
    }
    else
    {
        return false;
    }
}

ostream& operator << (ostream& output, Box& B)
{
    output << B.l << " " << B.b << " " << B.h;
    return output;
}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}