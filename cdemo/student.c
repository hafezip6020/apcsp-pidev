#include <stdio.h>
#include <string.h>

struct Student {
char FirstName[50];
char LastName[50];
int StudentId;
int Age;
};

void printStudent(struct Student* student) {
  printf("Name: %s %s\n", student-> FirstName, student-> LastName);
  printf("Age: %d\n", student-> Age);
  printf("Student ID: %d\n", student -> StudentId);
}

int main(void) {
  int NumStudent;
  char input[256];
  int In;
  printf("How many students do you want to enter: \n");
  scanf("%d", &NumStudent);
  struct Student student[NumStudent];
  for (int i= 0; i< NumStudent; i++) {
    printf("Student number %d\n", i+1);
    printf("First Name: ");
    scanf("%s", input);
    strcpy(student[i].FirstName, input);
    printf("Last Name: ");
    scanf("%s", input);
    strcpy(student[i].LastName, input);
    printf("StudentId: ");

    scanf("%d", &In);
    student[i].StudentId = In;
    printf("Age: ");
    scanf("%d", &In);
    student[i].Age = In;
  }

  for (int i= 0; i< NumStudent; i++){
    printf("Student number %d\n", i+1);
    printStudent(&student[i]);
  }

}
