#include <iostream>
#include <string.h>
#include <string>


class Human
{

private:
	std::string name_h;
	int age_h;
	char sex_h;
	Human() {};
protected:
	Human(std::string, int, char);
	Human(std::string name, int age, char sex)
		: name_h(name), age_h(age), sex_h(sex) {
		std::cout << "Human created";
	}
	virtual ~Human() 
	{
		std::cout << "Destructor base";
	}
public: 

	//getters;
	std::string getName();
	int getAge();
	char getSex();

	//setters
	void setName(std::string);
	void setAge(int);
	void setSex(char);
	Human(std::string name, int age, char sex);
};

Human::Human() 
{
	name_h = " ";
	age_h = 0;
	sex_h = ' ';
}
Human::Human(std::string name, int age, char sex) 
{
	name_h = name;
	age_h = age;
	sex_h = sex;
}
//accessors
std::string Human::getName() 
{
	return name_h;
}
int Human::getAge() 
{
	return age_h;
}
char Human::getSex() 
{
	return sex_h;
}
//setters
void Human::setName(std::string name) 
{
	name_h = name;
}
void Human::setAge(int age) 
{
	age_h = age;
}
void Human::setSex(char sex) 
{
	sex_h = sex;
}

class Child : public Human 
{
private:
	std::string momName;
	std::string dadName;
	int allowance;
	Child();
public:
	Child(std::string, int, char, std::string, std::string);
	//setters
	void setMomName();
	void setDadName();
	void setAllowance();
	//getters
	std::string getMomName();
	std::string getDadName();
	int getAllowance() const;
	//print parent information
	void printParent(); 
};

Child::Child():Human()
{
	momName = " ";
	dadName = " ";

}

class Parent : public Human 
{

};
