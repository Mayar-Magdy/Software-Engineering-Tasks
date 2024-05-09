class Department {
  private:
    string name;
    Person **a;
    Student *s;
    Employee *e;
    int size; // size of the arrays

  public:
    Department(string name ,  Person **a, int size) {
      this->name = name;
      this->a = a;
      this->size = size;
      // allocate memory for the arrays
      s = new Student[size];
      e = new Employee[size];
      // assign the elements of a to the arrays
      for (int i = 0; i < size; i++) {
        // try to cast the element to a Student object
        Student* st = dynamic_cast<Student*>(a[i]);
        if (st != nullptr) {
          // the element is a Student object, assign it to s
          s[i] = *st;
        }
        else {
          // try to cast the element to an Employee object
          Employee* em = dynamic_cast<Employee*>(a[i]);
          if (em != nullptr) {
            // the element is an Employee object, assign it to e
            e[i] = *em;
          }
        }
      }
    }
    string getName() {return name;}
    void setName(string name) {this->name = name;}
    void display(){
        for(int i=0 ; i<size;++i){
          a[i]->display_data();
        }
    }
    // display the data of the student array
    void display_Student() {
      for (int i = 0; i < size; i++) {
        s[i].display_data();
      }
    }
    // display the data of the employee array
    void display_Employee() {
      for (int i = 0; i < size; i++) {
        e[i].display_data();
      }
    }
    // free the memory of the arrays
    ~Department() {
      delete[] s;
      delete[] e;
    }
};
