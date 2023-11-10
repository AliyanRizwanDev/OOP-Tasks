#include<iostream>
using namespace std;
class Pizza
{
public:
	char pizza1[30] = "Chicken Fajita";
	char pizza2[30] = "Chicken BarBQ";
	char pizza3[30] = "Peri Peri";
	char pizza4[30] = "Creamy Max";
	Pizza()
	{

	}
	void i1()
	{
		int pchoice, pchoice1, quantity, bill;
		cout << endl << "1) " << pizza1 <<  endl;
		cout << "2) " << pizza2 <<  endl;
		cout << "3) " << pizza3 <<  endl;
		cout << "4) " << pizza4 <<  endl;
		cout << endl << "Please Enter which Flavour would you like to have=";
		cin >> pchoice;
		if (pchoice >= 1 && pchoice <= 4)
		{
			cout << endl;
			cout << "1) Small Rs.250" << endl;  
			cout << "2) Regular Rs.500" << endl;
			cout << "3) Large Rs.900<< endl"<<endl;
			cout << endl;
			cout << "Choose Size Please=";
			cin >> pchoice1;
			cout << endl;

			if (pchoice1 >= 1 && pchoice1 <= 3)
			{
				cout << endl << "Please Enter Quantity: ";
				cin >> quantity;
				cout << endl;
				switch (pchoice1)
				{
				case 1: bill = 250 * quantity;
					break;

				case 2: bill = 500 * quantity;
					break;

				case 3: bill = 900 * quantity;
					break;


				}
			}
			system("CLS");
			switch (pchoice)
			{
			case 1:
				cout << "\t\t\t--------Your Order---------" << endl;
				cout << "" << quantity << " " << pizza1;
				cout << "Your Total Bill is " << bill << endl;
				cout<< "Your Order Will be delivered in 40 Minutes"<<endl<<endl;
				cout << "Thank you For Ordering From DJRT Jr's. Fast Food" << endl;
				break;
			case 2:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "  " << quantity << "  " << pizza2<<endl;
				cout << "Your Total Bill is " << bill << endl;
				cout << "Your Order Will be delivered in 40 Minutes"<<endl;
				cout << "Thank you For Ordering From DJRT Jr's Jr. Fast Food" << endl;
				break;
			case 3:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "  " << quantity << "  " << pizza3<<endl;
				cout << "Your Total Bill is " << bill << endl;
				cout << "Your Order Will be delivered in 40 Minutes"<<endl;
				cout << "Thank you For Ordering From DJRT Jr's. Fast Food" << endl;
				break;
			case 4:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "  " << quantity << "  " << pizza4<<endl;
				cout << "Your Total Bill is " << bill << endl;
				cout << "Your Order Will be delivered in 40 Minutes"<<endl;
				cout << "Thank you For Ordering From DJRT Jr's. Fast Food" << endl;
				break;

			}

		}

	}
};
class Burger
{
public:
	char bur1[30] = "Zinger Burger";
	char bur2[30] = "Chicken Burger";
	char bur3[30] = "Beef Burger";
	Burger()
	{

	}
	void i2()
	{
		int pchoice, pchoice1, quantity, bill;
		cout << endl;
		cout << "1 " << bur1 << " Rs.180" << endl;
		cout << "2 " << bur2 << " Rs.150" << endl;
		cout << "3 " << bur3 << " Rs.160" << endl;
		cout << endl;
		cout << "Please Enter which Burger you would like to have?: ";
		cin >> pchoice1;
		cout << endl;
		if (pchoice1 >= 1 && pchoice1 <= 3)
		{
			cout << endl;
			cout << "Please Enter Quantity: ";
			cin >> quantity;
			cout << endl;
			switch (pchoice1)
			{
			case 1: bill = 180 * quantity;
				break;

			case 2: bill = 150 * quantity;
				break;

			case 3: bill = 160 * quantity;
				break;

			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t--------Your Order---------"<<endl;
				cout << "" << quantity << " " << bur1;
				cout << endl;
				cout << "Your Total Bill is " << bill << endl; 
				cout << "Your Order Will be delivered in 40 Minutes"<<endl;
				cout << endl;
				cout << "Thank you For Ordering From DJRT Jr's. Fast Food "<<endl;
				break;
			case 2:
				cout << "\t\t--------Your Order---------"<<endl;
				cout << "" << quantity << "  " << bur2<<endl;

				cout << "Your Total Bill is " << bill << endl; 
				cout<< "Your Order Will be delivered in 40 Minutes"<<endl;
				cout << endl;
				cout << "Thank you For Ordering From DJRT Jr's. Pizza"<<endl;
				break;
			case 3:
				cout << "\t\t--------Your Order---------"<<endl;
				cout << "" << quantity << " " << bur3;
				cout << endl;
				cout << "Your Total Bill is " << bill << endl;
				cout << "Your Order Will be delivered in 40 Minutes"<<endl;
				cout << endl;
				cout << "Thank you For Ordering From DJRT Jr's. Fast Food"<<endl;
				break;


			}
		}

	}

};
class Sandwich
{
public:
	char sand1[30] = "Club Sandwich";
	char sand2[30] = "Chicken Crispy Sandwich";
	char sand3[30] = "Extream Veg Sandwich";
	Sandwich()
	{

	}
	void i3()
	{
		int pchoice, pchoice1, quantity, bill;
		cout << endl;
		cout << "1  " << sand1 << " Rs.240" << endl;
		cout << "2  " << sand2 << " Rs.160" << endl;
		cout << "3  " << sand3 << " Rs.100" << endl;
		cout << endl;
		cout << "Please Enter which Sandwich you would like to have?:";
		cin >> pchoice1;
		cout << endl;
		if (pchoice1 >= 1 && pchoice1 <= 3)
		{
			cout << "Please Enter Quantity: ";
			cin >> quantity;
			cout << endl;
			switch (pchoice1)
			{
			case 1: bill = 240 * quantity;
				break;

			case 2: bill = 160 * quantity;
				break;

			case 3: bill = 100 * quantity;
				break;

			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "" << quantity << " " << sand1 << endl;
				cout << "Your Total Bill is " << bill << endl;
				cout<< "Your Order Will be delivered in 40 Minutes" << endl;
				cout << endl;
				cout << "Thank you For Ordering From DJRT Jr's. Fast Food " << endl;
				break;
			case 2:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "  " << quantity << "  " << sand2<<endl;
				cout << "Your Total Bill is " << bill << endl;
				cout<<"Your Order Will be delivered in 40 Minutes" << endl;
				cout << endl;
				cout << "Thank you For Ordering From DJRT Jr's. Pizza" << endl;
				break;
			case 3:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "" << quantity << " " << sand3 << endl;
				cout << "Your Total Bill is " << bill << endl;
				cout<<"Your Order Will be delivered in 40 Minutes" << endl;
				cout << "Thank you For Ordering From DJRT Jr's. Fast Food" << endl;
				break;


			}
		}


	}
};
class Roll
{
public:
	char roll1[30] = "Chicken Chatni Roll";
	char roll2[30] = "Chicken Mayo Roll";
	char roll3[30] = "Veg Roll With Fries";
	Roll()
	{

	}
	void i4()
	{
		int pchoice, pchoice1, quantity, bill;
		cout << endl;
		cout << "1 " << roll1 << " Rs.150" << endl;
		cout << "2 " << roll2 << " Rs.100" << endl;
		cout << "3 " << roll3 << " Rs.120" << endl;
		cout << endl;
		cout << "Please Enter which roll you would like to have?: ";
		cin >> pchoice1;
		cout << endl;
		if (pchoice1 >= 1 && pchoice1 <= 3)
		{
			cout << "Please Enter Quantity: ";
			cin >> quantity;
			cout << endl;
			switch (pchoice1)
			{
			case 1: bill = 150 * quantity;
				break;

			case 2: bill = 100 * quantity;
				break;

			case 3: bill = 120 * quantity;
				break;

			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "" << quantity << " " << roll1 << endl;
				cout << "Your Total Bill is " << bill << endl;
				cout<<"Your Order Will be delivered in 40 Minutes" << endl;
				cout << endl;
				cout << "Thank you For Ordering From DJRT Jr's. Fast Food " << endl;
				break;
			case 2:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "" << quantity << "  " << roll2 << endl;
				cout << "Your Total Bill is " << bill << endl;
				cout<< "Your Order Will be delivered in 40 Minutes" << endl;
				cout<<endl;
				cout << "Thank you For Ordering From DJRT Jr's. Pizza" << endl;
				break;
			case 3:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "" << quantity << " " << roll3 << endl;
				cout << "Your Total Bill is " << bill << endl;
				cout<< "Your Order Will be delivered in 40 Minutes" << endl;
				cout << endl;
				cout << "Thank you For Ordering From DJRT Jr's. Fast Food" << endl;
				break;


			}
		}


	}

};
class Biryani
{
public:
	char bir1[30] = "Chicken Biryani";
	char bir2[30] = "Prawn Biryani";
	char bir3[30] = "Beef Biryani";
	Biryani()
	{

	}
	void i5()
	{
		int pchoice, pchoice1, quantity, bill;
		cout << endl;
		cout << "1 " << bir1 << " Rs.160" << endl;
		cout << "2 " << bir2 << " Rs.220" << endl;
		cout << "3 " << bir3 << " Rs.140" << endl;
		cout << endl;
		cout << "Please Enter which Biryani you would like to have?:";
		cin >> pchoice1;
		cout << endl;
		if (pchoice1 >= 1 && pchoice1 <= 3)
		{
			cout << "Please Enter Quantity: ";
			cin >> quantity;
			cout << endl;
			switch (pchoice1)
			{
			case 1: bill = 160 * quantity;
				break;

			case 2: bill = 220 * quantity;
				break;

			case 3: bill = 140 * quantity;
				break;

			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t--------Your Order---------"<<endl;
				cout << "  " << quantity << "  " << bir1 << endl;
				cout << "Your Total Bill is " << bill << endl;
				cout << "Your Order Will be delivered in 40 Minutes" << endl;
				cout << endl;
				cout << "Thank you For Ordering From DJRT Jr's. Fast Food " << endl;;
				break;
			case 2:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "" << quantity << "  " << bir2 << endl;
				cout << "Your Total Bill is " << bill << endl;
				cout << "Your Order Will be delivered in 40 Minutes" << endl;
				cout << endl;
				cout << "Thank you For Ordering From DJRT Jr's. Pizza" << endl;
				break;
			case 3:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "" << quantity << " " << bir3 << endl;
				cout << "Your Total Bill is " << bill << endl;
				cout<< "Your Order Will be delivered in 40 Minutes" << endl;
				cout << endl;
				cout << "Thank you For Ordering From DJRT Jr's. Fast Food" << endl;
				break;


			}
		}


	}

};
class Wrap
{
public:
	char wrap[30] = "Tortilla Wrap";
	char w2[30] = "Atomic Wrap";
	char w3[30] = "Garlic Wrap";
	Wrap()
	{

	}
	void i6()
	{

		int pchoice, pchoice1, quantity, bill;
		cout << "\n1 " << wrap << " Rs.560" << "\n";
		cout << "2 " << w2 << " Rs.620" << "\n";
		cout << "3 " << w3 << " Rs.740" << "\n";

		cout << "\nPlease Enter which Wrap you would like to have?:";
		cin >> pchoice1;
		if (pchoice1 >= 1 && pchoice1 <= 3)
		{
			cout << "\nPlease Enter Quantity: ";
			cin >> quantity;
			switch (pchoice1)
			{
			case 1: bill = 560 * quantity;
				break;

			case 2: bill = 620 * quantity;
				break;

			case 3: bill = 740 * quantity;
				break;

			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << wrap;
				cout << "\nYour Total Bill is " << bill << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From DJRT Jr's. Fast Food \n";
				break;
			case 2:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << "  " << w2;
				cout << "\nYour Total Bill is " << bill << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From DJRT Jr's. Pizza\n";
				break;
			case 3:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << w3;
				cout << "\nYour Total Bill is " << bill << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From DJRT Jr's. Fast Food\n";
				break;


			}
		}


	}

};
class Karahi
{
public:
	char k1[30] = "Chicken Karahi";
	char k2[30] = "Beef Karahi";
	char k3[30] = "Mutton Karahi";
	Karahi()
	{

	}
	void i7()
	{
		int pchoice, pchoice1, quantity, bill;

		cout << "\n1 " << k1 << " Rs.1560" << "\n";
		cout << "2 " << k2 << " Rs.1620" << "\n";
		cout << "3 " << k3 << " Rs.1740" << "\n";

		cout << "\nPlease Enter which Karahi you would like to have?:";
		cin >> pchoice1;
		if (pchoice1 >= 1 && pchoice1 <= 3)
		{
			cout << "\nPlease Enter Quantity: ";
			cin >> quantity;
			switch (pchoice1)
			{
			case 1: bill = 1560 * quantity;
				break;

			case 2: bill = 1620 * quantity;
				break;

			case 3: bill = 1740 * quantity;
				break;

			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << k1;
				cout << "\nYour Total Bill is " << bill << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From DJRT Jr's. Fast Food \n";
				break;
			case 2:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << "  " << k2;
				cout << "\nYour Total Bill is " << bill << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From DJRT Jr's. Pizza\n";
				break;
			case 3:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << k3;
				cout << "\nYour Total Bill is " << bill << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From DJRT Jr's. Fast Food\n";
				break;


			}
		}


	}


};
class Soup
{
public:
	char s1[30] = "Chicken Soup";
	char s2[30] = "Hot 'n' Sour Soup";
	char s3[30] = "Mutton Soup";
	Soup()
	{

	}
	void i8()
	{

		int pchoice, pchoice1, quantity, bill;
		cout << "\n1 " << s1 << " Rs.1560" << "\n";
		cout << "2 " << s2 << " Rs.1620" << "\n";
		cout << "3 " << s3 << " Rs.1740" << "\n";

		cout << "\nPlease Enter which Soup you would like to have?:";
		cin >> pchoice1;
		if (pchoice1 >= 1 && pchoice1 <= 3)
		{
			cout << "\nPlease Enter Quantity: ";
			cin >> quantity;
			switch (pchoice1)
			{
			case 1: bill = 1560 * quantity;
				break;

			case 2: bill = 1620 * quantity;
				break;

			case 3: bill = 1740 * quantity;
				break;

			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << s1;
				cout << "\nYour Total Bill is " << bill << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From DJRT Jr's. Fast Food \n";
				break;
			case 2:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << "  " << s2;
				cout << "\nYour Total Bill is " << bill << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From DJRT Jr's. Pizza\n";
				break;
			case 3:
				cout << "\t\t--------Your Order---------\n";
				cout << "" << quantity << " " << s3;
				cout << "\nYour Total Bill is " << bill << "\nYour Order Will be delivered in 40 Minutes";
				cout << "\nThank you For Ordering From DJRT Jr's. Fast Food" << endl;
				break;


			}
		}



	}

};
class Fish
{
public:
	char f1[30] = "Sea Fish";
	char f2[30] = "Jelly Fish";
	char f3[30] = "Shark Fish";
	Fish()
	{

	}
	void i9()
	{

		int pchoice, pchoice1, quantity, bill;
		cout << endl << "1 " << f1 << " Rs.2000" << endl;
		cout << "2 " << f2 << " Rs.5000"  << endl;
		cout << "3 " << f3 << " Rs.7000" << endl;

		cout << endl << "Please Enter which Fish you would like to have?:";
		cin >> pchoice1;
		if (pchoice1 >= 1 && pchoice1 <= 3)
		{
			cout << endl << "Please Enter Quantity: ";
			cin >> quantity;
			switch (pchoice1)
			{
			case 1: bill = 2000 * quantity;
				break;

			case 2: bill = 5000 * quantity;
				break;

			case 3: bill = 7000 * quantity;
				break;

			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "" << quantity << " " << f1;
				cout << endl << "Your Total Bill is " << bill << endl << "Your Order Will be delivered in 40 Minutes";
				cout << endl << "Thank you For Ordering From DJRT Jr's. Fast Food " << endl;
				break;
			case 2:
				cout << "\t\t--------Your Order-------" << endl;
				cout << "" << quantity << "  " << f2;
				cout << endl << "Your Total Bill is " << bill << endl << "Your Order Will be delivered in 40 Minutes";
				cout << endl << "Thank you For Ordering From DJRT Jr's. Pizza" << endl;
				break;
			case 3:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "" << quantity << " " << f3;
				cout << endl << "Your Total Bill is " << bill << endl << "Your Order Will be delivered in 40 Minutes";
				cout << endl << "Thank you For Ordering From DJRT Jr's. Fast Food" << endl;
				break;


			}
		}



	}


};
class Steak
{
public:
	char st1[30] = "Tenderloin Steak";
	char st2[30] = "Porterhouse Steak";
	char st3[30] = "Hanger Steak";
	Steak()
	{

	}
	void i10()
	{

		int pchoice, pchoice1, quantity, bill;
		cout << endl <<"1 " << st1 << " Rs.2000" << endl;
		cout << "2 " << st2 << " Rs.5000" << endl;
		cout << "3 " << st3 << " Rs.7000" << endl;

		cout << "\nPlease Enter which steak you would like to have?:";
		cin >> pchoice1;
		if (pchoice1 >= 1 && pchoice1 <= 3)
		{
			cout << endl <<"Please Enter Quantity: ";
			cin >> quantity;
			switch (pchoice1)
			{
			case 1: bill = 2000 * quantity;
				break;

			case 2: bill = 5000 * quantity;
				break;

			case 3: bill = 7000 * quantity;
				break;

			}
			system("CLS");
			switch (pchoice1)
			{
			case 1:
				cout << "\t\t--------Your Order---------"<< endl;
				cout << "" << quantity << " " << st1;
				cout << endl <<"Your Total Bill is " << bill << endl <<"Your Order Will be delivered in 40 Minutes";
				cout << endl << "Thank you For Ordering From DJRT Jr's. Fast Food "<<endl;
				break;
			case 2:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "" << quantity << "  " << st2;
				cout <<endl<<  "Your Total Bill is " << bill << endl << "Your Order Will be delivered in 40 Minutes" << endl;
				cout << "Thank you For Ordering From DJRT Jr's. Pizza" << endl;
				break;
			case 3:
				cout << "\t\t--------Your Order---------" << endl;
				cout << "" << quantity << " " << st3<< endl;
				cout << "Your Total Bill is " << bill << endl << "Your Order Will be delivered in 40 Minutes" << endl;
				cout << "Thank you For Ordering From DJRT Jr's. Fast Food" << endl;
				break;


			}

		}




	}

};
class Food:public Pizza, public Burger, public Sandwich, public Roll, public Biryani, public Wrap, public Karahi, public Soup, public Fish, public Steak
{ private:
	Pizza ptr1;
	Burger ptr2;
	Sandwich ptr3;
	Roll ptr4;
	Biryani ptr5;
	Wrap ptr6;
	Karahi ptr7;
	Soup ptr8;
	Fish ptr9;
	Steak ptr10;
public:
	char name[30];
	int choice;
	int pchoice;
	int quantity;
	int pchoice1;
	bool flag = 1;
	void name1()
	{
		cout << "\t\t\t----------TR Jr's. Fast Food-----------" << endl << endl;
		cout << "Please Enter Your Name: ";
		cin.getline(name, 30);
		cout << "Hello " << name << "\n\nWhat would you like to order?" << endl << endl;
	}
	void input()
	{
		do
		{


			cout << "\t\t\t\t--------Menu--------" << endl << endl;

			cout << "1) Pizzas" << endl;

			cout << "2) Burgers" << endl;
			cout << "3) Sandwich" << endl;
			cout << "4) Rolls" << endl;
			cout << "5) Biryani" << endl;
			cout << "6) Wrap" << endl;
			cout << "7) Karahi" << endl;
			cout << "8) Soup" << endl;
			cout << "9) Fish" << endl;
			cout << "10) Steak" << endl;
			cout << "11) Exit" << endl;
			cout << endl;

			cout << "Please Enter your Choice: ";
			cin >> choice;

			switch (choice)
			{
			case 1:
				ptr1.i1();
				break;
			case 2:
				ptr2.i2();
				break;
			case 3:
				ptr3.i3();
				break;
			case 4:
				ptr4.i4();
				break;
			case 5:
				ptr5.i5();
				break;
			case 6:
				ptr6.i6();
				break;
			case 7:
				ptr7.i7();
				break;
			case 8:
				ptr8.i8();
				break;
			case 9:
				ptr9.i9();
				break;
			case 10:
				ptr10.i10();
				break;
			case 11:
				flag = 0;

			}
		} while (flag == 1);
	}
};
int main()
{

	Food obj;
	obj.name1();
	obj.input();

	return 0;
}