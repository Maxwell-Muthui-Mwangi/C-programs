/*  """Hotel Management System"""
Author : Maxwell Muthui Mwangi 
Date : 7th Sunday/July/2024

/*
This is a simple Hotel Management System that can be used by a hotel chain.
It allows the user to add, remove, and view the inventory of different food items.
The user can also calculate the total revenue generated from selling these items.

/*
Menu:

1. Add food item
2. Remove food item
3. View inventory
4. Calculate revenue
5. Exit

/*
Requirements:
- The hotel chain has 5 rooms, 3 pasta restaurants, 2 noodle houses, 2 shake shops, and 1 chicken shop.
- Each food item has a unique name, price, and quantity in stock.
- The user can add, remove, and view the inventory of different food items.
- The user can also calculate the total revenue generated from selling these items.
- The user can exit the program.

/*
Sample Output:

Welcome to the Hotel Management System!

1. Add food item
2. Remove food item
3. View inventory
4. Calculate revenue
5. Exit

Enter your choice: 1

Enter the name of the food item: pasta
Enter the price of the food item: 100
Enter the quantity of the food item: 10

Item added successfully!

1. Add food item
2. Remove food item
3. View inventory
4. Calculate revenue
5. Exit

Enter your choice: 2

Enter the name of the food item: chicken

Item removed successfully!

1. Add food item
2. Remove food item
3. View inventory
4. Calculate revenue
5. Exit

Enter your choice: 3

Inventory:

Pasta: 10
Noodles: 0
Shake: 0
Chicken: 0

1. Add food item
2. Remove food item
3. View inventory
4. Calculate revenue
5. Exit

Enter your choice: 4
Total revenue: 0

1. Add food item
2. Remove food item
3. View inventory
4. Calculate revenue
5. Exit

Enter your choice: 5

Goodbye!








*/





#include<iostream>
using namespace std;


