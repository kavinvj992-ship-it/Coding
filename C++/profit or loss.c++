#include<iostream>
using namespace std;
void profitorloss( int purchace,int sale_amount){
    int diff=sale_amount-purchace;
    if(purchace<sale_amount){
        cout<<"you get profit:"<<diff;
    }
    else{
        cout<<"you get loss:"<<diff;
    }

}




int main()
{
   int purchace,sale_amount;
   cin>>purchace>>sale_amount;
   profitorloss(  purchace,sale_amount);

}
   