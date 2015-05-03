#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
#include "string"
#include "vector"

struct ContactNode{
	std::string name;
	int phoneNumber;
	std::string Group;
	bool Favorite;
	ContactNode *next;
	ContactNode *previous;

	ContactNode(){};

	ContactNode(std::string in_name, int in_phoneNumber){
		name = in_name;
		phoneNumber = in_phoneNumber;
		Group = " ";
		Favorite = false;
		next = NULL;
	}
};

class AddressBook
{
public:
	AddressBook();
	~AddressBook();
	void addContact(std::string name, int phone, std::string group);
	void deleteContact(std::string name);
	void printContacts();
	ContactNode* findContact(std::string name);
	void editContact(std::string name);
  	void groupCreate(std::string name);
  	void addContactToGroup(std::string name, std::string group);
	void removeGroup(std::string group);
  	void printGroups();
  	void addFavorite(std::string name);
  	void removeFavorite(std::string name);
  	void printFavorites();


private:
    void printContacts(ContactNode *node);
    void printFavorites(ContactNode *node);
	int totCount=0;
	ContactNode *head;
	ContactNode *tail;
	std::vector<std::string> GroupNames;
};
#endif // ADDRESSBOOK_H
