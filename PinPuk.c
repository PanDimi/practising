#include <iostream>

using namespace std;

void Pin();
void Puk();
int main()
{


    Pin();
    Puk();





    return 0;
}

    void Pin(){
    int userpin;
    int tries=3;
    int password=444;

    for(int i=0; i<3; i++){
        cout<<" dwse pin: " <<endl;
        cin>> userpin;
        if(userpin==password){
            cout<<" Unlocked! "<<endl;
            break;
        }else{

        }void Puk();
    }



    }

     void Puk(){
    int userpuk;
    int tries=5;
    int password=123456;

    for(int i=0; i<6; i++){
        cout<<"dwse puk: "<<endl;
        cin>> userpuk;
        if(userpuk==password){
            Pin();
            break;
        }else{
           cout<<"Locked "<<endl;
        }
    }



    }

