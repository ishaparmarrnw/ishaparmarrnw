
#include<stdio.h>
struct student
{
 int roll_no;
 char name[20];
 float chemistry;
 float mathmatics ;
 float physics;
};

 int main()
  {
struct student students[5];
    int i;
      printf("enter details of 5 students:\n");
      for (i = 0; i < 5; i++) {
      printf("\n student %d:\n", i + 1);
    printf("roll_no:");
    scanf("%d",&students[i].roll_no);
    printf("name:");
    scanf("%s",&students[i].name);
    printf("chemistry:");
    scanf("%f",&students[i].chemistry);
    printf("matmatics:");
    scanf("%f",&students[i].mathmatics);
    printf("physics:");
    scanf("%f",&students[i].physics);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%s (%d)", students[i].name, students[i].roll_no);
        printf("Chemistry: %f", students[i].chemistry);
        printf("Mathematics: %f", students[i].mathmatics);
        printf("Physics: %f", students[i].physics);
        int totalMarks = students[i].chemistry + students[i].mathmatics + students[i].physics;
        printf("Total:%d/300", totalMarks);
        float percentage =(totalMarks / 300.0)* 100;
        printf("Percent:%f%%\n", percentage);
        printf("\n");
    }
     
      return 0;
}