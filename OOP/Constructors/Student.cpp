class Student {
    private:
        string name;
        int rollNumber;
        int age;
    public:
        Student() {
            name="ABC";
            rollNumber=123;
            age=10;
        }

        Student(int rollNumber, string name, int age) {
            this->rollNumber = rollNumber;
            this->name = name;
            this->age = age;
        }
        string getName() {
            return name;
        }

        int getRollNumber() {
            return rollNumber;
        }

        int getAge() {
            return age;
        }

        void setName(string studName) {
            name = studName;
        }
        void setRollNumber(int studRoll) {
            rollNumber = studRoll;
        }
        void setAge(int studAge) {
            age = studAge;
        }
        
};
