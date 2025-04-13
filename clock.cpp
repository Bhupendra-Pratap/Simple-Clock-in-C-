#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>

using namespace std;

class clock{
    public:
    int s=0,m=0,h=0;
    int timr,op;

    //Starting text
    void menu(){
        cout << "\tChoose any option (1,2,3,4)" << endl;
        cout << "\n1. Clock" << endl;
        cout << "2. Timer" << endl;
        cout << "3. StopWatch" << endl;
        cout << "4. Exit" << endl;
        cin >> op;
    }

    //Displaying Current Time
    void currenttime(){
        time_t now = time(0);
        tm *localTime = localtime(&now);
        cout << asctime(localTime);
    }

    //Timer
    void timer(){
        cout<<"Timer\n";
        cout<<"Enter time in seconds: ";
        cin>>timr;
        for(int i=timr;i>=0;i--){
            system("cls");
            cout<<h<<":"<<m<<":"<<i<<endl;
            sleep(1);
        }
        cout << "Time's Up !!!!" << endl;
    }

    //Stopwatch
    void stopwatch(){
        cout << "StopWatch will start in 3s Press Ctrl+C to stop.\n";
        sleep(3);

        while(true){
            system("cls");
            cout << "Elapsed Time: " 
                 << (h < 10 ? "0" : "") << h << ":"
                 << (m < 10 ? "0" : "") << m << ":"
                 << (s < 10 ? "0" : "") << s << endl; 

            sleep(1);
            s++;
            if(s == 60){
                s=0;
                m++;
            }
            if(m == 60){
                m=0;
                h++;
            }
        }
    }
};

int main(){
    int n=9;
    class clock clk;
    system("cls");

    top:
    clk.menu();
    system("cls");

    switch(clk.op){
        case 1: //Main Clock
            while(true){
                clk.currenttime();
                sleep(1);
                system("cls");
            }
            break;

        case 2: //Timer
            clk.timer();
            break;

        case 3: //StopWatch
            clk.stopwatch();
            break;

        case 4: //Exit
            return 0;

        default:
            cout << "Invalid Option !!" << endl;
            sleep(1);
            system("cls");
            goto top;
    }
    return 0;
}