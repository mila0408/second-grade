#pragma once
#include<iostream>
using namespace std;
namespace SystemBank{
	class Passport {
	protected:
		int number, seria;
		string date,issuedByWhom;
	public:
		Passport();
		~Passport();
		Passport(int, int, string, string);
		void setrNumber(int);
		void setrSeria(int);
		void setrDate(string);
		void setrIssuedByWhom(string);
		int getrNumber();
		int getrSeria();
		string getrDate();
		string getrIssuedByWhom();
	};
	class Client {
	protected:
		string name, surname, patronymic;
		Passport passport;
		Account** account;
	public:
		Client();
		~Client();
		Client(string, string, string, Passport, Account**);
		void setrName(string);
		void setrSurname(string);
		void setrPatronymic(string);
		void setrPassport(Passport);
		string getrName();
		string getrSurname();
		string getrPatronymic();
		Passport getrPassport();
	};
	class Account {
	protected:
		long namberAccount;
		int balance;
	public:
		Account();
		~Account();
		Account(long, int);
		void setrNumberAccount( long);
		void setrBalance(int);
		int getrBalance();
		long getrNumberAccount();
    };
	class SavingAccount:private Account {
	protected:
		long namberSavingAccount;
		int SavingAccountbalance;
	public:
		SavingAccount();
		~SavingAccount();
		SavingAccount(long, int);
		void setrNumberSavingAccount(long);
		void setrSavingAccount(int);
		long getrNumberSavingAccount();
		int getrSavingAccount();
	};
	class Deposit :private Account {
	protected:
		long namberDepositAccount;
		int DepositAccountbalance;
	public:
		Deposit();
		~Deposit();
		Deposit(long, int);
		void setrNumberDepositAccount(long);
		void setrDepositAccount(int);
		long getrNumberDepositAccount();
		int getrSDepositAccount();
	};
    class Bank{
	protected:
		Client* clients;
		string name;
	public:
		Bank();
		~Bank();
		Bank(Client*, string);
		void setrName(string);
		string getrName();
	};

}

