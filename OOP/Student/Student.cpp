class Student {
    int age;
    char *name;

    public:
        Student(int age, char *name) {
            this->name = new char[strlen(name)+1]; 
            this->age = age;
            strcpy(this->name, name);
        }

        void display() {
            cout<<name<<"  "<<age<<endl;
        }
};