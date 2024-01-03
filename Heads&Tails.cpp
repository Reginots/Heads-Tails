#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
string HeadsTails();
int main()
{
    cout << "hello wanna play Heads & Tails" << endl;
        cout << "Y or N" << endl;

        char userpick;
            cin >> userpick;

            while (userpick=='Y' || userpick=='y'){
                cout << HeadsTails() << endl;
                    cout << "play again Y or N" << endl;
                        cin >> userpick;
               if(userpick=='N' || userpick=='n'){
                    userpick='a';}
            }


    cout << "thank you for playing" << endl;


    return 0;
}

string HeadsTails(){
    int minv=1;
    int maxv=2;

    srand(time(nullptr));
    int HelpingHand=(rand()%(maxv-minv+1)+minv);

    if (HelpingHand==1) {
        string result="you got Heads";
        return result;
            } else if (HelpingHand) {
                string result="you got Tails";
                return result;
    }


}



