#include <iostream>
using namespace std;

int main() {
    int quant; 
    int choice;

    int Qrooms=0;//quantity or rooms
    int Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;//quantity of food items 

    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0; //s for sold

    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0; 

    cout << "\n\t Quantity of items we have";
    cout<<"\n Rooms available :";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta :";
    cin>>Qpasta;
    cout<<"\n Quantity of burger :";
    cin>>Qburger;
    cout<<"\n Quantity of noodles :";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake :";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll :";
    cin>>Qchicken;

    m:
    cout << "\n\t\t\t Please select from the menu options";
    cout<<"\n\n1) Rooms";
    cout<<"\n\n2) Pasta";
    cout<<"\n\n3) Burger";
    cout<<"\n\n4) Noodles";
    cout<<"\n\n5) shake";
    cout<<"\n\n6) chicken-roll";
    cout<<"\n\n7) Information regarding sales and collection";
    cout<<"\n\n8) Exit";

    cout<<"\n\n Please Enter you choice! ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\n Enter the number of rooms you want: ";
            cin>>quant;
            if(Qrooms-Srooms >= quant){
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+quant*1200; //Total_room = price of the room
                cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
            } else {
                cout << "\n\t Only " << Qrooms-Srooms << "Rooms remaining in hotel";
            }
            break;

        case 2:
            cout<<"\n\n Enter Pasta Quantity: ";
            cin>>quant;
            if(Qpasta-Spasta >= quant){
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+quant*250; //Total_room = price of the room
                cout<<"\n\n\t\t"<<quant<<"pasta is the order! ";
            } else {
                cout << "\n\t Only " << Qpasta-Spasta << "Pasta remaining in hotel";
            }
            break;

        case 3:
            cout<<"\n\n Enter Burger Quantity: ";
            cin>>quant;
            if(Qburger-Sburger >= quant){
                Sburger=Sburger+quant;
                Total_burger=Total_burger+quant*120; //Total_room = price of the room
                cout<<"\n\n\t\t"<<quant<<"burger is the order! ";
            } else {
                cout << "\n\t Only " << Qburger-Sburger << "burgers remaining in hotel";
            }
            break;

        case 4:
            cout<<"\n\n Enter Noodle Quantity: ";
            cin>>quant;
            if(Qnoodles-Snoodles >= quant){
                Snoodles=Snoodles+quant;
                Total_noodles=Total_noodles+quant*120; //Total_room = price of the room
                cout<<"\n\n\t\t"<<quant<<"noodle is the order! ";
            } else {
                cout << "\n\t Only " << Qnoodles-Snoodles << "Noodles remaining in hotel";
            }
            break;

        case 5:
            cout<<"\n\n Enter Shakes Quantity: ";
            cin>>quant;
            if(Qshake-Sshake >= quant){
                Sshake=Sshake+quant;
                Total_shake=Total_shake+quant*250; //Total_room = price of the room
                cout<<"\n\n\t\t"<<quant<<"shakes is the order! ";
            } else {
                cout << "\n\t Only " << Qshake-Sshake << "Shakes remaining in hotel";
            }
            break;

        case 6:
            cout<<"\n\n Enter Chicken-roll  Shakes Quantity: ";
            cin>>quant;
            if(Qchicken-Schicken >= quant){
                Schicken=Schicken+quant;
                Total_chicken=Total_chicken+quant*150; //Total_room = price of the room
                cout<<"\n\n\t\t"<<quant<<"chicken-roll is the order! ";
            } else {
                cout << "\n\t Only " << Qchicken-Schicken << "Chicken-roll remaining in hotel";
            }
            break;
        
        case 7:
            cout<<"\n\t\t Details of sales and collection";
            cout<<"\n\n Number of rooms we had : "<<Qrooms;
            cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
            cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
            cout<<"\n\n Total rooms collection for the day. : "<< Total_rooms;

            cout<<"\n\n Number of Pastas we had : "<<Qpasta;
            cout<<"\n\n Number of Pastas we gave for rent "<<Spasta;
            cout<<"\n\n Remaining Pastas : "<<Qpasta-Spasta;
            cout<<"\n\n Total Pasta collection for the day. : "<< Total_pasta;

            cout<<"\n\n Number of burgers we had : "<<Qburger;
            cout<<"\n\n Number of burgers we gave for rent "<<Sburger;
            cout<<"\n\n Remaining burgers : "<<Qburger-Sburger;
            cout<<"\n\n Total burger collection for the day. : "<< Total_burger;

            cout<<"\n\n Number of shakes we had : "<<Qshake;
            cout<<"\n\n Number of shakes we gave for rent "<<Sshake;
            cout<<"\n\n Remaining shakes : "<<Qshake-Sshake;
            cout<<"\n\n Total Noodle shakes for the day. : "<< Total_shake;

            cout<<"\n\n Number of chicken-roll we had : "<<Qchicken;
            cout<<"\n\n Number of chicken-roll we gave for rent "<<Schicken;
            cout<<"\n\n Remaining chicken-roll : "<<Qchicken-Schicken;
            cout<<"\n\n Total shakes chicken-roll for the day. : "<< Total_chicken;

            cout <<"\n\n Total Collection for the day "<<Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
            break;
        
        case 8:
            exit(0);
        default:
            cout<<"\n Please select the numbers mentioned above!";
            
    }
    goto m;
}