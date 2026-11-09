#include<iostream>
using namespace std;
//Read marks
void readMarks(int marks[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter mark for student "<<i+1<<": ";
        cin>>marks[i];
    }
}

//Calculate total
int findTotal(int marks[], int n)
{
    int total = 0;
    for(int i=0;i<n;i++)
    {
        total = total + marks[i];
    }
    return total;
}

//Calculate Average
float findAverage(int total, int n)
{
    float average;
    average = (float)total / n; 
    return average;
}

//find highest mark
int findHighest(int marks[], int n)
{
    int highest = marks[0];
    for(int i=1;i<n;i++)
    {
        if(marks[i]>highest)
        {
            highest = marks[i];
        }
    }
    return highest;
}

//find lowest marks
int findLowest(int marks[], int n)
{
    int lowest = marks[0];

    for(int i=1;i<n;i++)
    {
        if(marks[i]<lowest)
        {
            lowest = marks[i];
        }
    }
    return lowest;
}

//count passed students
int countPassed(int marks[], int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(marks[i] >= 50)
        {
            count++;
        }
    }
    return count;
}

//Count failed students
int countFailed(int marks[], int n)
{
    int failed;
    failed = n-countPassed(marks,n);
    return failed;
}

//Display the report
void printReport(int total, float average, int highest, int lowest, int passed, int failed)
{
    cout<<"\n--- STUDENT MARKS REPORT ---"<<endl;
    cout<<"Total Marks: "<<total<<endl;
    cout<<"Average Marks: "<<average<<endl;
    cout<<"Highest Marks: "<<highest<<endl;
    cout<<"Lowest Marks: "<<lowest<<endl;
    cout<<"Passed Students: "<<passed<<endl;
    cout<<"Failed Students: "<<failed<<endl;
}

int main()
{
    int n;
    cout<<"enter number of students: ";
    cin>>n;
    while(n<1||n>100)
    {
        cout<<"invalid! enter again: ";
        cin>>n;
    }

    int marks[100];
    cout<<"STUDENT MARKS ANALYSIS"<<endl;
    readMarks(marks,n);

    int total = findTotal(marks,n);
    cout<<"\nTotal Marks: "<<total<<endl;

    float average = findAverage(total,n);
    cout<<"\nAverage Marks: "<<average<<endl;

    int highest = findHighest(marks,n);
    cout<<"\nHighest Marks: "<<highest<<endl;

    int lowest = findLowest(marks,n);
    cout<<"\nLowest marks: "<<lowest<<endl;

    int count = countPassed(marks,n);
    cout<<"\nPassed student: "<<count<<endl;

    int failed = countFailed(marks,n);
    cout<<"\nFailed student: "<<failed<<endl;

    printReport(total,average,highest,lowest,count,failed);
    return 0;
}



