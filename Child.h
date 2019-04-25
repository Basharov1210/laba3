#ifndef CHILD_H
#define CHILD_H
class Child {
private:
	string name;
	string surname;
	int age;
public:
	int getAge();
	string getName();
	string getSurName();
	void setName(string name);
	void setLastName(string surname);
	void setAge(int age);
};

#endif 