#include "c:\Users\james\Desktop\std_lib_facilities.h"

int main()

{
	//converter from yen, euros, and british pounds into usd.

	constexpr double gbp_gbp = 1; //gbp exchange values.
	constexpr double gbp_eur = 1.15;
	constexpr double gbp_usd = 1.18;
	constexpr double gbp_yen = 167.93;
	constexpr double gbp_yuan = 8.49;
	constexpr double gbp_kroner = 8.59;

	constexpr double eur_gbp = 0.87; //eur values.
	constexpr double eur_usd = 1.03;
	constexpr double eur_yen = 145.59;
	constexpr double eur_yuan = 7.35;
	constexpr double eur_kroner = 7.44;
	constexpr double eur_eur = 1;

	constexpr double usd_gbp = 0.84; //usd values.
	constexpr double usd_eur = 0.97;
	constexpr double usd_usd = 1;
	constexpr double usd_yen = 141.88;
	constexpr double usd_yuan = 7.16;
	constexpr double usd_kroner = 7.25;

	constexpr double yen_gbp = 0.0059; //yen values.
	constexpr double yen_eur = 0.0069;
	constexpr double yen_usd = 0.0070;
	constexpr double yen_yen = 1;
	constexpr double yen_yuan = 0.051;
	constexpr double yen_kroner = 0.051;

	constexpr double yuan_gbp = 0.12; //CNY values.
	constexpr double yuan_eur = 0.14;
	constexpr double yuan_usd = 0.14;
	constexpr double yuan_yen = 19.79;
	constexpr double yuan_yuan = 1;
	constexpr double yuan_kroner = 1.01;

	constexpr double kroner_gbp = 0.12; //kroner values.
	constexpr double kroner_eur = 0.13;
	constexpr double kroner_usd = 0.14;
	constexpr double kroner_yen = 19.57;
	constexpr double kroner_yuan = 0.99;
	constexpr double kroner_kroner = 1;


	cout << "Please enter the two currencies you'd like to convert, followed by the amount.\n"
		<< "Available currencies are:\n"
		<< "GBP (G/g)\n" << "EUR (E/e)\n" << "USD (U/u)\n" << "JPY (J/j)\n" << "RMB (R/r)\n" << "KRO (K/k)\n"
		<< "For example, to convert 300 EUR to JPY, please enter 300 E J.\n"; // included example to aid user input.

	char c1, c2 = ' '; //we use chars here, to store the input.
	double amount = 0;
	
	while(cin >> amount >> c1 >> c2){
		switch (c1) {
		case 'G': case 'g': //if c1 is GBP = G/g...
			switch (c2) /*gbp - ? conversion control flow*/{
			case 'G': case 'g': //gbp-gbp conversion.
				cout << "You have selected the same currencies!\n";
				break;

			case 'E': case 'e': //gbp-eur
				cout << amount << " GBP is " << amount * gbp_eur << " EUR.\n";
				break;

			case 'U': case 'u': //gbp-usd
				cout << amount << "GBP is " << amount * gbp_usd << "USD.\n";
				break;

			case 'J': case 'j': //gbp-jpy
				cout << amount << "GBP is " << amount * gbp_yen << "JPY.\n";
				break;

			case 'R': case 'r': //gbp-rmb
				cout << amount << "GBP is " << amount * gbp_yuan << "RMB.\n";
				break;

			case 'K': case 'k': //gbp-kro
				cout << amount << "GBP is " << amount * gbp_kroner << "KRO.\n";
				break;

			default: //default case. 
				cout << "Apologies, the second currency code is not recognised, please try again.\n"; //input looks like "300 G x".
				break;
			}
			break;
		case 'E': case 'e': //eur conversion.
			switch (c2) {
				
			case 'G':case 'g':
				cout << amount << " EUR is " << amount * eur_gbp << " GBP.\n";
				break;
			case 'E':case 'e':
				cout << "You have selected the same currencies!.\n";
				break;
			case 'U':case 'u':
				cout << amount << " EUR is " << amount * eur_usd << " USD.\n";
				break;
			case 'J':case 'j':
				cout << amount <<  " EUR is " << amount * eur_yen << " JPY.\n";
				break;
			case 'R':case 'r':
				cout << amount << " EUR is " << amount * eur_yuan << " RMB.\n";
				break;
			case 'K':case 'k':
				cout << amount << " EUR is " << amount * eur_kroner << " KRO.\n";
				break;
			default:
				cout << "The second currency code has not been recognised, please try again.\n";
				break;

			}
			break;
		case 'U': case 'u': //usd conversion.
			switch (c2) {
			case 'G':case 'g':
				cout << amount << " USD is " << amount * usd_gbp << " GBP.\n";
				break;
			case 'E':case 'e':
				cout << amount << " USD is " << amount * usd_eur << "EUR.\n";
				break;
			case 'U':case 'u':
				cout << "You have selected the same currencies!\n";
				break;
			case 'J':case 'j':
				cout << amount << " USD is " << amount * usd_yen << " JPY.\n";
				break;
			case 'R':case 'r':
				cout << amount << " USD is " << amount * usd_yuan << " RMB.\n";
				break;
			case 'K':case 'k':
				cout << amount << " USD is " << amount * usd_kroner << " KRO.\n";
				break;
			default:
				cout << "The second currency code has not been recognised, please try again.\n";
				break;
			}
			break;
		case 'J': case 'j': //JPY conversion.
			switch (c2) {
			case 'G':case 'g':
				cout << amount << " JPY is " << amount * yen_gbp << " GBP.\n";
				break;
			case 'E':case 'e':
				cout << amount << " JPY is " << amount * yen_eur << "EUR.\n";
				break;
			case 'U':case 'u':
				cout << amount << " JPY is " << amount * yen_usd << " USD.\n";
				break;
			case 'J':case 'j':
				cout << "You have selected the same currencies!\n";
				break;
			case 'R':case 'r':
				cout << amount << " JPY is " << amount * yen_yuan << " RMB.\n";
				break;
			case 'K':case 'k':
				cout << amount << " JPY is " << amount * yen_kroner << " KRO.\n";
				break;
			default:
				cout << "The second currency code has not been recognised, please try again.\n";
				break;
			}
			break;
		case 'R':case 'r': //rmb conversion.
			switch(c2){
			case 'G':case 'g':
				cout << amount << " RMB is " << amount * yuan_gbp << " GBP.\n";
				break;
			case 'E':case 'e':
				cout << amount << " RMB is " << amount * yuan_eur << " EUR.\n";
				break;
			case 'U':case 'u':
				cout << amount << " RMB is " << amount * yuan_usd << " USD.\n";
				break;
			case 'J':case 'j':
				cout << amount << " RMB is " << amount * yuan_yen << " JPY.\n";
				break;
			case 'R':case 'r':
				cout << "You have selected the same currencies!\n";
				break;
			case 'K':case 'k':
				cout << amount << " RMB is " << amount * yuan_kroner << " KRO.\n";
				break;
			default:
				cout << "The second currency code has not been recognised, please try again.\n";
				break;
			}
			break;
		case 'K': case 'k': //kroner conversion.
			switch (c2) {
			case 'G':case 'g':
				cout << amount << " KRO is " << amount * kroner_gbp << " GBP.\n";
				break;
			case 'E':case 'e':
				cout << amount << " KRO is " << amount * kroner_eur << " EUR.\n";
				break;
			case 'U':case 'u':
				cout << amount << " KRO is " << amount * kroner_usd << " USD.\n";
				break;
			case 'J':case 'j':
				cout << amount << " KRO is " << amount * kroner_yen << " JPY.\n";
				break;
			case 'R':case 'r':
				cout << amount << " KRO is " << amount * kroner_yuan << " RMB.\n";
				break;
			case 'K':case 'k':
				cout << "You have selected the same currencies!\n";
				break;
			default:
				cout << "The second currency code has not been recognised, please try again.\n";
				break;
			}
			break;
		default:
			cout << "The code of the first currency was not recognised. Please try again.";
			break;
		}
		/*if (c1 == "gbp")
			if (c2 == "gbp")
				cout << "You have selected the same currencies!\n";
			if (c2 == "eur")
				cout << amount << " GBP is " << (amount * gbp) * eur << " EUR.\n";
			if (c2 == "usd")
				cout << amount << "GBP is " << (amount * gbp) * usd << "USD.\n";
			if (c2 == "yen")
				cout << amount << "GBP is " << (amount * gbp) * yen << "JPY.\n";
				*/

	}
} //we may as well implement a while loop here, if we will implement switch!

	/*if (c1 == "gbp")
		if (c2 == "gbp")
			cout << "You have selected the same currencies!\n";
		if (c2 == "eur")
			cout << amount << " GBP is " << (amount * gbp) * eur << " EUR.\n";
		if (c2 == "usd")
			cout << amount << "GBP is " << (amount * gbp) * usd << "USD.\n";
		if (c2 == "yen")
			cout << amount << "GBP is " << (amount * gbp) * yen << "JPY.\n";
			*/