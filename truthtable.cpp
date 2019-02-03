i #include<iostream>
using namespace std;
int main()
{
	int x,y,z; //variable declaration//
    cout<<"X\tY\tZ\tXY+Z";  //headings of diff. tables//
    for(x=0;x<=1;x++) //nested for loops//
    {
    	for(y=0;y<=1;y++)
    	{
    		for(z=0;z<=1;z++)
    		{
    			if(x*y+z==2)
    			{
    			   cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t1";
			//if we use xy+z in this also like  at end of else statement then if x=1,y=1,z=1 then truth table becomes xy+z=2 i.e. not possible//
			}
			else
			{
			   cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<x*y+z;
			}
		}
	}
    }
	return 0;
}





