#include <iostream>
using namespace std;


int main()
{
    int q();
int score=0, op=0;
cout<<"Choose: \n 1.Play the game 2. Exit \n";
cin>>op;
 if(op==1)
{ score=q();
}
else if (op==2)
{
return 0;
}
else
{
    cout<<"incorrect input"<<endl;
    return 0;
}


cout<<"Your score is : "<<score<<endl;
return 0;
}

int q()
{
int ans, count=0, score=0;
cout<<"4+6 = ";
cin>>ans;
if(ans==10)
{score++;
count++;
}
cout<<"5*4/4 = ";
cin>>ans;
if(ans==5)
{score++;
count++;
}
cout<<"21/3-1 = ";
cin>>ans;
if(ans==6)
{score++;
count++;
}
cout<<"6%2+4-6/3 = ";
cin>>ans;
if(ans==2)
{score++;
count++;
}


return score;
}
