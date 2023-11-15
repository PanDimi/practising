#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int blackjack();

int main()
{
    char game;
    cout<<"Welcome to BlackJack!"<<endl;
    cin>>game;

    int player,dealer;

    player=blackjack();
    dealer=blackjack();
    if(player>dealer){
        cout<<"Player wins!"<<endl;

    }else if(dealer>player){
        cout<<"Dealer wins!"<<endl;

    }




    return 0;
}
int blackjack()
{

    string answer="Yes";

    srand(time(0));
    int number, sum=0;

    while(answer=="Yes" && sum<=21){

        number=rand()%13+1;

        if(number==1){
            cout<<"Assos 1 h 11? "<<endl;
            cin>>number;
        }else if(number==11){
            cout<<"J"<<endl;
            number=10;
        }else if(number==12){
            cout<<"Q"<<endl;
            number=10;
        }else if(number==13){
            cout<<"K"<<endl;
            number=10;
        }else
        {
            cout<<number<<endl;
        }
            sum=sum+number;
            if(sum>21){
                break;
            }

            cout<<"Thelete na synexisete?"<<endl;
            cin>>answer;

    }
        return sum;

}