int main()
{
    //App Variables for Hotel Management App
    int quant;//quantity
    int choice;///choices in menu

    //quantity we had in hotel
    int  Qrooms =0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;


   //food items sold
    int Srooms=0, Spasta=0, Sburger=0,Snoodles=0,Sshake=0,Schicken=0;


     ///total price of items
     int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_shake=0, Total_chicken=0;


     ///
     std::cout<<"\n\t Quantity of Items we Have: ";

     std::cout<<"\n Rooms Available: ";
     cin>>Qrooms;

     std::cout<<"\n Pasta Available: ";
     cin>>Qpasta;

     std::cout<<"\n Burger Available: ";
     cin>>Qburger;

     std::cout<<"\n Noodles Available: ";
     cin>>Qnoodles;

     std::cout<<"\n Shake Available: ";
     cin>>Qshake;

     std::cout<<"\n Chicken Roll Available: ";
     cin>>Qchicken;

    menu:
     ///menu 
     std::cout<<"\n\t\t Please Select from the menu options ";

     std::cout<<"\n \n1) Rooms";
     std::cout<<"\n 2) Pasta";
     std::cout<<"\n 3) Burger";
     std::cout<<"\n 4) Noodles";
     std::cout<<"\n 5) Shake";
     std::cout<<"\n 6) Chicken Roll";
     std::cout<<"\n 7) Information regarding sales and Collection";
     std::cout<<"\n 8) Exit";

     std::cout<<"\n\n Please Enter your choice! : ";
     cin>>choice;


     //switch case statements

     switch(choice)
     {

        case 1:
            std::cout<<"\n\n Enter the number of rooms you want: ";
            cin>>quant;


            if(Qrooms-Srooms >= quant)
            {
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+(quant*1200);
                std::cout<<"\n\n\t\t"<<quant<<" room(s) have been alloted to you!";
                std::cout<<"\n\n\t\tThank you for choosing Baller Eats Hotel!";


            }

            else
            {
                std::cout<<"\n Only "<<Qrooms-Srooms<<" Rooms remaining in hotel";
                std::cout<<"\n Please try again with some other rooms Thank You!";
            }
            break;
            

        case 2:
            std::cout<<"\n\n Enter the number of pasta you want: ";
            cin>>quant;

            if(Qpasta-Spasta >= quant)
            {
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+(quant*250);
                std::cout<<"\n\n\t\t"<<quant<<" pasta(s) have been ordered!";
                std::cout<<"\n\n\t\tThank you for choosing Baller Eats Hotel!";
            }    

            else
            {
                std::cout<<"\n Only "<<Qpasta-Spasta<<" pasta remaining in hotel";
                std::cout<<"\n Please try again with some other pasta Thank You!";
            }

            break;


        case 3:
            std::cout<<"\n\n Enter the number of burger you want: ";
            cin>>quant;

            if(Qburger-Sburger >= quant)
            {
                Sburger=Sburger+quant;
                Total_burger=Total_burger+(quant*300);
                std::cout<<"\n\n\t\t"<<quant<<" burger(s) have been ordered!";
                std::cout<<"\n\n\t\tThank you for choosing Baller Eats Hotel!";
            }    

            else
            {
                std::cout<<"\n Only "<<Qburger-Sburger<<" burger remaining in hotel";
                std::cout<<"\n Please try again with some other burger Thank You!";
            }

            break;


        case 4:
            std::cout<<"\n\n Enter the number of noodles you want: ";
            cin>>quant;

            if(Qnoodles-Snoodles >= quant)
            {
                Snoodles=Snoodles+quant;
                Total_shake=Total_shake+(quant*150);
                std::cout<<"\n\n\t\t"<<quant<<" noodle(s) have been ordered!";
                std::cout<<"\n\n\t\tThank you for choosing Baller Eats Hotel!";
            }

            else
            {
                std::cout<<"\n Only "<<Qnoodles-Snoodles<<" noodles remaining in hotel";
                std::cout<<"\n Please try again with some other noodles Thank You!";
            }

            break;


        case 5:
            std::cout<<"\n\n Enter the number of shake you want: ";
            cin>>quant;

            if(Qshake-Sshake >= quant)
            {
                Sshake=Sshake+quant;
                Total_shake=Total_shake+(quant*200);
                std::cout<<"\n\n\t\t"<<quant<<" shake(s) have been ordered!";
                std::cout<<"\n\n\t\tThank you for choosing Baller Eats Hotel!";
            }    

            else
            {
                std::cout<<"\n Only "<<Qshake-Sshake<<" shake remaining in hotel";
                std::cout<<"\n Please try again with some other shake Thank You!";
            }

            break;


        case 6:
             std::cout<<"\n\n Enter the number of chicken roll you want: ";
             cin>>quant;    

             if(Qchicken-Schicken >= quant)
             {
                 Schicken=Schicken+quant;
                 Total_chicken=Total_chicken+(quant*350);
                 std::cout<<"\n\n\t\t"<<quant<<" chicken roll(s) have been ordered!";
                 std::cout<<"\n\n\t\tThank you for choosing Baller Eats Hotel!";
             }

             else
             {
                 std::cout<<"\n Only "<<Qchicken-Schicken<<" chicken roll remaining in hotel";
                 std::cout<<"\n Please try again with some other chicken roll Thank You!";
             }

             break;
         
        case 7:
            std::cout<<"\n\n\t\tThank you for choosing Baller Eats Hotel!";
            std::cout<<"\n\n\t\t Details of Sales and collections: ";
            std::cout<<"\n\n\t\tTotal rooms we had: "<<Qrooms;
            std::cout<<"\n\n\t\tTotal pasta we had: "<<Qpasta;
            std::cout<<"\n\n\t\tTotal burger we had: "<<Qburger;
            std::cout<<"\n\n\t\tTotal noodles we had: "<<Qnoodles;
            std::cout<<"\n\n\t\tTotal shake we had: "<<Qshake;
            std::cout<<"\n\n\t\tTotal chicken roll we had: "<<Qchicken;


            //sold
            std::cout<<"\n\n\t\t Sold Items: ";
            std::cout<<"\n\n\t\tTotal rooms we sold: "<<Srooms;
            std::cout<<"\n\n\t\tTotal pasta we sold: "<<Spasta;
            std::cout<<"\n\n\t\tTotal burger we sold: "<<Sburger;
            std::cout<<"\n\n\t\tTotal noodles we sold: "<<Snoodles;
            std::cout<<"\n\n\t\tTotal shake we sold: "<<Sshake;
            std::cout<<"\n\n\t\tTotal chicken roll we sold: "<<Schicken;


            //remaining rooms
            std::cout<<"\n\n\t\t Remaining rooms: "<<Qrooms-Srooms;

            //remaining pasta
            std::cout<<"\n\n\t\t Remaining pasta: "<<Qpasta-Spasta;

            //remaining burger
            std::cout<<"\n\n\t\t Remaining burger: "<<Qburger-Sburger;

            //remaining noodles
            std::cout<<"\n\n\t\t Remaining noodles: "<<Qnoodles-Snoodles;   

            //remaining shake
            std::cout<<"\n\n\t\t Remaining shake: "<<Qshake-Sshake; 

            //remaining chicken
            std::cout<<"\n\n\t\t Remaining chicken roll: "<<Qchicken-Schicken;

            //remaining total
            std::cout<<"\n\n\t\t Remaining total: "<<Qrooms-Srooms+Qpasta-Spasta+Qburger-Sburger+Qnoodles-Snoodles+Qshake-Sshake+Qchicken-Schicken;


            //total revenue for rooms
            std::cout<<"\n\n\t\t Total Revenue for rooms: "<<Total_rooms*1200;

            //total revenue for pasta
            std::cout<<"\n\n\t\t Total Revenue for pasta: "<<Total_pasta*250;

            //total revenue for burger
            std::cout<<"\n\n\t\t Total Revenue for burger: "<<Total_burger*300;

            //total revenue for noodles
            std::cout<<"\n\n\t\t Total Revenue for noodles: "<<Total_shake*150;

            //total revenue for shake
            std::cout<<"\n\n\t\t Total Revenue for shake: "<<Total_shake*200;

            //total revenue for chicken roll
            std::cout<<"\n\n\t\t Total Revenue for chicken roll: "<<Total_chicken*350;




            //revenue
            std::cout<<"\n\n\t\t Total Revenue: "<<Total_rooms+Total_pasta+Total_burger+Total_shake+Total_chicken;
            break;


        case 8:
            std::cout<<"\n\n\t\tThank you for choosing Baller Eats Hotel!";
            exit(0);
            return 0;
            break;    


        default:
             std::cout<<"\n\n\t\tInvalid Option! Please try again.";
                 







            

     }
     goto menu;




    
    
     return 0;
}